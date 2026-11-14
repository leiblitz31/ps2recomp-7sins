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

// Function: sub_00440F78
// Address: 0x440f78 - 0x440fe0
void sub_00440F78_0x440f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440F78_0x440f78");
#endif

    switch (ctx->pc) {
        case 0x440f78u: goto label_440f78;
        case 0x440f7cu: goto label_440f7c;
        case 0x440f80u: goto label_440f80;
        case 0x440f84u: goto label_440f84;
        case 0x440f88u: goto label_440f88;
        case 0x440f8cu: goto label_440f8c;
        case 0x440f90u: goto label_440f90;
        case 0x440f94u: goto label_440f94;
        case 0x440f98u: goto label_440f98;
        case 0x440f9cu: goto label_440f9c;
        case 0x440fa0u: goto label_440fa0;
        case 0x440fa4u: goto label_440fa4;
        case 0x440fa8u: goto label_440fa8;
        case 0x440facu: goto label_440fac;
        case 0x440fb0u: goto label_440fb0;
        case 0x440fb4u: goto label_440fb4;
        case 0x440fb8u: goto label_440fb8;
        case 0x440fbcu: goto label_440fbc;
        case 0x440fc0u: goto label_440fc0;
        case 0x440fc4u: goto label_440fc4;
        case 0x440fc8u: goto label_440fc8;
        case 0x440fccu: goto label_440fcc;
        case 0x440fd0u: goto label_440fd0;
        case 0x440fd4u: goto label_440fd4;
        case 0x440fd8u: goto label_440fd8;
        case 0x440fdcu: goto label_440fdc;
        default: break;
    }

    ctx->pc = 0x440f78u;

label_440f78:
    // 0x440f78: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x440f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_440f7c:
    // 0x440f7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x440f7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_440f80:
    // 0x440f80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x440f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_440f84:
    // 0x440f84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_440f88:
    if (ctx->pc == 0x440F88u) {
        ctx->pc = 0x440F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F84u;
        // 0x440f88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440F8Cu;
        goto label_440f8c;
    }
    ctx->pc = 0x440F84u;
    {
        const bool branch_taken_0x440f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x440F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F84u;
        // 0x440f88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440f84) {
            ctx->pc = 0x440F98u;
            goto label_440f98;
        }
    }
    ctx->pc = 0x440F8Cu;
label_440f8c:
    // 0x440f8c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x440f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_440f90:
    // 0x440f90: 0x10000003  b           . + 4 + (0x3 << 2)
label_440f94:
    if (ctx->pc == 0x440F94u) {
        ctx->pc = 0x440F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F90u;
        // 0x440f94: 0x24491668  addiu       $t1, $v0, 0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 5736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440F98u;
        goto label_440f98;
    }
    ctx->pc = 0x440F90u;
    {
        const bool branch_taken_0x440f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x440F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F90u;
        // 0x440f94: 0x24491668  addiu       $t1, $v0, 0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 5736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440f90) {
            ctx->pc = 0x440FA0u;
            goto label_440fa0;
        }
    }
    ctx->pc = 0x440F98u;
label_440f98:
    // 0x440f98: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x440f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_440f9c:
    // 0x440f9c: 0x24491658  addiu       $t1, $v0, 0x1658
    ctx->pc = 0x440f9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 5720));
label_440fa0:
    // 0x440fa0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x440fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_440fa4:
    // 0x440fa4: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x440fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_440fa8:
    // 0x440fa8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_440fac:
    if (ctx->pc == 0x440FACu) {
        ctx->pc = 0x440FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440FA8u;
        // 0x440fac: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440FB0u;
        goto label_440fb0;
    }
    ctx->pc = 0x440FA8u;
    {
        const bool branch_taken_0x440fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x440FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440FA8u;
        // 0x440fac: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440fa8) {
            ctx->pc = 0x440FD0u;
            goto label_440fd0;
        }
    }
    ctx->pc = 0x440FB0u;
label_440fb0:
    // 0x440fb0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x440fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_440fb4:
    // 0x440fb4: 0x2442d788  addiu       $v0, $v0, -0x2878
    ctx->pc = 0x440fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956936));
label_440fb8:
    // 0x440fb8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x440fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_440fbc:
    // 0x440fbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x440fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_440fc0:
    // 0x440fc0: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x440fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_440fc4:
    // 0x440fc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x440fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_440fc8:
    // 0x440fc8: 0x40f809  jalr        $v0
label_440fcc:
    if (ctx->pc == 0x440FCCu) {
        ctx->pc = 0x440FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440FC8u;
        // 0x440fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440FD0u;
        goto label_440fd0;
    }
    ctx->pc = 0x440FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x440FD0u);
        ctx->pc = 0x440FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440FC8u;
        // 0x440fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440FC8u, 0x440FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x440FD0u;
label_440fd0:
    // 0x440fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x440fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_440fd4:
    // 0x440fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x440fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_440fd8:
    // 0x440fd8: 0x3e00008  jr          $ra
label_440fdc:
    if (ctx->pc == 0x440FDCu) {
        ctx->pc = 0x440FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440FD8u;
        // 0x440fdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440FE0u;
        goto label_fallthrough_0x440fd8;
    }
    ctx->pc = 0x440FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440FD8u;
        // 0x440fdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x440fd8:
    ctx->pc = 0x440FE0u;
}
