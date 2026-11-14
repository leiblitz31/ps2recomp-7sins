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

// Function: sub_00348CF8
// Address: 0x348cf8 - 0x348d60
void sub_00348CF8_0x348cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348CF8_0x348cf8");
#endif

    switch (ctx->pc) {
        case 0x348d18u: goto label_348d18;
        case 0x348d48u: goto label_348d48;
        default: break;
    }

    ctx->pc = 0x348cf8u;

    // 0x348cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x348cfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x348cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x348d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348d04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x348d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348d08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348d0c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x348d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x348d10: 0xc0d120c  jal         func_344830
    ctx->pc = 0x348D10u;
    SET_GPR_U32(ctx, 31, 0x348D18u);
    ctx->pc = 0x348D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D10u;
    // 0x348d14: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x348D10u, 0x348D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D18u;
label_348d18:
    // 0x348d18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x348d18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348d1c: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x348D1Cu;
    {
        const bool branch_taken_0x348d1c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x348D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D1Cu;
        // 0x348d20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348d1c) {
            ctx->pc = 0x348D4Cu;
            goto label_348d4c;
        }
    }
    ctx->pc = 0x348D24u;
    // 0x348d24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x348d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x348d28: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x348d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x348d2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x348D2Cu;
    {
        const bool branch_taken_0x348d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D2Cu;
        // 0x348d30: 0x2032021  addu        $a0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348d2c) {
            ctx->pc = 0x348D48u;
            goto label_348d48;
        }
    }
    ctx->pc = 0x348D34u;
    // 0x348d34: 0x8c8400a4  lw          $a0, 0xA4($a0)
    ctx->pc = 0x348d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x348d38: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x348D38u;
    {
        const bool branch_taken_0x348d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x348D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D38u;
        // 0x348d3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348d38) {
            ctx->pc = 0x348D4Cu;
            goto label_348d4c;
        }
    }
    ctx->pc = 0x348D40u;
    // 0x348d40: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x348D40u;
    SET_GPR_U32(ctx, 31, 0x348D48u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x348D40u, 0x348D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D48u;
label_348d48:
    // 0x348d48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x348d48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_348d4c:
    // 0x348d4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348d50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x348d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348d54: 0x3e00008  jr          $ra
    ctx->pc = 0x348D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D54u;
        // 0x348d58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348D5Cu;
    // 0x348d5c: 0x0  nop
    ctx->pc = 0x348d5cu;
    // NOP
    ctx->pc = 0x348d60u;
}
