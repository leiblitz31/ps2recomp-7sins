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

// Function: sub_0045E330
// Address: 0x45e330 - 0x45e440
void sub_0045E330_0x45e330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E330_0x45e330");
#endif

    switch (ctx->pc) {
        case 0x45e35cu: goto label_45e35c;
        case 0x45e384u: goto label_45e384;
        case 0x45e394u: goto label_45e394;
        case 0x45e3a0u: goto label_45e3a0;
        case 0x45e3e0u: goto label_45e3e0;
        case 0x45e410u: goto label_45e410;
        default: break;
    }

    ctx->pc = 0x45e330u;

    // 0x45e330: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x45e330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x45e334: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x45e334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x45e338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45e33c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45e33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45e340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45e340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45e344: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x45e344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x45e348: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x45e348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x45e34c: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x45e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x45e350: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x45e350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45e354: 0xc117948  jal         func_45E520
    ctx->pc = 0x45E354u;
    SET_GPR_U32(ctx, 31, 0x45E35Cu);
    ctx->pc = 0x45E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E520u, 0x45E354u, 0x45E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E35Cu;
label_45e35c:
    // 0x45e35c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45e35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e360: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x45e360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45e364: 0x1223002e  beq         $s1, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x45E364u;
    {
        const bool branch_taken_0x45e364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x45e364) {
            ctx->pc = 0x45E420u;
            goto label_45e420;
        }
    }
    ctx->pc = 0x45E36Cu;
    // 0x45e36c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45e370: 0xac5100a0  sw          $s1, 0xA0($v0)
    ctx->pc = 0x45e370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 17));
    // 0x45e374: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x45e374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45e378: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x45e378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45e37c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x45E37Cu;
    SET_GPR_U32(ctx, 31, 0x45E384u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45E37Cu, 0x45E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E384u;
label_45e384:
    // 0x45e384: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x45e384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45e388: 0x2785b168  addiu       $a1, $gp, -0x4E98
    ctx->pc = 0x45e388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947176));
    // 0x45e38c: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x45E38Cu;
    SET_GPR_U32(ctx, 31, 0x45E394u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x45E38Cu, 0x45E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E394u;
label_45e394:
    // 0x45e394: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45e394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e398: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x45E398u;
    {
        const bool branch_taken_0x45e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e398) {
            ctx->pc = 0x45E3D4u;
            goto label_45e3d4;
        }
    }
    ctx->pc = 0x45E3A0u;
label_45e3a0:
    // 0x45e3a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45e3a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x45e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x45e3a8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x45e3a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45e3ac: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x45e3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x45e3b0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x45e3b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x45e3b4: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x45e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x45e3b8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x45E3B8u;
    {
        const bool branch_taken_0x45e3b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45e3b8) {
            ctx->pc = 0x45E3D0u;
            goto label_45e3d0;
        }
    }
    ctx->pc = 0x45E3C0u;
    // 0x45e3c0: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x45e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x45e3c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45e3c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x45e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x45e3cc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x45e3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_45e3d0:
    // 0x45e3d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45e3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45e3d4:
    // 0x45e3d4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x45e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45e3d8: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x45E3D8u;
    SET_GPR_U32(ctx, 31, 0x45E3E0u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x45E3D8u, 0x45E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E3E0u;
label_45e3e0:
    // 0x45e3e0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x45e3e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x45e3e4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x45E3E4u;
    {
        const bool branch_taken_0x45e3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e3e4) {
            ctx->pc = 0x45E3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e3a0;
        }
    }
    ctx->pc = 0x45E3ECu;
    // 0x45e3ec: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x45e3f0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45e3f4: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
    // 0x45e3f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45e3fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45e400: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x45e400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45e404: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45e404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45e408: 0xc1170e0  jal         func_45C380
    ctx->pc = 0x45E408u;
    SET_GPR_U32(ctx, 31, 0x45E410u);
    ctx->pc = 0x45C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45C380u, 0x45E408u, 0x45E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E410u;
label_45e410:
    // 0x45e410: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45e410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e414: 0x2644ffff  addiu       $a0, $s2, -0x1
    ctx->pc = 0x45e414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x45e418: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x45e418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45e41c: 0xac64009c  sw          $a0, 0x9C($v1)
    ctx->pc = 0x45e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 4));
label_45e420:
    // 0x45e420: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x45e420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45e424: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45e424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45e428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45e428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45e42c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45e42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e430: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x45e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x45e434: 0x3e00008  jr          $ra
    ctx->pc = 0x45E434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E43Cu;
    // 0x45e43c: 0x0  nop
    ctx->pc = 0x45e43cu;
    // NOP
    ctx->pc = 0x45e440u;
}
