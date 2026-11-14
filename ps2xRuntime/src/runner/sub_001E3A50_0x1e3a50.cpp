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

// Function: sub_001E3A50
// Address: 0x1e3a50 - 0x1e3ae0
void sub_001E3A50_0x1e3a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3A50_0x1e3a50");
#endif

    switch (ctx->pc) {
        case 0x1e3a50u: goto label_1e3a50;
        case 0x1e3a54u: goto label_1e3a54;
        case 0x1e3a58u: goto label_1e3a58;
        case 0x1e3a5cu: goto label_1e3a5c;
        case 0x1e3a60u: goto label_1e3a60;
        case 0x1e3a64u: goto label_1e3a64;
        case 0x1e3a68u: goto label_1e3a68;
        case 0x1e3a6cu: goto label_1e3a6c;
        case 0x1e3a70u: goto label_1e3a70;
        case 0x1e3a74u: goto label_1e3a74;
        case 0x1e3a78u: goto label_1e3a78;
        case 0x1e3a7cu: goto label_1e3a7c;
        case 0x1e3a80u: goto label_1e3a80;
        case 0x1e3a84u: goto label_1e3a84;
        case 0x1e3a88u: goto label_1e3a88;
        case 0x1e3a8cu: goto label_1e3a8c;
        case 0x1e3a90u: goto label_1e3a90;
        case 0x1e3a94u: goto label_1e3a94;
        case 0x1e3a98u: goto label_1e3a98;
        case 0x1e3a9cu: goto label_1e3a9c;
        case 0x1e3aa0u: goto label_1e3aa0;
        case 0x1e3aa4u: goto label_1e3aa4;
        case 0x1e3aa8u: goto label_1e3aa8;
        case 0x1e3aacu: goto label_1e3aac;
        case 0x1e3ab0u: goto label_1e3ab0;
        case 0x1e3ab4u: goto label_1e3ab4;
        case 0x1e3ab8u: goto label_1e3ab8;
        case 0x1e3abcu: goto label_1e3abc;
        case 0x1e3ac0u: goto label_1e3ac0;
        case 0x1e3ac4u: goto label_1e3ac4;
        case 0x1e3ac8u: goto label_1e3ac8;
        case 0x1e3accu: goto label_1e3acc;
        case 0x1e3ad0u: goto label_1e3ad0;
        case 0x1e3ad4u: goto label_1e3ad4;
        case 0x1e3ad8u: goto label_1e3ad8;
        case 0x1e3adcu: goto label_1e3adc;
        default: break;
    }

    ctx->pc = 0x1e3a50u;

label_1e3a50:
    // 0x1e3a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e3a54:
    // 0x1e3a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e3a58:
    // 0x1e3a58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e3a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1e3a5c:
    // 0x1e3a5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e3a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3a60:
    // 0x1e3a60: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x1e3a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1e3a64:
    // 0x1e3a64: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_1e3a68:
    if (ctx->pc == 0x1E3A68u) {
        ctx->pc = 0x1E3A6Cu;
        goto label_1e3a6c;
    }
    ctx->pc = 0x1E3A64u;
    {
        const bool branch_taken_0x1e3a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3a64) {
            ctx->pc = 0x1E3AD0u;
            goto label_1e3ad0;
        }
    }
    ctx->pc = 0x1E3A6Cu;
label_1e3a6c:
    // 0x1e3a6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e3a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3a70:
    // 0x1e3a70: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x1e3a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_1e3a74:
    // 0x1e3a74: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_1e3a78:
    if (ctx->pc == 0x1E3A78u) {
        ctx->pc = 0x1E3A7Cu;
        goto label_1e3a7c;
    }
    ctx->pc = 0x1E3A74u;
    {
        const bool branch_taken_0x1e3a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3a74) {
            ctx->pc = 0x1E3AD0u;
            goto label_1e3ad0;
        }
    }
    ctx->pc = 0x1E3A7Cu;
label_1e3a7c:
    // 0x1e3a7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e3a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3a80:
    // 0x1e3a80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3a84:
    // 0x1e3a84: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1e3a88:
    // 0x1e3a88: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1e3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1e3a8c:
    // 0x1e3a8c: 0x40f809  jalr        $v0
label_1e3a90:
    if (ctx->pc == 0x1E3A90u) {
        ctx->pc = 0x1E3A94u;
        goto label_1e3a94;
    }
    ctx->pc = 0x1E3A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E3A94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A8Cu, 0x1E3A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3A94u;
label_1e3a94:
    // 0x1e3a94: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1e3a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3a98:
    // 0x1e3a98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3a9c:
    // 0x1e3a9c: 0x8c46010c  lw          $a2, 0x10C($v0)
    ctx->pc = 0x1e3a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1e3aa0:
    // 0x1e3aa0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3aa4:
    // 0x1e3aa4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3aa8:
    // 0x1e3aa8: 0x8c480110  lw          $t0, 0x110($v0)
    ctx->pc = 0x1e3aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_1e3aac:
    // 0x1e3aac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e3aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e3ab0:
    // 0x1e3ab0: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1e3ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1e3ab4:
    // 0x1e3ab4: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x1e3ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_1e3ab8:
    // 0x1e3ab8: 0x3421cd20  ori         $at, $at, 0xCD20
    ctx->pc = 0x1e3ab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52512);
label_1e3abc:
    // 0x1e3abc: 0x613821  addu        $a3, $v1, $at
    ctx->pc = 0x1e3abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1e3ac0:
    // 0x1e3ac0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e3ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1e3ac4:
    // 0x1e3ac4: 0x8c42e8b4  lw          $v0, -0x174C($v0)
    ctx->pc = 0x1e3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
label_1e3ac8:
    // 0x1e3ac8: 0x40f809  jalr        $v0
label_1e3acc:
    if (ctx->pc == 0x1E3ACCu) {
        ctx->pc = 0x1E3AD0u;
        goto label_1e3ad0;
    }
    ctx->pc = 0x1E3AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E3AD0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3AC8u, 0x1E3AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3AD0u;
label_1e3ad0:
    // 0x1e3ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3ad4:
    // 0x1e3ad4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e3ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e3ad8:
    // 0x1e3ad8: 0x3e00008  jr          $ra
label_1e3adc:
    if (ctx->pc == 0x1E3ADCu) {
        ctx->pc = 0x1E3AE0u;
        goto label_fallthrough_0x1e3ad8;
    }
    ctx->pc = 0x1E3AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e3ad8:
    ctx->pc = 0x1E3AE0u;
}
