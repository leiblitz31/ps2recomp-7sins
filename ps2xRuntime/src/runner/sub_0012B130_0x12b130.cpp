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

// Function: sub_0012B130
// Address: 0x12b130 - 0x12b1e0
void sub_0012B130_0x12b130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B130_0x12b130");
#endif

    switch (ctx->pc) {
        case 0x12b1a0u: goto label_12b1a0;
        case 0x12b1c0u: goto label_12b1c0;
        default: break;
    }

    ctx->pc = 0x12b130u;

    // 0x12b130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b138: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12b138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12b13c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x12b13cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x12b140: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b144: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x12B144u;
    {
        const bool branch_taken_0x12b144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b144) {
            ctx->pc = 0x12B1C0u;
            goto label_12b1c0;
        }
    }
    ctx->pc = 0x12B14Cu;
    // 0x12b14c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b150: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12b150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12b154: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12B154u;
    {
        const bool branch_taken_0x12b154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b154) {
            ctx->pc = 0x12B1A0u;
            goto label_12b1a0;
        }
    }
    ctx->pc = 0x12B15Cu;
    // 0x12b15c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b160: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x12b160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b164: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b168: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x12b168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12b16c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b170: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12b174: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12b174u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12b178: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x12b178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12b17c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x12b17cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x12b180: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B180u;
    {
        const bool branch_taken_0x12b180 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12b180) {
            ctx->pc = 0x12B190u;
            goto label_12b190;
        }
    }
    ctx->pc = 0x12B188u;
    // 0x12b188: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x12b188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x12b18c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x12b18cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_12b190:
    // 0x12b190: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x12b190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x12b194: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x12b194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12b198: 0xc04c644  jal         func_131910
    ctx->pc = 0x12B198u;
    SET_GPR_U32(ctx, 31, 0x12B1A0u);
    ctx->pc = 0x131910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131910u, 0x12B198u, 0x12B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1A0u;
label_12b1a0:
    // 0x12b1a0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x12b1a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b1a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12b1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12b1a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12b1a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12b1ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B1ACu;
    {
        const bool branch_taken_0x12b1ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12b1ac) {
            ctx->pc = 0x12B1C0u;
            goto label_12b1c0;
        }
    }
    ctx->pc = 0x12B1B4u;
    // 0x12b1b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b1b8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x12B1B8u;
    SET_GPR_U32(ctx, 31, 0x12B1C0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x12B1B8u, 0x12B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1C0u;
label_12b1c0:
    // 0x12b1c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b1c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b1c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12b1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x12B1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B1D4u;
    // 0x12b1d4: 0x0  nop
    ctx->pc = 0x12b1d4u;
    // NOP
    // 0x12b1d8: 0x0  nop
    ctx->pc = 0x12b1d8u;
    // NOP
    // 0x12b1dc: 0x0  nop
    ctx->pc = 0x12b1dcu;
    // NOP
    ctx->pc = 0x12b1e0u;
}
