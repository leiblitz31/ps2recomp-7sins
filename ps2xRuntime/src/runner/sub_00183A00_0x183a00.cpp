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

// Function: sub_00183A00
// Address: 0x183a00 - 0x183ab0
void sub_00183A00_0x183a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183A00_0x183a00");
#endif

    switch (ctx->pc) {
        case 0x183a70u: goto label_183a70;
        case 0x183a90u: goto label_183a90;
        default: break;
    }

    ctx->pc = 0x183a00u;

    // 0x183a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183a08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x183a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x183a0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x183a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x183a10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183a14: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x183A14u;
    {
        const bool branch_taken_0x183a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183a14) {
            ctx->pc = 0x183A90u;
            goto label_183a90;
        }
    }
    ctx->pc = 0x183A1Cu;
    // 0x183a1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183a20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x183a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183a24: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x183A24u;
    {
        const bool branch_taken_0x183a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183a24) {
            ctx->pc = 0x183A70u;
            goto label_183a70;
        }
    }
    ctx->pc = 0x183A2Cu;
    // 0x183a2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183a30: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x183a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183a34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183a38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x183a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x183a3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183a40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x183a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183a44: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x183a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x183a48: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x183a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x183a4c: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x183a4cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x183a50: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x183A50u;
    {
        const bool branch_taken_0x183a50 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x183a50) {
            ctx->pc = 0x183A60u;
            goto label_183a60;
        }
    }
    ctx->pc = 0x183A58u;
    // 0x183a58: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x183a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x183a5c: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x183a5cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_183a60:
    // 0x183a60: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x183a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x183a64: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x183a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x183a68: 0xc061cf0  jal         func_1873C0
    ctx->pc = 0x183A68u;
    SET_GPR_U32(ctx, 31, 0x183A70u);
    ctx->pc = 0x1873C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1873C0u, 0x183A68u, 0x183A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A70u;
label_183a70:
    // 0x183a70: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x183a70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183a74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x183a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x183a78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x183a78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x183a7c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183A7Cu;
    {
        const bool branch_taken_0x183a7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x183a7c) {
            ctx->pc = 0x183A90u;
            goto label_183a90;
        }
    }
    ctx->pc = 0x183A84u;
    // 0x183a84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183a88: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x183A88u;
    SET_GPR_U32(ctx, 31, 0x183A90u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x183A88u, 0x183A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A90u;
label_183a90:
    // 0x183a90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183a98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x183a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x183A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183AA4u;
    // 0x183aa4: 0x0  nop
    ctx->pc = 0x183aa4u;
    // NOP
    // 0x183aa8: 0x0  nop
    ctx->pc = 0x183aa8u;
    // NOP
    // 0x183aac: 0x0  nop
    ctx->pc = 0x183aacu;
    // NOP
    ctx->pc = 0x183ab0u;
}
