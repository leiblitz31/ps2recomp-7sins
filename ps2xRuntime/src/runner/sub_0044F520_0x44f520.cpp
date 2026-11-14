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

// Function: sub_0044F520
// Address: 0x44f520 - 0x44f5d0
void sub_0044F520_0x44f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F520_0x44f520");
#endif

    switch (ctx->pc) {
        case 0x44f590u: goto label_44f590;
        case 0x44f5b0u: goto label_44f5b0;
        default: break;
    }

    ctx->pc = 0x44f520u;

    // 0x44f520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44f520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44f524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44f528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44f52c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x44f52cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x44f530: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f534: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x44F534u;
    {
        const bool branch_taken_0x44f534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f534) {
            ctx->pc = 0x44F5B0u;
            goto label_44f5b0;
        }
    }
    ctx->pc = 0x44F53Cu;
    // 0x44f53c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f540: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44f544: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x44F544u;
    {
        const bool branch_taken_0x44f544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f544) {
            ctx->pc = 0x44F590u;
            goto label_44f590;
        }
    }
    ctx->pc = 0x44F54Cu;
    // 0x44f54c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f550: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x44f550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f554: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f558: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x44f558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44f55c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f560: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44f564: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x44f564u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x44f568: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x44f568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x44f56c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x44f56cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x44f570: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x44F570u;
    {
        const bool branch_taken_0x44f570 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x44f570) {
            ctx->pc = 0x44F580u;
            goto label_44f580;
        }
    }
    ctx->pc = 0x44F578u;
    // 0x44f578: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x44f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x44f57c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x44f57cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_44f580:
    // 0x44f580: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x44f580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x44f584: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x44f584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44f588: 0xc11486c  jal         func_4521B0
    ctx->pc = 0x44F588u;
    SET_GPR_U32(ctx, 31, 0x44F590u);
    ctx->pc = 0x4521B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4521B0u, 0x44F588u, 0x44F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F590u;
label_44f590:
    // 0x44f590: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x44f590u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f594: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x44f594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x44f598: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44f598u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x44f59c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44F59Cu;
    {
        const bool branch_taken_0x44f59c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44f59c) {
            ctx->pc = 0x44F5B0u;
            goto label_44f5b0;
        }
    }
    ctx->pc = 0x44F5A4u;
    // 0x44f5a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f5a8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x44F5A8u;
    SET_GPR_U32(ctx, 31, 0x44F5B0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x44F5A8u, 0x44F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F5B0u;
label_44f5b0:
    // 0x44f5b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f5b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f5b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44f5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44f5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x44F5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F5C4u;
    // 0x44f5c4: 0x0  nop
    ctx->pc = 0x44f5c4u;
    // NOP
    // 0x44f5c8: 0x0  nop
    ctx->pc = 0x44f5c8u;
    // NOP
    // 0x44f5cc: 0x0  nop
    ctx->pc = 0x44f5ccu;
    // NOP
    ctx->pc = 0x44f5d0u;
}
