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

// Function: sub_00158330
// Address: 0x158330 - 0x1583e0
void sub_00158330_0x158330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158330_0x158330");
#endif

    switch (ctx->pc) {
        case 0x1583a0u: goto label_1583a0;
        case 0x1583c0u: goto label_1583c0;
        default: break;
    }

    ctx->pc = 0x158330u;

    // 0x158330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158338: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x158338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15833c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15833cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x158340: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x158340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158344: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x158344u;
    {
        const bool branch_taken_0x158344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158344) {
            ctx->pc = 0x1583C0u;
            goto label_1583c0;
        }
    }
    ctx->pc = 0x15834Cu;
    // 0x15834c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158350: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x158350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158354: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x158354u;
    {
        const bool branch_taken_0x158354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158354) {
            ctx->pc = 0x1583A0u;
            goto label_1583a0;
        }
    }
    ctx->pc = 0x15835Cu;
    // 0x15835c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15835cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158360: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x158360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158364: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x158364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158368: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x158368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15836c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158370: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x158370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158374: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x158374u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x158378: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x158378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15837c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x15837cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x158380: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158380u;
    {
        const bool branch_taken_0x158380 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x158380) {
            ctx->pc = 0x158390u;
            goto label_158390;
        }
    }
    ctx->pc = 0x158388u;
    // 0x158388: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x158388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x15838c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x15838cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_158390:
    // 0x158390: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x158390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x158394: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x158394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x158398: 0xc0562e0  jal         func_158B80
    ctx->pc = 0x158398u;
    SET_GPR_U32(ctx, 31, 0x1583A0u);
    ctx->pc = 0x158B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158B80u, 0x158398u, 0x1583A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583A0u;
label_1583a0:
    // 0x1583a0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1583a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1583a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1583a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1583a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1583a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1583ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1583ACu;
    {
        const bool branch_taken_0x1583ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1583ac) {
            ctx->pc = 0x1583C0u;
            goto label_1583c0;
        }
    }
    ctx->pc = 0x1583B4u;
    // 0x1583b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1583b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1583b8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1583B8u;
    SET_GPR_U32(ctx, 31, 0x1583C0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1583B8u, 0x1583C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583C0u;
label_1583c0:
    // 0x1583c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1583c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1583c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1583c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1583c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1583c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1583cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1583CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1583CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1583D4u;
    // 0x1583d4: 0x0  nop
    ctx->pc = 0x1583d4u;
    // NOP
    // 0x1583d8: 0x0  nop
    ctx->pc = 0x1583d8u;
    // NOP
    // 0x1583dc: 0x0  nop
    ctx->pc = 0x1583dcu;
    // NOP
    ctx->pc = 0x1583e0u;
}
