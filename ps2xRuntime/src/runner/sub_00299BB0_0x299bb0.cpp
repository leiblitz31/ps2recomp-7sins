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

// Function: sub_00299BB0
// Address: 0x299bb0 - 0x299cc0
void sub_00299BB0_0x299bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299BB0_0x299bb0");
#endif

    switch (ctx->pc) {
        case 0x299bd8u: goto label_299bd8;
        case 0x299c00u: goto label_299c00;
        case 0x299c60u: goto label_299c60;
        case 0x299c74u: goto label_299c74;
        case 0x299c84u: goto label_299c84;
        case 0x299ca4u: goto label_299ca4;
        default: break;
    }

    ctx->pc = 0x299bb0u;

    // 0x299bb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x299bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x299bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299bb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299bbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x299bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x299bc0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x299bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x299bc4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x299bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x299bc8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x299bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299bcc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x299bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299bd0: 0xc0a65f0  jal         func_2997C0
    ctx->pc = 0x299BD0u;
    SET_GPR_U32(ctx, 31, 0x299BD8u);
    ctx->pc = 0x2997C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2997C0u, 0x299BD0u, 0x299BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299BD8u;
label_299bd8:
    // 0x299bd8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x299bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x299bdc: 0x24636150  addiu       $v1, $v1, 0x6150
    ctx->pc = 0x299bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x299be0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x299be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299be4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x299be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x299be8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x299be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299bec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x299becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299bf0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x299bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299bf4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x299bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299bf8: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x299BF8u;
    SET_GPR_U32(ctx, 31, 0x299C00u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x299BF8u, 0x299C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299C00u;
label_299c00:
    // 0x299c00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x299c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299c04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299c08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x299c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299c0c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x299c0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x299c10: 0x3e00008  jr          $ra
    ctx->pc = 0x299C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299C18u;
    // 0x299c18: 0x0  nop
    ctx->pc = 0x299c18u;
    // NOP
    // 0x299c1c: 0x0  nop
    ctx->pc = 0x299c1cu;
    // NOP
    // 0x299c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299c28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x299c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x299c2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x299c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x299c30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299c34: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x299C34u;
    {
        const bool branch_taken_0x299c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299c34) {
            ctx->pc = 0x299CA4u;
            goto label_299ca4;
        }
    }
    ctx->pc = 0x299C3Cu;
    // 0x299c3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x299c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x299c40: 0x24636150  addiu       $v1, $v1, 0x6150
    ctx->pc = 0x299c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x299c44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299c48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x299c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x299c4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299c50: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x299c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299c54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c58: 0xc0c962e  jal         func_3258B8
    ctx->pc = 0x299C58u;
    SET_GPR_U32(ctx, 31, 0x299C60u);
    ctx->pc = 0x3258B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3258B8u, 0x299C58u, 0x299C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299C60u;
label_299c60:
    // 0x299c60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299c64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x299c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299c68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c6c: 0xc0e39e0  jal         func_38E780
    ctx->pc = 0x299C6Cu;
    SET_GPR_U32(ctx, 31, 0x299C74u);
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x299C6Cu, 0x299C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299C74u;
label_299c74:
    // 0x299c74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x299c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299c78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c7c: 0xc0a6628  jal         func_2998A0
    ctx->pc = 0x299C7Cu;
    SET_GPR_U32(ctx, 31, 0x299C84u);
    ctx->pc = 0x2998A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998A0u, 0x299C7Cu, 0x299C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299C84u;
label_299c84:
    // 0x299c84: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x299c84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299c88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x299c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x299c8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x299c8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x299c90: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299C90u;
    {
        const bool branch_taken_0x299c90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x299c90) {
            ctx->pc = 0x299CA4u;
            goto label_299ca4;
        }
    }
    ctx->pc = 0x299C98u;
    // 0x299c98: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x299c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299c9c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x299C9Cu;
    SET_GPR_U32(ctx, 31, 0x299CA4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x299C9Cu, 0x299CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299CA4u;
label_299ca4:
    // 0x299ca4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299cac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x299cacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x299cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x299CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299CB8u;
    // 0x299cb8: 0x0  nop
    ctx->pc = 0x299cb8u;
    // NOP
    // 0x299cbc: 0x0  nop
    ctx->pc = 0x299cbcu;
    // NOP
    ctx->pc = 0x299cc0u;
}
