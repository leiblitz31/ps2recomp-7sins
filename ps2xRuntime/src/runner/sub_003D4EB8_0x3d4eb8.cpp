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

// Function: sub_003D4EB8
// Address: 0x3d4eb8 - 0x3d4f38
void sub_003D4EB8_0x3d4eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4EB8_0x3d4eb8");
#endif

    switch (ctx->pc) {
        case 0x3d4eb8u: goto label_3d4eb8;
        case 0x3d4ebcu: goto label_3d4ebc;
        case 0x3d4ec0u: goto label_3d4ec0;
        case 0x3d4ec4u: goto label_3d4ec4;
        case 0x3d4ec8u: goto label_3d4ec8;
        case 0x3d4eccu: goto label_3d4ecc;
        case 0x3d4ed0u: goto label_3d4ed0;
        case 0x3d4ed4u: goto label_3d4ed4;
        case 0x3d4ed8u: goto label_3d4ed8;
        case 0x3d4edcu: goto label_3d4edc;
        case 0x3d4ee0u: goto label_3d4ee0;
        case 0x3d4ee4u: goto label_3d4ee4;
        case 0x3d4ee8u: goto label_3d4ee8;
        case 0x3d4eecu: goto label_3d4eec;
        case 0x3d4ef0u: goto label_3d4ef0;
        case 0x3d4ef4u: goto label_3d4ef4;
        case 0x3d4ef8u: goto label_3d4ef8;
        case 0x3d4efcu: goto label_3d4efc;
        case 0x3d4f00u: goto label_3d4f00;
        case 0x3d4f04u: goto label_3d4f04;
        case 0x3d4f08u: goto label_3d4f08;
        case 0x3d4f0cu: goto label_3d4f0c;
        case 0x3d4f10u: goto label_3d4f10;
        case 0x3d4f14u: goto label_3d4f14;
        case 0x3d4f18u: goto label_3d4f18;
        case 0x3d4f1cu: goto label_3d4f1c;
        case 0x3d4f20u: goto label_3d4f20;
        case 0x3d4f24u: goto label_3d4f24;
        case 0x3d4f28u: goto label_3d4f28;
        case 0x3d4f2cu: goto label_3d4f2c;
        case 0x3d4f30u: goto label_3d4f30;
        case 0x3d4f34u: goto label_3d4f34;
        default: break;
    }

    ctx->pc = 0x3d4eb8u;

label_3d4eb8:
    // 0x3d4eb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d4eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d4ebc:
    // 0x3d4ebc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d4ec0:
    // 0x3d4ec0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d4ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3d4ec4:
    // 0x3d4ec4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3d4ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3d4ec8:
    // 0x3d4ec8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3d4ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3d4ecc:
    // 0x3d4ecc: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x3d4eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3d4ed0:
    // 0x3d4ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d4ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d4ed4:
    // 0x3d4ed4: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x3d4ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_3d4ed8:
    // 0x3d4ed8: 0x40f809  jalr        $v0
label_3d4edc:
    if (ctx->pc == 0x3D4EDCu) {
        ctx->pc = 0x3D4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4ED8u;
        // 0x3d4edc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4EE0u;
        goto label_3d4ee0;
    }
    ctx->pc = 0x3D4ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4EE0u);
        ctx->pc = 0x3D4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4ED8u;
        // 0x3d4edc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4ED8u, 0x3D4EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4EE0u;
label_3d4ee0:
    // 0x3d4ee0: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x3d4ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_3d4ee4:
    // 0x3d4ee4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3d4ee8:
    if (ctx->pc == 0x3D4EE8u) {
        ctx->pc = 0x3D4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4EE4u;
        // 0x3d4ee8: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4EECu;
        goto label_3d4eec;
    }
    ctx->pc = 0x3D4EE4u;
    {
        const bool branch_taken_0x3d4ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4EE4u;
        // 0x3d4ee8: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4ee4) {
            ctx->pc = 0x3D4F0Cu;
            goto label_3d4f0c;
        }
    }
    ctx->pc = 0x3D4EECu;
label_3d4eec:
    // 0x3d4eec: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x3d4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_3d4ef0:
    // 0x3d4ef0: 0x2610b20c  addiu       $s0, $s0, -0x4DF4
    ctx->pc = 0x3d4ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947340));
label_3d4ef4:
    // 0x3d4ef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d4ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4ef8:
    // 0x3d4ef8: 0x40f809  jalr        $v0
label_3d4efc:
    if (ctx->pc == 0x3D4EFCu) {
        ctx->pc = 0x3D4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4EF8u;
        // 0x3d4efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F00u;
        goto label_3d4f00;
    }
    ctx->pc = 0x3D4EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4F00u);
        ctx->pc = 0x3D4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4EF8u;
        // 0x3d4efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4EF8u, 0x3D4F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4F00u;
label_3d4f00:
    // 0x3d4f00: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3d4f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3d4f04:
    // 0x3d4f04: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d4f08:
    if (ctx->pc == 0x3D4F08u) {
        ctx->pc = 0x3D4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F04u;
        // 0x3d4f08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F0Cu;
        goto label_3d4f0c;
    }
    ctx->pc = 0x3D4F04u;
    {
        const bool branch_taken_0x3d4f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F04u;
        // 0x3d4f08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4f04) {
            ctx->pc = 0x3D4F10u;
            goto label_3d4f10;
        }
    }
    ctx->pc = 0x3D4F0Cu;
label_3d4f0c:
    // 0x3d4f0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d4f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d4f10:
    // 0x3d4f10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3d4f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d4f14:
    // 0x3d4f14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d4f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d4f18:
    // 0x3d4f18: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3d4f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d4f1c:
    // 0x3d4f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d4f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4f20:
    // 0x3d4f20: 0x3e00008  jr          $ra
label_3d4f24:
    if (ctx->pc == 0x3D4F24u) {
        ctx->pc = 0x3D4F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F20u;
        // 0x3d4f24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F28u;
        goto label_3d4f28;
    }
    ctx->pc = 0x3D4F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F20u;
        // 0x3d4f24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4F28u;
label_3d4f28:
    // 0x3d4f28: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d4f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3d4f2c:
    // 0x3d4f2c: 0x3e00008  jr          $ra
label_3d4f30:
    if (ctx->pc == 0x3D4F30u) {
        ctx->pc = 0x3D4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F2Cu;
        // 0x3d4f30: 0x8c62b214  lw          $v0, -0x4DEC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F34u;
        goto label_3d4f34;
    }
    ctx->pc = 0x3D4F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F2Cu;
        // 0x3d4f30: 0x8c62b214  lw          $v0, -0x4DEC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947348)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4F34u;
label_3d4f34:
    // 0x3d4f34: 0x0  nop
    ctx->pc = 0x3d4f34u;
    // NOP
    ctx->pc = 0x3d4f38u;
}
