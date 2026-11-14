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

// Function: sub_002B6780
// Address: 0x2b6780 - 0x2b6830
void sub_002B6780_0x2b6780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6780_0x2b6780");
#endif

    switch (ctx->pc) {
        case 0x2b67f0u: goto label_2b67f0;
        case 0x2b6810u: goto label_2b6810;
        default: break;
    }

    ctx->pc = 0x2b6780u;

    // 0x2b6780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6788: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b6788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b678c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2b678cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b6790: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6794: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B6794u;
    {
        const bool branch_taken_0x2b6794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6794) {
            ctx->pc = 0x2B6810u;
            goto label_2b6810;
        }
    }
    ctx->pc = 0x2B679Cu;
    // 0x2b679c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b67a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b67a4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B67A4u;
    {
        const bool branch_taken_0x2b67a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b67a4) {
            ctx->pc = 0x2B67F0u;
            goto label_2b67f0;
        }
    }
    ctx->pc = 0x2B67ACu;
    // 0x2b67ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b67acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b67b0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2b67b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b67b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b67b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b67b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b67bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b67bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b67c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b67c4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2b67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b67c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b67cc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2b67ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2b67d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B67D0u;
    {
        const bool branch_taken_0x2b67d0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2b67d0) {
            ctx->pc = 0x2B67E0u;
            goto label_2b67e0;
        }
    }
    ctx->pc = 0x2B67D8u;
    // 0x2b67d8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2b67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2b67dc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2b67dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2b67e0:
    // 0x2b67e0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2b67e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2b67e4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2b67e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b67e8: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2B67E8u;
    SET_GPR_U32(ctx, 31, 0x2B67F0u);
    ctx->pc = 0x2B8700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8700u, 0x2B67E8u, 0x2B67F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67F0u;
label_2b67f0:
    // 0x2b67f0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2b67f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b67f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b67f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b67f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b67f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b67fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B67FCu;
    {
        const bool branch_taken_0x2b67fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b67fc) {
            ctx->pc = 0x2B6810u;
            goto label_2b6810;
        }
    }
    ctx->pc = 0x2B6804u;
    // 0x2b6804: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b6804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6808: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2B6808u;
    SET_GPR_U32(ctx, 31, 0x2B6810u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2B6808u, 0x2B6810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6810u;
label_2b6810:
    // 0x2b6810: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6818: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b6818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b681c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B681Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B681Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6824u;
    // 0x2b6824: 0x0  nop
    ctx->pc = 0x2b6824u;
    // NOP
    // 0x2b6828: 0x0  nop
    ctx->pc = 0x2b6828u;
    // NOP
    // 0x2b682c: 0x0  nop
    ctx->pc = 0x2b682cu;
    // NOP
    ctx->pc = 0x2b6830u;
}
