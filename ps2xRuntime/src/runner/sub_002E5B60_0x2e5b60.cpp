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

// Function: sub_002E5B60
// Address: 0x2e5b60 - 0x2e5c10
void sub_002E5B60_0x2e5b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5B60_0x2e5b60");
#endif

    switch (ctx->pc) {
        case 0x2e5bd0u: goto label_2e5bd0;
        case 0x2e5bf0u: goto label_2e5bf0;
        default: break;
    }

    ctx->pc = 0x2e5b60u;

    // 0x2e5b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e5b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e5b68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e5b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e5b6c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2e5b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e5b70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5b74: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E5B74u;
    {
        const bool branch_taken_0x2e5b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5b74) {
            ctx->pc = 0x2E5BF0u;
            goto label_2e5bf0;
        }
    }
    ctx->pc = 0x2E5B7Cu;
    // 0x2e5b7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5b80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5b84: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E5B84u;
    {
        const bool branch_taken_0x2e5b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5b84) {
            ctx->pc = 0x2E5BD0u;
            goto label_2e5bd0;
        }
    }
    ctx->pc = 0x2E5B8Cu;
    // 0x2e5b8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e5b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5b90: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2e5b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5b94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5b98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2e5b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e5b9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5ba0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5ba4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2e5ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e5ba8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e5bac: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2e5bacu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2e5bb0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5BB0u;
    {
        const bool branch_taken_0x2e5bb0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2e5bb0) {
            ctx->pc = 0x2E5BC0u;
            goto label_2e5bc0;
        }
    }
    ctx->pc = 0x2E5BB8u;
    // 0x2e5bb8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2e5bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2e5bbc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2e5bbcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2e5bc0:
    // 0x2e5bc0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2e5bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e5bc4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2e5bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5bc8: 0xc0b9f4c  jal         func_2E7D30
    ctx->pc = 0x2E5BC8u;
    SET_GPR_U32(ctx, 31, 0x2E5BD0u);
    ctx->pc = 0x2E7D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7D30u, 0x2E5BC8u, 0x2E5BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5BD0u;
label_2e5bd0:
    // 0x2e5bd0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2e5bd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5bd4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e5bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e5bd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e5bd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e5bdc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5BDCu;
    {
        const bool branch_taken_0x2e5bdc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e5bdc) {
            ctx->pc = 0x2E5BF0u;
            goto label_2e5bf0;
        }
    }
    ctx->pc = 0x2E5BE4u;
    // 0x2e5be4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e5be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5be8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2E5BE8u;
    SET_GPR_U32(ctx, 31, 0x2E5BF0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2E5BE8u, 0x2E5BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5BF0u;
label_2e5bf0:
    // 0x2e5bf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5bf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e5bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e5bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5C04u;
    // 0x2e5c04: 0x0  nop
    ctx->pc = 0x2e5c04u;
    // NOP
    // 0x2e5c08: 0x0  nop
    ctx->pc = 0x2e5c08u;
    // NOP
    // 0x2e5c0c: 0x0  nop
    ctx->pc = 0x2e5c0cu;
    // NOP
    ctx->pc = 0x2e5c10u;
}
