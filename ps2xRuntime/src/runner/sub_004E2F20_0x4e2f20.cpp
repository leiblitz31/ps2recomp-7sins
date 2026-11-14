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

// Function: sub_004E2F20
// Address: 0x4e2f20 - 0x4e2f60
void sub_004E2F20_0x4e2f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2F20_0x4e2f20");
#endif

    switch (ctx->pc) {
        case 0x4e2f30u: goto label_4e2f30;
        default: break;
    }

    ctx->pc = 0x4e2f20u;

    // 0x4e2f20: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E2F20u;
    {
        const bool branch_taken_0x4e2f20 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e2f20) {
            ctx->pc = 0x4E2F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2F20u;
            // 0x4e2f24: 0x63616c70  daddi       $at, $k1, 0x6C70 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27760; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE4C8u;
            return;
        }
    }
    ctx->pc = 0x4E2F28u;
    // 0x4e2f28: 0x666e6965  daddiu      $t6, $s3, 0x6965
    ctx->pc = 0x4e2f28u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)26981);
    // 0x4e2f2c: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2f2cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e2f30:
    // 0x4e2f30: 0x0  nop
    ctx->pc = 0x4e2f30u;
    // NOP
    // 0x4e2f34: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4e2f34u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
    // 0x4e2f38: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2f38u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E2F38 raw=0x00000001");
    // 0x4e2f3c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e2f3cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x4e2f40: 0x0  nop
    ctx->pc = 0x4e2f40u;
    // NOP
    // 0x4e2f44: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4e2f44u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
    // 0x4e2f48: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2f48u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E2F48 raw=0x00000001");
    // 0x4e2f4c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e2f4cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x4e2f50: 0x1410142  .word       0x01410142                   # srl         $zero, $at, 5 # 01400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2f50u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 5));
    // 0x4e2f54: 0x1440143  .word       0x01440143                   # sra         $zero, $a0, 5 # 01400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2f54u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 4), 5));
    // 0x4e2f58: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x4e2f58u;
    
    // 0x4e2f5c: 0x0  nop
    ctx->pc = 0x4e2f5cu;
    // NOP
    ctx->pc = 0x4e2f60u;
}
