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

// Function: sub_00261C80
// Address: 0x261c80 - 0x261d30
void sub_00261C80_0x261c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261C80_0x261c80");
#endif

    switch (ctx->pc) {
        case 0x261cf0u: goto label_261cf0;
        case 0x261d10u: goto label_261d10;
        default: break;
    }

    ctx->pc = 0x261c80u;

    // 0x261c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x261c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261c88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x261c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x261c8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x261c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x261c90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261c94: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x261C94u;
    {
        const bool branch_taken_0x261c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261c94) {
            ctx->pc = 0x261D10u;
            goto label_261d10;
        }
    }
    ctx->pc = 0x261C9Cu;
    // 0x261c9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261ca0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x261ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261ca4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x261CA4u;
    {
        const bool branch_taken_0x261ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261ca4) {
            ctx->pc = 0x261CF0u;
            goto label_261cf0;
        }
    }
    ctx->pc = 0x261CACu;
    // 0x261cac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261cb0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x261cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261cb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261cb8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x261cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x261cbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261cc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x261cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261cc4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x261cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261cc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x261cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x261ccc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x261cccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x261cd0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x261CD0u;
    {
        const bool branch_taken_0x261cd0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x261cd0) {
            ctx->pc = 0x261CE0u;
            goto label_261ce0;
        }
    }
    ctx->pc = 0x261CD8u;
    // 0x261cd8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x261cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x261cdc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x261cdcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_261ce0:
    // 0x261ce0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x261ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x261ce4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x261ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x261ce8: 0xc09957c  jal         func_2655F0
    ctx->pc = 0x261CE8u;
    SET_GPR_U32(ctx, 31, 0x261CF0u);
    ctx->pc = 0x2655F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2655F0u, 0x261CE8u, 0x261CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261CF0u;
label_261cf0:
    // 0x261cf0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x261cf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261cf4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x261cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x261cf8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x261cf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x261cfc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261CFCu;
    {
        const bool branch_taken_0x261cfc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x261cfc) {
            ctx->pc = 0x261D10u;
            goto label_261d10;
        }
    }
    ctx->pc = 0x261D04u;
    // 0x261d04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261d08: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x261D08u;
    SET_GPR_U32(ctx, 31, 0x261D10u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x261D08u, 0x261D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D10u;
label_261d10:
    // 0x261d10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261d18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x261d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x261d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x261D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261D24u;
    // 0x261d24: 0x0  nop
    ctx->pc = 0x261d24u;
    // NOP
    // 0x261d28: 0x0  nop
    ctx->pc = 0x261d28u;
    // NOP
    // 0x261d2c: 0x0  nop
    ctx->pc = 0x261d2cu;
    // NOP
    ctx->pc = 0x261d30u;
}
