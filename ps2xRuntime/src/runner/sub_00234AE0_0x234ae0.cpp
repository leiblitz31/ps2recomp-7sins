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

// Function: sub_00234AE0
// Address: 0x234ae0 - 0x234c10
void sub_00234AE0_0x234ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234AE0_0x234ae0");
#endif

    switch (ctx->pc) {
        case 0x234b58u: goto label_234b58;
        case 0x234b70u: goto label_234b70;
        case 0x234bb0u: goto label_234bb0;
        case 0x234bc4u: goto label_234bc4;
        default: break;
    }

    ctx->pc = 0x234ae0u;

    // 0x234ae0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x234ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x234ae4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x234ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x234ae8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x234ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x234aec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x234aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x234af0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x234af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x234af4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x234af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x234af8: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x234af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x234afc: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x234afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x234b00: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x234b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x234b04: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x234b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
    // 0x234b08: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x234b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x234b0c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x234b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x234b10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x234b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x234b14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234B14u;
    {
        const bool branch_taken_0x234b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234b14) {
            ctx->pc = 0x234B2Cu;
            goto label_234b2c;
        }
    }
    ctx->pc = 0x234B1Cu;
    // 0x234b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234b20: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x234b20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x234b24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x234B24u;
    {
        const bool branch_taken_0x234b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234b24) {
            ctx->pc = 0x234B30u;
            goto label_234b30;
        }
    }
    ctx->pc = 0x234B2Cu;
label_234b2c:
    // 0x234b2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x234b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234b30:
    // 0x234b30: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x234b30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x234b34: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x234B34u;
    {
        const bool branch_taken_0x234b34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x234b34) {
            ctx->pc = 0x234B48u;
            goto label_234b48;
        }
    }
    ctx->pc = 0x234B3Cu;
    // 0x234b3c: 0xa380bba0  sb          $zero, -0x4460($gp)
    ctx->pc = 0x234b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949792), (uint8_t)GPR_U32(ctx, 0));
    // 0x234b40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x234B40u;
    {
        const bool branch_taken_0x234b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234b40) {
            ctx->pc = 0x234B80u;
            goto label_234b80;
        }
    }
    ctx->pc = 0x234B48u;
label_234b48:
    // 0x234b48: 0x8f82bba4  lw          $v0, -0x445C($gp)
    ctx->pc = 0x234b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
    // 0x234b4c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x234b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x234b50: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x234B50u;
    SET_GPR_U32(ctx, 31, 0x234B58u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x234B50u, 0x234B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B58u;
label_234b58:
    // 0x234b58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x234B58u;
    {
        const bool branch_taken_0x234b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234b58) {
            ctx->pc = 0x234B78u;
            goto label_234b78;
        }
    }
    ctx->pc = 0x234B60u;
    // 0x234b60: 0x8f82bba4  lw          $v0, -0x445C($gp)
    ctx->pc = 0x234b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
    // 0x234b64: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x234b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x234b68: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x234B68u;
    SET_GPR_U32(ctx, 31, 0x234B70u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x234B68u, 0x234B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B70u;
label_234b70:
    // 0x234b70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234B70u;
    {
        const bool branch_taken_0x234b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234b70) {
            ctx->pc = 0x234B80u;
            goto label_234b80;
        }
    }
    ctx->pc = 0x234B78u;
label_234b78:
    // 0x234b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234b7c: 0xa382bba0  sb          $v0, -0x4460($gp)
    ctx->pc = 0x234b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949792), (uint8_t)GPR_U32(ctx, 2));
label_234b80:
    // 0x234b80: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x234B80u;
    {
        const bool branch_taken_0x234b80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x234b80) {
            ctx->pc = 0x234B94u;
            goto label_234b94;
        }
    }
    ctx->pc = 0x234B88u;
    // 0x234b88: 0x8f90bba8  lw          $s0, -0x4458($gp)
    ctx->pc = 0x234b88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949800)));
    // 0x234b8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x234B8Cu;
    {
        const bool branch_taken_0x234b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234b8c) {
            ctx->pc = 0x234B98u;
            goto label_234b98;
        }
    }
    ctx->pc = 0x234B94u;
label_234b94:
    // 0x234b94: 0x8f90bba4  lw          $s0, -0x445C($gp)
    ctx->pc = 0x234b94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
label_234b98:
    // 0x234b98: 0xaf90bb9c  sw          $s0, -0x4464($gp)
    ctx->pc = 0x234b98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949788), GPR_U32(ctx, 16));
    // 0x234b9c: 0x8f82bb9c  lw          $v0, -0x4464($gp)
    ctx->pc = 0x234b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949788)));
    // 0x234ba0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x234ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x234ba4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x234ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x234ba8: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x234BA8u;
    SET_GPR_U32(ctx, 31, 0x234BB0u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x234BA8u, 0x234BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BB0u;
label_234bb0:
    // 0x234bb0: 0x8f82bb9c  lw          $v0, -0x4464($gp)
    ctx->pc = 0x234bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949788)));
    // 0x234bb4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x234bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x234bb8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x234bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x234bbc: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x234BBCu;
    SET_GPR_U32(ctx, 31, 0x234BC4u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x234BBCu, 0x234BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BC4u;
label_234bc4:
    // 0x234bc4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x234bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x234bc8: 0x8f83bb9c  lw          $v1, -0x4464($gp)
    ctx->pc = 0x234bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949788)));
    // 0x234bcc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x234bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x234bd0: 0x8f83bb9c  lw          $v1, -0x4464($gp)
    ctx->pc = 0x234bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949788)));
    // 0x234bd4: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x234bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x234bd8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x234bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x234bdc: 0x8f83bb9c  lw          $v1, -0x4464($gp)
    ctx->pc = 0x234bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949788)));
    // 0x234be0: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x234be0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
    // 0x234be4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x234be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x234be8: 0x8f83bb9c  lw          $v1, -0x4464($gp)
    ctx->pc = 0x234be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949788)));
    // 0x234bec: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x234becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x234bf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x234bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234bf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x234bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234bf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x234bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x234bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234c00: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x234c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x234c04: 0x3e00008  jr          $ra
    ctx->pc = 0x234C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234C0Cu;
    // 0x234c0c: 0x0  nop
    ctx->pc = 0x234c0cu;
    // NOP
    ctx->pc = 0x234c10u;
}
