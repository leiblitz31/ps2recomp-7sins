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

// Function: sub_0011E6D0
// Address: 0x11e6d0 - 0x11e9c0
void sub_0011E6D0_0x11e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E6D0_0x11e6d0");
#endif

    switch (ctx->pc) {
        case 0x11e6d0u: goto label_11e6d0;
        case 0x11e6d4u: goto label_11e6d4;
        case 0x11e6d8u: goto label_11e6d8;
        case 0x11e6dcu: goto label_11e6dc;
        case 0x11e6e0u: goto label_11e6e0;
        case 0x11e6e4u: goto label_11e6e4;
        case 0x11e6e8u: goto label_11e6e8;
        case 0x11e6ecu: goto label_11e6ec;
        case 0x11e6f0u: goto label_11e6f0;
        case 0x11e6f4u: goto label_11e6f4;
        case 0x11e6f8u: goto label_11e6f8;
        case 0x11e6fcu: goto label_11e6fc;
        case 0x11e700u: goto label_11e700;
        case 0x11e704u: goto label_11e704;
        case 0x11e708u: goto label_11e708;
        case 0x11e70cu: goto label_11e70c;
        case 0x11e710u: goto label_11e710;
        case 0x11e714u: goto label_11e714;
        case 0x11e718u: goto label_11e718;
        case 0x11e71cu: goto label_11e71c;
        case 0x11e720u: goto label_11e720;
        case 0x11e724u: goto label_11e724;
        case 0x11e728u: goto label_11e728;
        case 0x11e72cu: goto label_11e72c;
        case 0x11e730u: goto label_11e730;
        case 0x11e734u: goto label_11e734;
        case 0x11e738u: goto label_11e738;
        case 0x11e73cu: goto label_11e73c;
        case 0x11e740u: goto label_11e740;
        case 0x11e744u: goto label_11e744;
        case 0x11e748u: goto label_11e748;
        case 0x11e74cu: goto label_11e74c;
        case 0x11e750u: goto label_11e750;
        case 0x11e754u: goto label_11e754;
        case 0x11e758u: goto label_11e758;
        case 0x11e75cu: goto label_11e75c;
        case 0x11e760u: goto label_11e760;
        case 0x11e764u: goto label_11e764;
        case 0x11e768u: goto label_11e768;
        case 0x11e76cu: goto label_11e76c;
        case 0x11e770u: goto label_11e770;
        case 0x11e774u: goto label_11e774;
        case 0x11e778u: goto label_11e778;
        case 0x11e77cu: goto label_11e77c;
        case 0x11e780u: goto label_11e780;
        case 0x11e784u: goto label_11e784;
        case 0x11e788u: goto label_11e788;
        case 0x11e78cu: goto label_11e78c;
        case 0x11e790u: goto label_11e790;
        case 0x11e794u: goto label_11e794;
        case 0x11e798u: goto label_11e798;
        case 0x11e79cu: goto label_11e79c;
        case 0x11e7a0u: goto label_11e7a0;
        case 0x11e7a4u: goto label_11e7a4;
        case 0x11e7a8u: goto label_11e7a8;
        case 0x11e7acu: goto label_11e7ac;
        case 0x11e7b0u: goto label_11e7b0;
        case 0x11e7b4u: goto label_11e7b4;
        case 0x11e7b8u: goto label_11e7b8;
        case 0x11e7bcu: goto label_11e7bc;
        case 0x11e7c0u: goto label_11e7c0;
        case 0x11e7c4u: goto label_11e7c4;
        case 0x11e7c8u: goto label_11e7c8;
        case 0x11e7ccu: goto label_11e7cc;
        case 0x11e7d0u: goto label_11e7d0;
        case 0x11e7d4u: goto label_11e7d4;
        case 0x11e7d8u: goto label_11e7d8;
        case 0x11e7dcu: goto label_11e7dc;
        case 0x11e7e0u: goto label_11e7e0;
        case 0x11e7e4u: goto label_11e7e4;
        case 0x11e7e8u: goto label_11e7e8;
        case 0x11e7ecu: goto label_11e7ec;
        case 0x11e7f0u: goto label_11e7f0;
        case 0x11e7f4u: goto label_11e7f4;
        case 0x11e7f8u: goto label_11e7f8;
        case 0x11e7fcu: goto label_11e7fc;
        case 0x11e800u: goto label_11e800;
        case 0x11e804u: goto label_11e804;
        case 0x11e808u: goto label_11e808;
        case 0x11e80cu: goto label_11e80c;
        case 0x11e810u: goto label_11e810;
        case 0x11e814u: goto label_11e814;
        case 0x11e818u: goto label_11e818;
        case 0x11e81cu: goto label_11e81c;
        case 0x11e820u: goto label_11e820;
        case 0x11e824u: goto label_11e824;
        case 0x11e828u: goto label_11e828;
        case 0x11e82cu: goto label_11e82c;
        case 0x11e830u: goto label_11e830;
        case 0x11e834u: goto label_11e834;
        case 0x11e838u: goto label_11e838;
        case 0x11e83cu: goto label_11e83c;
        case 0x11e840u: goto label_11e840;
        case 0x11e844u: goto label_11e844;
        case 0x11e848u: goto label_11e848;
        case 0x11e84cu: goto label_11e84c;
        case 0x11e850u: goto label_11e850;
        case 0x11e854u: goto label_11e854;
        case 0x11e858u: goto label_11e858;
        case 0x11e85cu: goto label_11e85c;
        case 0x11e860u: goto label_11e860;
        case 0x11e864u: goto label_11e864;
        case 0x11e868u: goto label_11e868;
        case 0x11e86cu: goto label_11e86c;
        case 0x11e870u: goto label_11e870;
        case 0x11e874u: goto label_11e874;
        case 0x11e878u: goto label_11e878;
        case 0x11e87cu: goto label_11e87c;
        case 0x11e880u: goto label_11e880;
        case 0x11e884u: goto label_11e884;
        case 0x11e888u: goto label_11e888;
        case 0x11e88cu: goto label_11e88c;
        case 0x11e890u: goto label_11e890;
        case 0x11e894u: goto label_11e894;
        case 0x11e898u: goto label_11e898;
        case 0x11e89cu: goto label_11e89c;
        case 0x11e8a0u: goto label_11e8a0;
        case 0x11e8a4u: goto label_11e8a4;
        case 0x11e8a8u: goto label_11e8a8;
        case 0x11e8acu: goto label_11e8ac;
        case 0x11e8b0u: goto label_11e8b0;
        case 0x11e8b4u: goto label_11e8b4;
        case 0x11e8b8u: goto label_11e8b8;
        case 0x11e8bcu: goto label_11e8bc;
        case 0x11e8c0u: goto label_11e8c0;
        case 0x11e8c4u: goto label_11e8c4;
        case 0x11e8c8u: goto label_11e8c8;
        case 0x11e8ccu: goto label_11e8cc;
        case 0x11e8d0u: goto label_11e8d0;
        case 0x11e8d4u: goto label_11e8d4;
        case 0x11e8d8u: goto label_11e8d8;
        case 0x11e8dcu: goto label_11e8dc;
        case 0x11e8e0u: goto label_11e8e0;
        case 0x11e8e4u: goto label_11e8e4;
        case 0x11e8e8u: goto label_11e8e8;
        case 0x11e8ecu: goto label_11e8ec;
        case 0x11e8f0u: goto label_11e8f0;
        case 0x11e8f4u: goto label_11e8f4;
        case 0x11e8f8u: goto label_11e8f8;
        case 0x11e8fcu: goto label_11e8fc;
        case 0x11e900u: goto label_11e900;
        case 0x11e904u: goto label_11e904;
        case 0x11e908u: goto label_11e908;
        case 0x11e90cu: goto label_11e90c;
        case 0x11e910u: goto label_11e910;
        case 0x11e914u: goto label_11e914;
        case 0x11e918u: goto label_11e918;
        case 0x11e91cu: goto label_11e91c;
        case 0x11e920u: goto label_11e920;
        case 0x11e924u: goto label_11e924;
        case 0x11e928u: goto label_11e928;
        case 0x11e92cu: goto label_11e92c;
        case 0x11e930u: goto label_11e930;
        case 0x11e934u: goto label_11e934;
        case 0x11e938u: goto label_11e938;
        case 0x11e93cu: goto label_11e93c;
        case 0x11e940u: goto label_11e940;
        case 0x11e944u: goto label_11e944;
        case 0x11e948u: goto label_11e948;
        case 0x11e94cu: goto label_11e94c;
        case 0x11e950u: goto label_11e950;
        case 0x11e954u: goto label_11e954;
        case 0x11e958u: goto label_11e958;
        case 0x11e95cu: goto label_11e95c;
        case 0x11e960u: goto label_11e960;
        case 0x11e964u: goto label_11e964;
        case 0x11e968u: goto label_11e968;
        case 0x11e96cu: goto label_11e96c;
        case 0x11e970u: goto label_11e970;
        case 0x11e974u: goto label_11e974;
        case 0x11e978u: goto label_11e978;
        case 0x11e97cu: goto label_11e97c;
        case 0x11e980u: goto label_11e980;
        case 0x11e984u: goto label_11e984;
        case 0x11e988u: goto label_11e988;
        case 0x11e98cu: goto label_11e98c;
        case 0x11e990u: goto label_11e990;
        case 0x11e994u: goto label_11e994;
        case 0x11e998u: goto label_11e998;
        case 0x11e99cu: goto label_11e99c;
        case 0x11e9a0u: goto label_11e9a0;
        case 0x11e9a4u: goto label_11e9a4;
        case 0x11e9a8u: goto label_11e9a8;
        case 0x11e9acu: goto label_11e9ac;
        case 0x11e9b0u: goto label_11e9b0;
        case 0x11e9b4u: goto label_11e9b4;
        case 0x11e9b8u: goto label_11e9b8;
        case 0x11e9bcu: goto label_11e9bc;
        default: break;
    }

    ctx->pc = 0x11e6d0u;

label_11e6d0:
    // 0x11e6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11e6d4:
    // 0x11e6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11e6d8:
    // 0x11e6d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11e6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11e6dc:
    // 0x11e6dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11e6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e6e0:
    // 0x11e6e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x11e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_11e6e4:
    // 0x11e6e4: 0xc047074  jal         func_11C1D0
label_11e6e8:
    if (ctx->pc == 0x11E6E8u) {
        ctx->pc = 0x11E6ECu;
        goto label_11e6ec;
    }
    ctx->pc = 0x11E6E4u;
    SET_GPR_U32(ctx, 31, 0x11E6ECu);
    ctx->pc = 0x11C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1D0u, 0x11E6E4u, 0x11E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6ECu;
label_11e6ec:
    // 0x11e6ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_11e6f0:
    // 0x11e6f0: 0x24633500  addiu       $v1, $v1, 0x3500
    ctx->pc = 0x11e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13568));
label_11e6f4:
    // 0x11e6f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e6f8:
    // 0x11e6f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11e6fc:
    // 0x11e6fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e700:
    // 0x11e700: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11e700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11e704:
    // 0x11e704: 0x24a51e28  addiu       $a1, $a1, 0x1E28
    ctx->pc = 0x11e704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7720));
label_11e708:
    // 0x11e708: 0xc04322c  jal         func_10C8B0
label_11e70c:
    if (ctx->pc == 0x11E70Cu) {
        ctx->pc = 0x11E710u;
        goto label_11e710;
    }
    ctx->pc = 0x11E708u;
    SET_GPR_U32(ctx, 31, 0x11E710u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x11E708u, 0x11E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E710u;
label_11e710:
    // 0x11e710: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e714:
    // 0x11e714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e718:
    // 0x11e718: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11e718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11e71c:
    // 0x11e71c: 0x3e00008  jr          $ra
label_11e720:
    if (ctx->pc == 0x11E720u) {
        ctx->pc = 0x11E724u;
        goto label_11e724;
    }
    ctx->pc = 0x11E71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E724u;
label_11e724:
    // 0x11e724: 0x0  nop
    ctx->pc = 0x11e724u;
    // NOP
label_11e728:
    // 0x11e728: 0x0  nop
    ctx->pc = 0x11e728u;
    // NOP
label_11e72c:
    // 0x11e72c: 0x0  nop
    ctx->pc = 0x11e72cu;
    // NOP
label_11e730:
    // 0x11e730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11e734:
    // 0x11e734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11e738:
    // 0x11e738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11e738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11e73c:
    // 0x11e73c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11e73cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_11e740:
    // 0x11e740: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e744:
    // 0x11e744: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_11e748:
    if (ctx->pc == 0x11E748u) {
        ctx->pc = 0x11E74Cu;
        goto label_11e74c;
    }
    ctx->pc = 0x11E744u;
    {
        const bool branch_taken_0x11e744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e744) {
            ctx->pc = 0x11E78Cu;
            goto label_11e78c;
        }
    }
    ctx->pc = 0x11E74Cu;
label_11e74c:
    // 0x11e74c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_11e750:
    // 0x11e750: 0x24633500  addiu       $v1, $v1, 0x3500
    ctx->pc = 0x11e750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13568));
label_11e754:
    // 0x11e754: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e758:
    // 0x11e758: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11e758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11e75c:
    // 0x11e75c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11e75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e760:
    // 0x11e760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e764:
    // 0x11e764: 0xc047088  jal         func_11C220
label_11e768:
    if (ctx->pc == 0x11E768u) {
        ctx->pc = 0x11E76Cu;
        goto label_11e76c;
    }
    ctx->pc = 0x11E764u;
    SET_GPR_U32(ctx, 31, 0x11E76Cu);
    ctx->pc = 0x11C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C220u, 0x11E764u, 0x11E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E76Cu;
label_11e76c:
    // 0x11e76c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x11e76cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_11e770:
    // 0x11e770: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x11e770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_11e774:
    // 0x11e774: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11e774u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_11e778:
    // 0x11e778: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_11e77c:
    if (ctx->pc == 0x11E77Cu) {
        ctx->pc = 0x11E780u;
        goto label_11e780;
    }
    ctx->pc = 0x11E778u;
    {
        const bool branch_taken_0x11e778 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11e778) {
            ctx->pc = 0x11E78Cu;
            goto label_11e78c;
        }
    }
    ctx->pc = 0x11E780u;
label_11e780:
    // 0x11e780: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11e780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e784:
    // 0x11e784: 0xc0ba070  jal         func_2E81C0
label_11e788:
    if (ctx->pc == 0x11E788u) {
        ctx->pc = 0x11E78Cu;
        goto label_11e78c;
    }
    ctx->pc = 0x11E784u;
    SET_GPR_U32(ctx, 31, 0x11E78Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x11E784u, 0x11E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E78Cu;
label_11e78c:
    // 0x11e78c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e790:
    // 0x11e790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e794:
    // 0x11e794: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11e794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11e798:
    // 0x11e798: 0x3e00008  jr          $ra
label_11e79c:
    if (ctx->pc == 0x11E79Cu) {
        ctx->pc = 0x11E7A0u;
        goto label_11e7a0;
    }
    ctx->pc = 0x11E798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E7A0u;
label_11e7a0:
    // 0x11e7a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11e7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_11e7a4:
    // 0x11e7a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11e7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_11e7a8:
    // 0x11e7a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11e7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_11e7ac:
    // 0x11e7ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11e7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_11e7b0:
    // 0x11e7b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11e7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11e7b4:
    // 0x11e7b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11e7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11e7b8:
    // 0x11e7b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11e7bc:
    // 0x11e7bc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x11e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_11e7c0:
    // 0x11e7c0: 0xa3a50070  sb          $a1, 0x70($sp)
    ctx->pc = 0x11e7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 5));
label_11e7c4:
    // 0x11e7c4: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x11e7c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_11e7c8:
    // 0x11e7c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11e7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11e7cc:
    // 0x11e7cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e7d0:
    // 0x11e7d0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_11e7d4:
    if (ctx->pc == 0x11E7D4u) {
        ctx->pc = 0x11E7D8u;
        goto label_11e7d8;
    }
    ctx->pc = 0x11E7D0u;
    {
        const bool branch_taken_0x11e7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e7d0) {
            ctx->pc = 0x11E800u;
            goto label_11e800;
        }
    }
    ctx->pc = 0x11E7D8u;
label_11e7d8:
    // 0x11e7d8: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11e7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11e7dc:
    // 0x11e7dc: 0xc050b24  jal         func_142C90
label_11e7e0:
    if (ctx->pc == 0x11E7E0u) {
        ctx->pc = 0x11E7E4u;
        goto label_11e7e4;
    }
    ctx->pc = 0x11E7DCu;
    SET_GPR_U32(ctx, 31, 0x11E7E4u);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x11E7DCu, 0x11E7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E7E4u;
label_11e7e4:
    // 0x11e7e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e7e8:
    // 0x11e7e8: 0xc0412e4  jal         func_104B90
label_11e7ec:
    if (ctx->pc == 0x11E7ECu) {
        ctx->pc = 0x11E7F0u;
        goto label_11e7f0;
    }
    ctx->pc = 0x11E7E8u;
    SET_GPR_U32(ctx, 31, 0x11E7F0u);
    ctx->pc = 0x104B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B90u, 0x11E7E8u, 0x11E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E7F0u;
label_11e7f0:
    // 0x11e7f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e7f4:
    // 0x11e7f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11e7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e7f8:
    // 0x11e7f8: 0xc0a0024  jal         func_280090
label_11e7fc:
    if (ctx->pc == 0x11E7FCu) {
        ctx->pc = 0x11E800u;
        goto label_11e800;
    }
    ctx->pc = 0x11E7F8u;
    SET_GPR_U32(ctx, 31, 0x11E800u);
    ctx->pc = 0x280090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280090u, 0x11E7F8u, 0x11E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E800u;
label_11e800:
    // 0x11e800: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x11e800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_11e804:
    // 0x11e804: 0x93a50070  lbu         $a1, 0x70($sp)
    ctx->pc = 0x11e804u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_11e808:
    // 0x11e808: 0xc08edb0  jal         func_23B6C0
label_11e80c:
    if (ctx->pc == 0x11E80Cu) {
        ctx->pc = 0x11E810u;
        goto label_11e810;
    }
    ctx->pc = 0x11E808u;
    SET_GPR_U32(ctx, 31, 0x11E810u);
    ctx->pc = 0x23B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B6C0u, 0x11E808u, 0x11E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E810u;
label_11e810:
    // 0x11e810: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11e810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11e814:
    // 0x11e814: 0xc050c5c  jal         func_143170
label_11e818:
    if (ctx->pc == 0x11E818u) {
        ctx->pc = 0x11E81Cu;
        goto label_11e81c;
    }
    ctx->pc = 0x11E814u;
    SET_GPR_U32(ctx, 31, 0x11E81Cu);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x11E814u, 0x11E81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E81Cu;
label_11e81c:
    // 0x11e81c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e820:
    // 0x11e820: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11e820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_11e824:
    // 0x11e824: 0x93a60070  lbu         $a2, 0x70($sp)
    ctx->pc = 0x11e824u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_11e828:
    // 0x11e828: 0xc04fbf8  jal         func_13EFE0
label_11e82c:
    if (ctx->pc == 0x11E82Cu) {
        ctx->pc = 0x11E830u;
        goto label_11e830;
    }
    ctx->pc = 0x11E828u;
    SET_GPR_U32(ctx, 31, 0x11E830u);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x11E828u, 0x11E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E830u;
label_11e830:
    // 0x11e830: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x11e830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_11e834:
    // 0x11e834: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x11e834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_11e838:
    // 0x11e838: 0xc0553d4  jal         func_154F50
label_11e83c:
    if (ctx->pc == 0x11E83Cu) {
        ctx->pc = 0x11E840u;
        goto label_11e840;
    }
    ctx->pc = 0x11E838u;
    SET_GPR_U32(ctx, 31, 0x11E840u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11E838u, 0x11E840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E840u;
label_11e840:
    // 0x11e840: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e844:
    // 0x11e844: 0x93a50070  lbu         $a1, 0x70($sp)
    ctx->pc = 0x11e844u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_11e848:
    // 0x11e848: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11e848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11e84c:
    // 0x11e84c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11e84cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11e850:
    // 0x11e850: 0x320f809  jalr        $t9
label_11e854:
    if (ctx->pc == 0x11E854u) {
        ctx->pc = 0x11E858u;
        goto label_11e858;
    }
    ctx->pc = 0x11E850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11E858u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E850u, 0x11E858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E858u;
label_11e858:
    // 0x11e858: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11e858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11e85c:
    // 0x11e85c: 0xc050c5c  jal         func_143170
label_11e860:
    if (ctx->pc == 0x11E860u) {
        ctx->pc = 0x11E864u;
        goto label_11e864;
    }
    ctx->pc = 0x11E85Cu;
    SET_GPR_U32(ctx, 31, 0x11E864u);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x11E85Cu, 0x11E864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E864u;
label_11e864:
    // 0x11e864: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e868:
    // 0x11e868: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11e868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e86c:
    // 0x11e86c: 0xc04fbd0  jal         func_13EF40
label_11e870:
    if (ctx->pc == 0x11E870u) {
        ctx->pc = 0x11E874u;
        goto label_11e874;
    }
    ctx->pc = 0x11E86Cu;
    SET_GPR_U32(ctx, 31, 0x11E874u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x11E86Cu, 0x11E874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E874u;
label_11e874:
    // 0x11e874: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11e874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e878:
    // 0x11e878: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x11e878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_11e87c:
    // 0x11e87c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11e87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11e880:
    // 0x11e880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e884:
    // 0x11e884: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
label_11e888:
    if (ctx->pc == 0x11E888u) {
        ctx->pc = 0x11E88Cu;
        goto label_11e88c;
    }
    ctx->pc = 0x11E884u;
    {
        const bool branch_taken_0x11e884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e884) {
            ctx->pc = 0x11E908u;
            goto label_11e908;
        }
    }
    ctx->pc = 0x11E88Cu;
label_11e88c:
    // 0x11e88c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11e890:
    // 0x11e890: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x11e890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_11e894:
    // 0x11e894: 0x24a5b400  addiu       $a1, $a1, -0x4C00
    ctx->pc = 0x11e894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947840));
label_11e898:
    // 0x11e898: 0xc050240  jal         func_140900
label_11e89c:
    if (ctx->pc == 0x11E89Cu) {
        ctx->pc = 0x11E8A0u;
        goto label_11e8a0;
    }
    ctx->pc = 0x11E898u;
    SET_GPR_U32(ctx, 31, 0x11E8A0u);
    ctx->pc = 0x140900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140900u, 0x11E898u, 0x11E8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E8A0u;
label_11e8a0:
    // 0x11e8a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11e8a4:
    // 0x11e8a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11e8a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11e8a8:
    // 0x11e8a8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11e8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11e8ac:
    // 0x11e8ac: 0x320f809  jalr        $t9
label_11e8b0:
    if (ctx->pc == 0x11E8B0u) {
        ctx->pc = 0x11E8B4u;
        goto label_11e8b4;
    }
    ctx->pc = 0x11E8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11E8B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E8ACu, 0x11E8B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E8B4u;
label_11e8b4:
    // 0x11e8b4: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x11e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_11e8b8:
    // 0x11e8b8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x11e8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_11e8bc:
    // 0x11e8bc: 0xc0553d4  jal         func_154F50
label_11e8c0:
    if (ctx->pc == 0x11E8C0u) {
        ctx->pc = 0x11E8C4u;
        goto label_11e8c4;
    }
    ctx->pc = 0x11E8BCu;
    SET_GPR_U32(ctx, 31, 0x11E8C4u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11E8BCu, 0x11E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E8C4u;
label_11e8c4:
    // 0x11e8c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e8c8:
    // 0x11e8c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11e8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11e8cc:
    // 0x11e8cc: 0xc05bf0c  jal         func_16FC30
label_11e8d0:
    if (ctx->pc == 0x11E8D0u) {
        ctx->pc = 0x11E8D4u;
        goto label_11e8d4;
    }
    ctx->pc = 0x11E8CCu;
    SET_GPR_U32(ctx, 31, 0x11E8D4u);
    ctx->pc = 0x16FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FC30u, 0x11E8CCu, 0x11E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E8D4u;
label_11e8d4:
    // 0x11e8d4: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11e8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11e8d8:
    // 0x11e8d8: 0xc050c64  jal         func_143190
label_11e8dc:
    if (ctx->pc == 0x11E8DCu) {
        ctx->pc = 0x11E8E0u;
        goto label_11e8e0;
    }
    ctx->pc = 0x11E8D8u;
    SET_GPR_U32(ctx, 31, 0x11E8E0u);
    ctx->pc = 0x143190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143190u, 0x11E8D8u, 0x11E8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E8E0u;
label_11e8e0:
    // 0x11e8e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e8e4:
    // 0x11e8e4: 0xc04738c  jal         func_11CE30
label_11e8e8:
    if (ctx->pc == 0x11E8E8u) {
        ctx->pc = 0x11E8ECu;
        goto label_11e8ec;
    }
    ctx->pc = 0x11E8E4u;
    SET_GPR_U32(ctx, 31, 0x11E8ECu);
    ctx->pc = 0x11CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE30u, 0x11E8E4u, 0x11E8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E8ECu;
label_11e8ec:
    // 0x11e8ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11e8ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e8f0:
    // 0x11e8f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11e8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11e8f4:
    // 0x11e8f4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x11e8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_11e8f8:
    // 0x11e8f8: 0xc04c608  jal         func_131820
label_11e8fc:
    if (ctx->pc == 0x11E8FCu) {
        ctx->pc = 0x11E900u;
        goto label_11e900;
    }
    ctx->pc = 0x11E8F8u;
    SET_GPR_U32(ctx, 31, 0x11E900u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x11E8F8u, 0x11E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E900u;
label_11e900:
    // 0x11e900: 0x10000026  b           . + 4 + (0x26 << 2)
label_11e904:
    if (ctx->pc == 0x11E904u) {
        ctx->pc = 0x11E908u;
        goto label_11e908;
    }
    ctx->pc = 0x11E900u;
    {
        const bool branch_taken_0x11e900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e900) {
            ctx->pc = 0x11E99Cu;
            goto label_11e99c;
        }
    }
    ctx->pc = 0x11E908u;
label_11e908:
    // 0x11e908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11e90c:
    // 0x11e90c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x11e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_11e910:
    // 0x11e910: 0x24a5b400  addiu       $a1, $a1, -0x4C00
    ctx->pc = 0x11e910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947840));
label_11e914:
    // 0x11e914: 0xc050194  jal         func_140650
label_11e918:
    if (ctx->pc == 0x11E918u) {
        ctx->pc = 0x11E91Cu;
        goto label_11e91c;
    }
    ctx->pc = 0x11E914u;
    SET_GPR_U32(ctx, 31, 0x11E91Cu);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x11E914u, 0x11E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E91Cu;
label_11e91c:
    // 0x11e91c: 0xc090864  jal         func_242190
label_11e920:
    if (ctx->pc == 0x11E920u) {
        ctx->pc = 0x11E924u;
        goto label_11e924;
    }
    ctx->pc = 0x11E91Cu;
    SET_GPR_U32(ctx, 31, 0x11E924u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x11E91Cu, 0x11E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E924u;
label_11e924:
    // 0x11e924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e928:
    // 0x11e928: 0xc090590  jal         func_241640
label_11e92c:
    if (ctx->pc == 0x11E92Cu) {
        ctx->pc = 0x11E930u;
        goto label_11e930;
    }
    ctx->pc = 0x11E928u;
    SET_GPR_U32(ctx, 31, 0x11E930u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x11E928u, 0x11E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E930u;
label_11e930:
    // 0x11e930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e934:
    // 0x11e934: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11e934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11e938:
    // 0x11e938: 0xc09157c  jal         func_2455F0
label_11e93c:
    if (ctx->pc == 0x11E93Cu) {
        ctx->pc = 0x11E940u;
        goto label_11e940;
    }
    ctx->pc = 0x11E938u;
    SET_GPR_U32(ctx, 31, 0x11E940u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x11E938u, 0x11E940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E940u;
label_11e940:
    // 0x11e940: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11e940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e944:
    // 0x11e944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11e948:
    // 0x11e948: 0xc040e7c  jal         func_1039F0
label_11e94c:
    if (ctx->pc == 0x11E94Cu) {
        ctx->pc = 0x11E950u;
        goto label_11e950;
    }
    ctx->pc = 0x11E948u;
    SET_GPR_U32(ctx, 31, 0x11E950u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x11E948u, 0x11E950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E950u;
label_11e950:
    // 0x11e950: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e954:
    // 0x11e954: 0x1000000a  b           . + 4 + (0xA << 2)
label_11e958:
    if (ctx->pc == 0x11E958u) {
        ctx->pc = 0x11E95Cu;
        goto label_11e95c;
    }
    ctx->pc = 0x11E954u;
    {
        const bool branch_taken_0x11e954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e954) {
            ctx->pc = 0x11E980u;
            goto label_11e980;
        }
    }
    ctx->pc = 0x11E95Cu;
label_11e95c:
    // 0x11e95c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e960:
    // 0x11e960: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x11e960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_11e964:
    // 0x11e964: 0xc085538  jal         func_2154E0
label_11e968:
    if (ctx->pc == 0x11E968u) {
        ctx->pc = 0x11E96Cu;
        goto label_11e96c;
    }
    ctx->pc = 0x11E964u;
    SET_GPR_U32(ctx, 31, 0x11E96Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11E964u, 0x11E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E96Cu;
label_11e96c:
    // 0x11e96c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11e96cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e970:
    // 0x11e970: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11e970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11e974:
    // 0x11e974: 0xc0ac634  jal         func_2B18D0
label_11e978:
    if (ctx->pc == 0x11E978u) {
        ctx->pc = 0x11E97Cu;
        goto label_11e97c;
    }
    ctx->pc = 0x11E974u;
    SET_GPR_U32(ctx, 31, 0x11E97Cu);
    ctx->pc = 0x2B18D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B18D0u, 0x11E974u, 0x11E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E97Cu;
label_11e97c:
    // 0x11e97c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x11e97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_11e980:
    // 0x11e980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11e984:
    // 0x11e984: 0xc04147c  jal         func_1051F0
label_11e988:
    if (ctx->pc == 0x11E988u) {
        ctx->pc = 0x11E98Cu;
        goto label_11e98c;
    }
    ctx->pc = 0x11E984u;
    SET_GPR_U32(ctx, 31, 0x11E98Cu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x11E984u, 0x11E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E98Cu;
label_11e98c:
    // 0x11e98c: 0x1602fff3  bne         $s0, $v0, . + 4 + (-0xD << 2)
label_11e990:
    if (ctx->pc == 0x11E990u) {
        ctx->pc = 0x11E994u;
        goto label_11e994;
    }
    ctx->pc = 0x11E98Cu;
    {
        const bool branch_taken_0x11e98c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e98c) {
            ctx->pc = 0x11E95Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e95c;
        }
    }
    ctx->pc = 0x11E994u;
label_11e994:
    // 0x11e994: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x11e994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_11e998:
    // 0x11e998: 0xa383bc5c  sb          $v1, -0x43A4($gp)
    ctx->pc = 0x11e998u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949980), (uint8_t)GPR_U32(ctx, 3));
label_11e99c:
    // 0x11e99c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11e99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11e9a0:
    // 0x11e9a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11e9a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11e9a4:
    // 0x11e9a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11e9a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11e9a8:
    // 0x11e9a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11e9a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11e9ac:
    // 0x11e9ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11e9acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11e9b0:
    // 0x11e9b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11e9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11e9b4:
    // 0x11e9b4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x11e9b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_11e9b8:
    // 0x11e9b8: 0x3e00008  jr          $ra
label_11e9bc:
    if (ctx->pc == 0x11E9BCu) {
        ctx->pc = 0x11E9C0u;
        goto label_fallthrough_0x11e9b8;
    }
    ctx->pc = 0x11E9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11e9b8:
    ctx->pc = 0x11E9C0u;
}
