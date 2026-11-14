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

// Function: sub_0017A7E0
// Address: 0x17a7e0 - 0x17a940
void sub_0017A7E0_0x17a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A7E0_0x17a7e0");
#endif

    switch (ctx->pc) {
        case 0x17a7e0u: goto label_17a7e0;
        case 0x17a7e4u: goto label_17a7e4;
        case 0x17a7e8u: goto label_17a7e8;
        case 0x17a7ecu: goto label_17a7ec;
        case 0x17a7f0u: goto label_17a7f0;
        case 0x17a7f4u: goto label_17a7f4;
        case 0x17a7f8u: goto label_17a7f8;
        case 0x17a7fcu: goto label_17a7fc;
        case 0x17a800u: goto label_17a800;
        case 0x17a804u: goto label_17a804;
        case 0x17a808u: goto label_17a808;
        case 0x17a80cu: goto label_17a80c;
        case 0x17a810u: goto label_17a810;
        case 0x17a814u: goto label_17a814;
        case 0x17a818u: goto label_17a818;
        case 0x17a81cu: goto label_17a81c;
        case 0x17a820u: goto label_17a820;
        case 0x17a824u: goto label_17a824;
        case 0x17a828u: goto label_17a828;
        case 0x17a82cu: goto label_17a82c;
        case 0x17a830u: goto label_17a830;
        case 0x17a834u: goto label_17a834;
        case 0x17a838u: goto label_17a838;
        case 0x17a83cu: goto label_17a83c;
        case 0x17a840u: goto label_17a840;
        case 0x17a844u: goto label_17a844;
        case 0x17a848u: goto label_17a848;
        case 0x17a84cu: goto label_17a84c;
        case 0x17a850u: goto label_17a850;
        case 0x17a854u: goto label_17a854;
        case 0x17a858u: goto label_17a858;
        case 0x17a85cu: goto label_17a85c;
        case 0x17a860u: goto label_17a860;
        case 0x17a864u: goto label_17a864;
        case 0x17a868u: goto label_17a868;
        case 0x17a86cu: goto label_17a86c;
        case 0x17a870u: goto label_17a870;
        case 0x17a874u: goto label_17a874;
        case 0x17a878u: goto label_17a878;
        case 0x17a87cu: goto label_17a87c;
        case 0x17a880u: goto label_17a880;
        case 0x17a884u: goto label_17a884;
        case 0x17a888u: goto label_17a888;
        case 0x17a88cu: goto label_17a88c;
        case 0x17a890u: goto label_17a890;
        case 0x17a894u: goto label_17a894;
        case 0x17a898u: goto label_17a898;
        case 0x17a89cu: goto label_17a89c;
        case 0x17a8a0u: goto label_17a8a0;
        case 0x17a8a4u: goto label_17a8a4;
        case 0x17a8a8u: goto label_17a8a8;
        case 0x17a8acu: goto label_17a8ac;
        case 0x17a8b0u: goto label_17a8b0;
        case 0x17a8b4u: goto label_17a8b4;
        case 0x17a8b8u: goto label_17a8b8;
        case 0x17a8bcu: goto label_17a8bc;
        case 0x17a8c0u: goto label_17a8c0;
        case 0x17a8c4u: goto label_17a8c4;
        case 0x17a8c8u: goto label_17a8c8;
        case 0x17a8ccu: goto label_17a8cc;
        case 0x17a8d0u: goto label_17a8d0;
        case 0x17a8d4u: goto label_17a8d4;
        case 0x17a8d8u: goto label_17a8d8;
        case 0x17a8dcu: goto label_17a8dc;
        case 0x17a8e0u: goto label_17a8e0;
        case 0x17a8e4u: goto label_17a8e4;
        case 0x17a8e8u: goto label_17a8e8;
        case 0x17a8ecu: goto label_17a8ec;
        case 0x17a8f0u: goto label_17a8f0;
        case 0x17a8f4u: goto label_17a8f4;
        case 0x17a8f8u: goto label_17a8f8;
        case 0x17a8fcu: goto label_17a8fc;
        case 0x17a900u: goto label_17a900;
        case 0x17a904u: goto label_17a904;
        case 0x17a908u: goto label_17a908;
        case 0x17a90cu: goto label_17a90c;
        case 0x17a910u: goto label_17a910;
        case 0x17a914u: goto label_17a914;
        case 0x17a918u: goto label_17a918;
        case 0x17a91cu: goto label_17a91c;
        case 0x17a920u: goto label_17a920;
        case 0x17a924u: goto label_17a924;
        case 0x17a928u: goto label_17a928;
        case 0x17a92cu: goto label_17a92c;
        case 0x17a930u: goto label_17a930;
        case 0x17a934u: goto label_17a934;
        case 0x17a938u: goto label_17a938;
        case 0x17a93cu: goto label_17a93c;
        default: break;
    }

    ctx->pc = 0x17a7e0u;

label_17a7e0:
    // 0x17a7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17a7e4:
    // 0x17a7e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17a7e8:
    // 0x17a7e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17a7ec:
    // 0x17a7ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17a7f0:
    // 0x17a7f0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x17a7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_17a7f4:
    // 0x17a7f4: 0xc0557e8  jal         func_155FA0
label_17a7f8:
    if (ctx->pc == 0x17A7F8u) {
        ctx->pc = 0x17A7FCu;
        goto label_17a7fc;
    }
    ctx->pc = 0x17A7F4u;
    SET_GPR_U32(ctx, 31, 0x17A7FCu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x17A7F4u, 0x17A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A7FCu;
label_17a7fc:
    // 0x17a7fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_17a800:
    // 0x17a800: 0x24633eb0  addiu       $v1, $v1, 0x3EB0
    ctx->pc = 0x17a800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16048));
label_17a804:
    // 0x17a804: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17a808:
    // 0x17a808: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17a808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17a80c:
    // 0x17a80c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17a810:
    // 0x17a810: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17a814:
    // 0x17a814: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x17a814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_17a818:
    // 0x17a818: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17a81c:
    // 0x17a81c: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x17a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_17a820:
    // 0x17a820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17a820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17a824:
    // 0x17a824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a828:
    // 0x17a828: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17a828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17a82c:
    // 0x17a82c: 0x3e00008  jr          $ra
label_17a830:
    if (ctx->pc == 0x17A830u) {
        ctx->pc = 0x17A834u;
        goto label_17a834;
    }
    ctx->pc = 0x17A82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A834u;
label_17a834:
    // 0x17a834: 0x0  nop
    ctx->pc = 0x17a834u;
    // NOP
label_17a838:
    // 0x17a838: 0x0  nop
    ctx->pc = 0x17a838u;
    // NOP
label_17a83c:
    // 0x17a83c: 0x0  nop
    ctx->pc = 0x17a83cu;
    // NOP
label_17a840:
    // 0x17a840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17a844:
    // 0x17a844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17a848:
    // 0x17a848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17a848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17a84c:
    // 0x17a84c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x17a84cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_17a850:
    // 0x17a850: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17a850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17a854:
    // 0x17a854: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_17a858:
    if (ctx->pc == 0x17A858u) {
        ctx->pc = 0x17A85Cu;
        goto label_17a85c;
    }
    ctx->pc = 0x17A854u;
    {
        const bool branch_taken_0x17a854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a854) {
            ctx->pc = 0x17A89Cu;
            goto label_17a89c;
        }
    }
    ctx->pc = 0x17A85Cu;
label_17a85c:
    // 0x17a85c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_17a860:
    // 0x17a860: 0x24633eb0  addiu       $v1, $v1, 0x3EB0
    ctx->pc = 0x17a860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16048));
label_17a864:
    // 0x17a864: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17a864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17a868:
    // 0x17a868: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17a868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17a86c:
    // 0x17a86c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17a870:
    // 0x17a870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a874:
    // 0x17a874: 0xc055950  jal         func_156540
label_17a878:
    if (ctx->pc == 0x17A878u) {
        ctx->pc = 0x17A87Cu;
        goto label_17a87c;
    }
    ctx->pc = 0x17A874u;
    SET_GPR_U32(ctx, 31, 0x17A87Cu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x17A874u, 0x17A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A87Cu;
label_17a87c:
    // 0x17a87c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x17a87cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_17a880:
    // 0x17a880: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17a880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_17a884:
    // 0x17a884: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17a884u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_17a888:
    // 0x17a888: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_17a88c:
    if (ctx->pc == 0x17A88Cu) {
        ctx->pc = 0x17A890u;
        goto label_17a890;
    }
    ctx->pc = 0x17A888u;
    {
        const bool branch_taken_0x17a888 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17a888) {
            ctx->pc = 0x17A89Cu;
            goto label_17a89c;
        }
    }
    ctx->pc = 0x17A890u;
label_17a890:
    // 0x17a890: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17a890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17a894:
    // 0x17a894: 0xc0ba070  jal         func_2E81C0
label_17a898:
    if (ctx->pc == 0x17A898u) {
        ctx->pc = 0x17A89Cu;
        goto label_17a89c;
    }
    ctx->pc = 0x17A894u;
    SET_GPR_U32(ctx, 31, 0x17A89Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x17A894u, 0x17A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A89Cu;
label_17a89c:
    // 0x17a89c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17a8a0:
    // 0x17a8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a8a4:
    // 0x17a8a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17a8a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17a8a8:
    // 0x17a8a8: 0x3e00008  jr          $ra
label_17a8ac:
    if (ctx->pc == 0x17A8ACu) {
        ctx->pc = 0x17A8B0u;
        goto label_17a8b0;
    }
    ctx->pc = 0x17A8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A8B0u;
label_17a8b0:
    // 0x17a8b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17a8b4:
    // 0x17a8b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17a8b8:
    // 0x17a8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a8bc:
    // 0x17a8bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_17a8c0:
    // 0x17a8c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17a8c4:
    // 0x17a8c4: 0xc055974  jal         func_1565D0
label_17a8c8:
    if (ctx->pc == 0x17A8C8u) {
        ctx->pc = 0x17A8CCu;
        goto label_17a8cc;
    }
    ctx->pc = 0x17A8C4u;
    SET_GPR_U32(ctx, 31, 0x17A8CCu);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x17A8C4u, 0x17A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A8CCu;
label_17a8cc:
    // 0x17a8cc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17a8ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17a8d0:
    // 0x17a8d0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x17a8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_17a8d4:
    // 0x17a8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a8d8:
    // 0x17a8d8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_17a8dc:
    if (ctx->pc == 0x17A8DCu) {
        ctx->pc = 0x17A8E0u;
        goto label_17a8e0;
    }
    ctx->pc = 0x17A8D8u;
    {
        const bool branch_taken_0x17a8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17a8d8) {
            ctx->pc = 0x17A91Cu;
            goto label_17a91c;
        }
    }
    ctx->pc = 0x17A8E0u;
label_17a8e0:
    // 0x17a8e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17a8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17a8e4:
    // 0x17a8e4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17a8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_17a8e8:
    // 0x17a8e8: 0x24a54d70  addiu       $a1, $a1, 0x4D70
    ctx->pc = 0x17a8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19824));
label_17a8ec:
    // 0x17a8ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17a8ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17a8f0:
    // 0x17a8f0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x17a8f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_17a8f4:
    // 0x17a8f4: 0x320f809  jalr        $t9
label_17a8f8:
    if (ctx->pc == 0x17A8F8u) {
        ctx->pc = 0x17A8FCu;
        goto label_17a8fc;
    }
    ctx->pc = 0x17A8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17A8FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A8F4u, 0x17A8FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A8FCu;
label_17a8fc:
    // 0x17a8fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17a900:
    // 0x17a900: 0x8c460058  lw          $a2, 0x58($v0)
    ctx->pc = 0x17a900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_17a904:
    // 0x17a904: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x17a904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_17a908:
    // 0x17a908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a90c:
    // 0x17a90c: 0xc05ea50  jal         func_17A940
label_17a910:
    if (ctx->pc == 0x17A910u) {
        ctx->pc = 0x17A914u;
        goto label_17a914;
    }
    ctx->pc = 0x17A90Cu;
    SET_GPR_U32(ctx, 31, 0x17A914u);
    ctx->pc = 0x17A940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A940u, 0x17A90Cu, 0x17A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A914u;
label_17a914:
    // 0x17a914: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17a914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17a918:
    // 0x17a918: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x17a918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
label_17a91c:
    // 0x17a91c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17a91cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a920:
    // 0x17a920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17a924:
    // 0x17a924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a928:
    // 0x17a928: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17a928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17a92c:
    // 0x17a92c: 0x3e00008  jr          $ra
label_17a930:
    if (ctx->pc == 0x17A930u) {
        ctx->pc = 0x17A934u;
        goto label_17a934;
    }
    ctx->pc = 0x17A92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A934u;
label_17a934:
    // 0x17a934: 0x0  nop
    ctx->pc = 0x17a934u;
    // NOP
label_17a938:
    // 0x17a938: 0x0  nop
    ctx->pc = 0x17a938u;
    // NOP
label_17a93c:
    // 0x17a93c: 0x0  nop
    ctx->pc = 0x17a93cu;
    // NOP
    ctx->pc = 0x17a940u;
}
