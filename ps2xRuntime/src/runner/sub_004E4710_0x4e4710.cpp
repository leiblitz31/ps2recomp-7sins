#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E4710
// Address: 0x4e4710 - 0x4e4738
void sub_004E4710_0x4e4710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4710_0x4e4710");
#endif

    ctx->pc = 0x4e4710u;

    // 0x4e4710: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4710u;
    {
        const bool branch_taken_0x4e4710 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4710) {
            ctx->pc = 0x4E4714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4710u;
            // 0x4e4714: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFCB8u;
            return;
        }
    }
    ctx->pc = 0x4E4718u;
    // 0x4e4718: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4718u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E4718 raw=0x4E41505F");
    // 0x4e471c: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E471Cu;
    {
        const bool branch_taken_0x4e471c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e471c) {
            ctx->pc = 0x4E4720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E471Cu;
            // 0x4e4720: 0x4d5f4d  break       77, 381 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5C58u;
            return;
        }
    }
    ctx->pc = 0x4E4724u;
    // 0x4e4724: 0x0  nop
    ctx->pc = 0x4e4724u;
    // NOP
    // 0x4e4728: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4e4728u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
    // 0x4e472c: 0x0  nop
    ctx->pc = 0x4e472cu;
    // NOP
    // 0x4e4730: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4730u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E4730 raw=0x00000001");
    // 0x4e4734: 0x0  nop
    ctx->pc = 0x4e4734u;
    // NOP
    ctx->pc = 0x4e4738u;
}
