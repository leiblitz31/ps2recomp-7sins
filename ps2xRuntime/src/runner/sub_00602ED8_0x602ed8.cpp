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

// Function: sub_00602ED8
// Address: 0x602ed8 - 0x602f08
void sub_00602ED8_0x602ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00602ED8_0x602ed8");
#endif

    ctx->pc = 0x602ed8u;

    // 0x602ed8: 0xa254cec  j           func_89533B0
    ctx->pc = 0x602ED8u;
    ctx->pc = 0x602EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x602ED8u;
    // 0x602edc: 0x4c03d9ba  .word       0x4C03D9BA                   # INVALID     $zero, $v1, -0x2646 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602EDC raw=0x4C03D9BA");
    ctx->in_delay_slot = false;
    ctx->pc = 0x89533B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89533B0u, 0x602ED8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x602EE0u;
    // 0x602ee0: 0x80f261ac  lb          $s2, 0x61AC($a3)
    ctx->pc = 0x602ee0u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 25004)));
    // 0x602ee4: 0x9cebc048  lwu         $t3, -0x3FB8($a3)
    ctx->pc = 0x602ee4u;
    SET_GPR_ZE32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 7), 4294950984)));
    // 0x602ee8: 0x1e4dd2b6  .word       0x1E4DD2B6                   # bgtz        $s2, . + 4 + (-0x2D4A << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602EE8u;
    {
        const bool branch_taken_0x602ee8 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x602EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x602EE8u;
        // 0x602eec: 0x4588b2f2  .word       0x4588B2F2                   # INVALID     $t4, $t0, -0x4D0E # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x32 at 0x602EEC raw=0x4588B2F2");
        ctx->in_delay_slot = false;
        if (branch_taken_0x602ee8) {
            ctx->pc = 0x5F79C4u;
            return;
        }
    }
    ctx->pc = 0x602EF0u;
    // 0x602ef0: 0x3ecf818d  .word       0x3ECF818D                   # lui         $t7, 0x818D # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602ef0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)33165 << 16));
    // 0x602ef4: 0x362b662b  ori         $t3, $s1, 0x662B
    ctx->pc = 0x602ef4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)26155);
    // 0x602ef8: 0x27aced49  addiu       $t4, $sp, -0x12B7
    ctx->pc = 0x602ef8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962505));
    // 0x602efc: 0x46c0f21d  .word       0x46C0F21D                   # INVALID     $s6, $zero, -0xDE3 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602efcu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x1D at 0x602EFC raw=0x46C0F21D");
    // 0x602f00: 0xaf88129f  sw          $t0, 0x129F($gp)
    ctx->pc = 0x602f00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4767), GPR_U32(ctx, 8));
    // 0x602f04: 0xd5875c  .word       0x00D5875C                   # dmult       $a2, $s5 # 00008740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602f04u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602F04 raw=0x00D5875C");
    ctx->pc = 0x602f08u;
}
