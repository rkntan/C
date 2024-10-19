#include "high_scores.h"
#include <stdio.h>
#include <stdlib.h>

/// Return the latest score.
int32_t latest(const int32_t *scores, size_t scores_len)
{
    return scores[scores_len - 1];
}

/// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len)
{
    int32_t best_score = 0;
    for (size_t i = 0; i < scores_len - 1; i++)
    {
        if (scores[i] > scores[i + 1])
        {
            best_score = scores[i];
        }
    }
    return best_score;
}
/// Write the highest scores to `output` (in non-ascending order).
/// Return the number of scores written.
size_t personal_top_three(const int32_t *scores, size_t scores_len,
                          int32_t *output)
{
    if (scores_len == 0)
    {
        return 0;
    }

    int32_t *cpy_scores = malloc(scores_len * sizeof(int32_t));
    if (cpy_scores == NULL)
    {
        return 0;
    }
    for (size_t i = 0; i < scores_len; ++i)
    {
        cpy_scores[i] = scores[i];
    }
    for (size_t i = 0; i < scores_len - 1; ++i)
    {
        for (size_t j = 0; j < scores_len - i - 1; ++j)
        {
            if (cpy_scores[j] < cpy_scores[j + 1])
            {
                int32_t temp = cpy_scores[j + 1];
                cpy_scores[j + 1] = cpy_scores[j];
                cpy_scores[j] = temp;
            }
        }
    }

    for (size_t i = 0; i < (scores_len < 3 ? scores_len : 3); ++i)
        output[i] = cpy_scores[i];
    free(cpy_scores);
    return (scores_len < 3 ? scores_len : 3);
}