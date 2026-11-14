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

// Function: sub_004E1190
// Address: 0x4e1190 - 0x4e11a8
void sub_004E1190_0x4e1190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1190_0x4e1190");
#endif

    switch (ctx->pc) {
        case 0x4e1198u: goto label_4e1198;
        default: break;
    }

    ctx->pc = 0x4e1190u;

    // 0x4e1190: 0x4e495337  .word       0x4E495337                   # INVALID     $s2, $t1, 0x5337 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1190u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E1190 raw=0x4E495337");
    // 0x4e1194: 0x55422053  bnel        $t2, $v0, . + 4 + (0x2053 << 2)
label_4e1198:
    if (ctx->pc == 0x4E1198u) {
        ctx->pc = 0x4E1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1194u;
        // 0x4e1198: 0x20444c49  addi        $a0, $v0, 0x4C49 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19529, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E119Cu;
        goto label_fallthrough_0x4e1194;
    }
    ctx->pc = 0x4E1194u;
    {
        const bool branch_taken_0x4e1194 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e1194) {
            ctx->pc = 0x4E1198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1194u;
            // 0x4e1198: 0x20444c49  addi        $a0, $v0, 0x4C49 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19529, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E92E4u;
            return;
        }
    }
label_fallthrough_0x4e1194:
    ctx->pc = 0x4E119Cu;
    // 0x4e119c: 0x464e4f43  .word       0x464E4F43                   # INVALID     $s2, $t6, 0x4F43 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e119cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3 at 0x4E119C raw=0x464E4F43");
    // 0x4e11a0: 0x3a204749  xori        $zero, $s1, 0x4749
    ctx->pc = 0x4e11a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)18249);
    // 0x4e11a4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x4e11a4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->pc = 0x4e11a8u;
}
