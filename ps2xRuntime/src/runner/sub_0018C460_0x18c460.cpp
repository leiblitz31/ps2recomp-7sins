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

// Function: sub_0018C460
// Address: 0x18c460 - 0x18c510
void sub_0018C460_0x18c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C460_0x18c460");
#endif

    switch (ctx->pc) {
        case 0x18c4d0u: goto label_18c4d0;
        case 0x18c4f0u: goto label_18c4f0;
        default: break;
    }

    ctx->pc = 0x18c460u;

    // 0x18c460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c468: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18c468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18c46c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x18c46cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x18c470: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c474: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18C474u;
    {
        const bool branch_taken_0x18c474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c474) {
            ctx->pc = 0x18C4F0u;
            goto label_18c4f0;
        }
    }
    ctx->pc = 0x18C47Cu;
    // 0x18c47c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c480: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18c480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c484: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18C484u;
    {
        const bool branch_taken_0x18c484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c484) {
            ctx->pc = 0x18C4D0u;
            goto label_18c4d0;
        }
    }
    ctx->pc = 0x18C48Cu;
    // 0x18c48c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c490: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x18c490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c494: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c498: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18c49c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c4a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c4a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c4a8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18c4ac: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x18c4acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x18c4b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C4B0u;
    {
        const bool branch_taken_0x18c4b0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18c4b0) {
            ctx->pc = 0x18C4C0u;
            goto label_18c4c0;
        }
    }
    ctx->pc = 0x18C4B8u;
    // 0x18c4b8: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x18c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x18c4bc: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x18c4bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_18c4c0:
    // 0x18c4c0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x18c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x18c4c4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18c4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18c4c8: 0xc063db4  jal         func_18F6D0
    ctx->pc = 0x18C4C8u;
    SET_GPR_U32(ctx, 31, 0x18C4D0u);
    ctx->pc = 0x18F6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F6D0u, 0x18C4C8u, 0x18C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4D0u;
label_18c4d0:
    // 0x18c4d0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x18c4d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c4d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c4d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c4d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c4dc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C4DCu;
    {
        const bool branch_taken_0x18c4dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18c4dc) {
            ctx->pc = 0x18C4F0u;
            goto label_18c4f0;
        }
    }
    ctx->pc = 0x18C4E4u;
    // 0x18c4e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c4e8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x18C4E8u;
    SET_GPR_U32(ctx, 31, 0x18C4F0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x18C4E8u, 0x18C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4F0u;
label_18c4f0:
    // 0x18c4f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c4f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c4f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18c4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18c4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x18C4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C504u;
    // 0x18c504: 0x0  nop
    ctx->pc = 0x18c504u;
    // NOP
    // 0x18c508: 0x0  nop
    ctx->pc = 0x18c508u;
    // NOP
    // 0x18c50c: 0x0  nop
    ctx->pc = 0x18c50cu;
    // NOP
    ctx->pc = 0x18c510u;
}
