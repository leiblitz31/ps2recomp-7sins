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

// Function: sub_00194710
// Address: 0x194710 - 0x194a30
void sub_00194710_0x194710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194710_0x194710");
#endif

    switch (ctx->pc) {
        case 0x19472cu: goto label_19472c;
        case 0x19478cu: goto label_19478c;
        case 0x1947acu: goto label_1947ac;
        case 0x1947e8u: goto label_1947e8;
        case 0x194818u: goto label_194818;
        case 0x194848u: goto label_194848;
        case 0x194878u: goto label_194878;
        case 0x1948a8u: goto label_1948a8;
        case 0x194940u: goto label_194940;
        case 0x194980u: goto label_194980;
        case 0x1949c0u: goto label_1949c0;
        case 0x1949f0u: goto label_1949f0;
        case 0x194a20u: goto label_194a20;
        default: break;
    }

    ctx->pc = 0x194710u;

    // 0x194710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19471c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19471cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194720: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x194720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x194724: 0xc064924  jal         func_192490
    ctx->pc = 0x194724u;
    SET_GPR_U32(ctx, 31, 0x19472Cu);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x194724u, 0x19472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19472Cu;
label_19472c:
    // 0x19472c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19472cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x194730: 0x246343f0  addiu       $v1, $v1, 0x43F0
    ctx->pc = 0x194730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17392));
    // 0x194734: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194738: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x194738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19473c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19473cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194744: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x194744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x194748: 0x3e00008  jr          $ra
    ctx->pc = 0x194748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194750u;
    // 0x194750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194758: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19475c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x19475cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x194760: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194764: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x194764u;
    {
        const bool branch_taken_0x194764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194764) {
            ctx->pc = 0x1947ACu;
            goto label_1947ac;
        }
    }
    ctx->pc = 0x19476Cu;
    // 0x19476c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19476cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x194770: 0x246343f0  addiu       $v1, $v1, 0x43F0
    ctx->pc = 0x194770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17392));
    // 0x194774: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194778: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x194778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19477c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19477cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194784: 0xc064970  jal         func_1925C0
    ctx->pc = 0x194784u;
    SET_GPR_U32(ctx, 31, 0x19478Cu);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x194784u, 0x19478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19478Cu;
label_19478c:
    // 0x19478c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x19478cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194790: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x194790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194794: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x194794u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x194798: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194798u;
    {
        const bool branch_taken_0x194798 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x194798) {
            ctx->pc = 0x1947ACu;
            goto label_1947ac;
        }
    }
    ctx->pc = 0x1947A0u;
    // 0x1947a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1947a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1947a4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1947A4u;
    SET_GPR_U32(ctx, 31, 0x1947ACu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1947A4u, 0x1947ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947ACu;
label_1947ac:
    // 0x1947ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1947acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1947b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1947b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1947b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1947b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1947b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1947B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1947B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1947C0u;
    // 0x1947c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1947c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1947c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1947c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1947c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1947c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1947cc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1947ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1947d0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1947d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1947d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1947d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1947d8: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1947d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1947dc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1947dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1947e0: 0xc064a4c  jal         func_192930
    ctx->pc = 0x1947E0u;
    SET_GPR_U32(ctx, 31, 0x1947E8u);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x1947E0u, 0x1947E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947E8u;
label_1947e8:
    // 0x1947e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1947e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1947ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1947ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1947f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1947F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1947F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1947F8u;
    // 0x1947f8: 0x0  nop
    ctx->pc = 0x1947f8u;
    // NOP
    // 0x1947fc: 0x0  nop
    ctx->pc = 0x1947fcu;
    // NOP
    // 0x194800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19480c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19480cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194810: 0xc064a74  jal         func_1929D0
    ctx->pc = 0x194810u;
    SET_GPR_U32(ctx, 31, 0x194818u);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x194810u, 0x194818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194818u;
label_194818:
    // 0x194818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19481c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19481cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x194820: 0x3e00008  jr          $ra
    ctx->pc = 0x194820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194828u;
    // 0x194828: 0x0  nop
    ctx->pc = 0x194828u;
    // NOP
    // 0x19482c: 0x0  nop
    ctx->pc = 0x19482cu;
    // NOP
    // 0x194830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194838: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19483c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194840: 0xc064adc  jal         func_192B70
    ctx->pc = 0x194840u;
    SET_GPR_U32(ctx, 31, 0x194848u);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x194840u, 0x194848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194848u;
label_194848:
    // 0x194848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19484c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19484cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x194850: 0x3e00008  jr          $ra
    ctx->pc = 0x194850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194858u;
    // 0x194858: 0x0  nop
    ctx->pc = 0x194858u;
    // NOP
    // 0x19485c: 0x0  nop
    ctx->pc = 0x19485cu;
    // NOP
    // 0x194860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19486c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19486cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194870: 0xc064aec  jal         func_192BB0
    ctx->pc = 0x194870u;
    SET_GPR_U32(ctx, 31, 0x194878u);
    ctx->pc = 0x192BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192BB0u, 0x194870u, 0x194878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194878u;
label_194878:
    // 0x194878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19487c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19487cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x194880: 0x3e00008  jr          $ra
    ctx->pc = 0x194880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194888u;
    // 0x194888: 0x0  nop
    ctx->pc = 0x194888u;
    // NOP
    // 0x19488c: 0x0  nop
    ctx->pc = 0x19488cu;
    // NOP
    // 0x194890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194898: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19489c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19489cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1948a0: 0xc064cb0  jal         func_1932C0
    ctx->pc = 0x1948A0u;
    SET_GPR_U32(ctx, 31, 0x1948A8u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1948A0u, 0x1948A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1948A8u;
label_1948a8:
    // 0x1948a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1948a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1948ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1948acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1948b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1948B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1948B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1948B8u;
    // 0x1948b8: 0x0  nop
    ctx->pc = 0x1948b8u;
    // NOP
    // 0x1948bc: 0x0  nop
    ctx->pc = 0x1948bcu;
    // NOP
    // 0x1948c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1948c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1948c4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1948c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1948c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1948C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1948C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1948D0u;
    // 0x1948d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1948d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1948d4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1948d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1948d8: 0x24425c30  addiu       $v0, $v0, 0x5C30
    ctx->pc = 0x1948d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23600));
    // 0x1948dc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1948dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1948e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1948E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1948E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1948E8u;
    // 0x1948e8: 0x0  nop
    ctx->pc = 0x1948e8u;
    // NOP
    // 0x1948ec: 0x0  nop
    ctx->pc = 0x1948ecu;
    // NOP
    // 0x1948f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1948f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1948f4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1948f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1948f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1948F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1948F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194900u;
    // 0x194900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194904: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x194904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x194908: 0x3e00008  jr          $ra
    ctx->pc = 0x194908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194910u;
    // 0x194910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x194910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x194914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194918: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19491c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19491cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x194920: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x194920u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x194924: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x194924u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x194928: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19492c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x19492cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194930: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x194930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x194934: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x194934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x194938: 0xc064e90  jal         func_193A40
    ctx->pc = 0x194938u;
    SET_GPR_U32(ctx, 31, 0x194940u);
    ctx->pc = 0x193A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A40u, 0x194938u, 0x194940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194940u;
label_194940:
    // 0x194940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194944: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x194944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x194948: 0x3e00008  jr          $ra
    ctx->pc = 0x194948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194950u;
    // 0x194950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x194950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x194954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194958: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19495c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19495cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x194960: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x194960u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x194964: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x194964u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x194968: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19496c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x19496cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194970: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x194970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x194974: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x194974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x194978: 0xc064f2c  jal         func_193CB0
    ctx->pc = 0x194978u;
    SET_GPR_U32(ctx, 31, 0x194980u);
    ctx->pc = 0x193CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CB0u, 0x194978u, 0x194980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194980u;
label_194980:
    // 0x194980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194984: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x194984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x194988: 0x3e00008  jr          $ra
    ctx->pc = 0x194988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194990u;
    // 0x194990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x194990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x194994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194998: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19499c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19499cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1949a0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1949a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1949a4: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1949a4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1949a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1949a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1949ac: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1949acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1949b0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1949b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1949b4: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1949b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1949b8: 0xc064ff8  jal         func_193FE0
    ctx->pc = 0x1949B8u;
    SET_GPR_U32(ctx, 31, 0x1949C0u);
    ctx->pc = 0x193FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FE0u, 0x1949B8u, 0x1949C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949C0u;
label_1949c0:
    // 0x1949c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1949c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1949c4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1949c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1949c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1949C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1949C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1949D0u;
    // 0x1949d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1949d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1949d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1949d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1949d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1949d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1949dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1949dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1949e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1949e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1949e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1949e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1949e8: 0xc0650f0  jal         func_1943C0
    ctx->pc = 0x1949E8u;
    SET_GPR_U32(ctx, 31, 0x1949F0u);
    ctx->pc = 0x1943C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943C0u, 0x1949E8u, 0x1949F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949F0u;
label_1949f0:
    // 0x1949f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1949f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1949f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1949f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1949f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1949F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1949F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194A00u;
    // 0x194a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194a08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x194a0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x194a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x194a10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194a14: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x194a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194a18: 0xc0650f4  jal         func_1943D0
    ctx->pc = 0x194A18u;
    SET_GPR_U32(ctx, 31, 0x194A20u);
    ctx->pc = 0x1943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943D0u, 0x194A18u, 0x194A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A20u;
label_194a20:
    // 0x194a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194a24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x194a24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x194a28: 0x3e00008  jr          $ra
    ctx->pc = 0x194A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194A30u;
}
