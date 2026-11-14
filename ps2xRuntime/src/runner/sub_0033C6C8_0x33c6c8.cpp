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

// Function: sub_0033C6C8
// Address: 0x33c6c8 - 0x33c760
void sub_0033C6C8_0x33c6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C6C8_0x33c6c8");
#endif

    switch (ctx->pc) {
        case 0x33c6f8u: goto label_33c6f8;
        case 0x33c710u: goto label_33c710;
        case 0x33c720u: goto label_33c720;
        case 0x33c730u: goto label_33c730;
        case 0x33c740u: goto label_33c740;
        default: break;
    }

    ctx->pc = 0x33c6c8u;

    // 0x33c6c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33c6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33c6cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33c6d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x33c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x33c6d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33c6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c6d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x33c6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x33c6dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33c6dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c6e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c6e4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33c6e8: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x33c6e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x33c6ec: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33c6f0: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33C6F0u;
    SET_GPR_U32(ctx, 31, 0x33C6F8u);
    ctx->pc = 0x33C6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C6F0u;
    // 0x33c6f4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33C6F0u, 0x33C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C6F8u;
label_33c6f8:
    // 0x33c6f8: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33C6F8u;
    {
        const bool branch_taken_0x33c6f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C6F8u;
        // 0x33c6fc: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c6f8) {
            ctx->pc = 0x33C740u;
            goto label_33c740;
        }
    }
    ctx->pc = 0x33C700u;
    // 0x33c700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33c700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c704: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33c704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c708: 0xc10341a  jal         func_40D068
    ctx->pc = 0x33C708u;
    SET_GPR_U32(ctx, 31, 0x33C710u);
    ctx->pc = 0x33C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C708u;
    // 0x33c70c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x33C708u, 0x33C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C710u;
label_33c710:
    // 0x33c710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33c710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c714: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x33c714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x33c718: 0xc10341a  jal         func_40D068
    ctx->pc = 0x33C718u;
    SET_GPR_U32(ctx, 31, 0x33C720u);
    ctx->pc = 0x33C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C718u;
    // 0x33c71c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x33C718u, 0x33C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C720u;
label_33c720:
    // 0x33c720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33c720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c724: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x33c724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x33c728: 0xc10341a  jal         func_40D068
    ctx->pc = 0x33C728u;
    SET_GPR_U32(ctx, 31, 0x33C730u);
    ctx->pc = 0x33C72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C728u;
    // 0x33c72c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x33C728u, 0x33C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C730u;
label_33c730:
    // 0x33c730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33c730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c734: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x33c734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x33c738: 0xc10341a  jal         func_40D068
    ctx->pc = 0x33C738u;
    SET_GPR_U32(ctx, 31, 0x33C740u);
    ctx->pc = 0x33C73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C738u;
    // 0x33c73c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x33C738u, 0x33C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C740u;
label_33c740:
    // 0x33c740: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x33c740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c744: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x33c744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33c748: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33c748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c74c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x33c74cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c754: 0x3e00008  jr          $ra
    ctx->pc = 0x33C754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C754u;
        // 0x33c758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C75Cu;
    // 0x33c75c: 0x0  nop
    ctx->pc = 0x33c75cu;
    // NOP
    ctx->pc = 0x33c760u;
}
