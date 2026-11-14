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

// Function: sub_00450A90
// Address: 0x450a90 - 0x450ba0
void sub_00450A90_0x450a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450A90_0x450a90");
#endif

    switch (ctx->pc) {
        case 0x450ac4u: goto label_450ac4;
        case 0x450ad8u: goto label_450ad8;
        case 0x450afcu: goto label_450afc;
        case 0x450b18u: goto label_450b18;
        case 0x450b30u: goto label_450b30;
        case 0x450b58u: goto label_450b58;
        case 0x450b68u: goto label_450b68;
        case 0x450b84u: goto label_450b84;
        default: break;
    }

    ctx->pc = 0x450a90u;

    // 0x450a90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x450a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x450a94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x450a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x450a98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x450a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x450a9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x450a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x450aa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x450aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x450aa4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x450aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x450aa8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x450aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x450aac: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x450aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x450ab0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x450ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x450ab4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x450ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x450ab8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x450ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x450abc: 0xc114338  jal         func_450CE0
    ctx->pc = 0x450ABCu;
    SET_GPR_U32(ctx, 31, 0x450AC4u);
    ctx->pc = 0x450CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450CE0u, 0x450ABCu, 0x450AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450AC4u;
label_450ac4:
    // 0x450ac4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x450ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x450ac8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x450ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x450acc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x450accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x450ad0: 0xc041954  jal         func_106550
    ctx->pc = 0x450AD0u;
    SET_GPR_U32(ctx, 31, 0x450AD8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x450AD0u, 0x450AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450AD8u;
label_450ad8:
    // 0x450ad8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x450ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x450adc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x450adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x450ae0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x450ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x450ae4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x450ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x450ae8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x450ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x450aec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x450aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450af0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x450af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450af4: 0xc114844  jal         func_452110
    ctx->pc = 0x450AF4u;
    SET_GPR_U32(ctx, 31, 0x450AFCu);
    ctx->pc = 0x452110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452110u, 0x450AF4u, 0x450AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450AFCu;
label_450afc:
    // 0x450afc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x450afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450b00: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x450b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x450b04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x450b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x450b08: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x450b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x450b0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x450b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450b10: 0xc041934  jal         func_1064D0
    ctx->pc = 0x450B10u;
    SET_GPR_U32(ctx, 31, 0x450B18u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x450B10u, 0x450B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450B18u;
label_450b18:
    // 0x450b18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x450b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x450b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450b20: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x450b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x450b24: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x450b24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x450b28: 0xc11431c  jal         func_450C70
    ctx->pc = 0x450B28u;
    SET_GPR_U32(ctx, 31, 0x450B30u);
    ctx->pc = 0x450C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450C70u, 0x450B28u, 0x450B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450B30u;
label_450b30:
    // 0x450b30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x450b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450b34: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x450b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x450b38: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x450B38u;
    {
        const bool branch_taken_0x450b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450b38) {
            ctx->pc = 0x450B5Cu;
            goto label_450b5c;
        }
    }
    ctx->pc = 0x450B40u;
    // 0x450b40: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x450b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x450b44: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x450b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x450b48: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x450b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x450b4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x450b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450b50: 0xc041934  jal         func_1064D0
    ctx->pc = 0x450B50u;
    SET_GPR_U32(ctx, 31, 0x450B58u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x450B50u, 0x450B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450B58u;
label_450b58:
    // 0x450b58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x450b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_450b5c:
    // 0x450b5c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x450b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x450b60: 0xc1142fc  jal         func_450BF0
    ctx->pc = 0x450B60u;
    SET_GPR_U32(ctx, 31, 0x450B68u);
    ctx->pc = 0x450BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450BF0u, 0x450B60u, 0x450B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450B68u;
label_450b68:
    // 0x450b68: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x450b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x450b6c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x450b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x450b70: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x450b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x450b74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x450b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450b78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x450b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450b7c: 0xc1142e8  jal         func_450BA0
    ctx->pc = 0x450B7Cu;
    SET_GPR_U32(ctx, 31, 0x450B84u);
    ctx->pc = 0x450BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450BA0u, 0x450B7Cu, 0x450B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450B84u;
label_450b84:
    // 0x450b84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x450b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x450b88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x450b88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450b8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x450b8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450b90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x450b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450b94: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x450b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x450b98: 0x3e00008  jr          $ra
    ctx->pc = 0x450B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450BA0u;
}
