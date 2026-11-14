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

// Function: sub_001272E0
// Address: 0x1272e0 - 0x1273e0
void sub_001272E0_0x1272e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001272E0_0x1272e0");
#endif

    switch (ctx->pc) {
        case 0x1272fcu: goto label_1272fc;
        case 0x127314u: goto label_127314;
        case 0x12732cu: goto label_12732c;
        case 0x127344u: goto label_127344;
        case 0x127350u: goto label_127350;
        case 0x127358u: goto label_127358;
        case 0x127380u: goto label_127380;
        case 0x127394u: goto label_127394;
        case 0x1273a8u: goto label_1273a8;
        case 0x1273b8u: goto label_1273b8;
        case 0x1273c8u: goto label_1273c8;
        default: break;
    }

    ctx->pc = 0x1272e0u;

    // 0x1272e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1272e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1272e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1272e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1272e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1272e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1272ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1272ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1272f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1272f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1272f4: 0xc088560  jal         func_221580
    ctx->pc = 0x1272F4u;
    SET_GPR_U32(ctx, 31, 0x1272FCu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x1272F4u, 0x1272FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1272FCu;
label_1272fc:
    // 0x1272fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1272fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127300: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x127300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x127304: 0x24050568  addiu       $a1, $zero, 0x568
    ctx->pc = 0x127304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
    // 0x127308: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x127308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12730c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x12730Cu;
    SET_GPR_U32(ctx, 31, 0x127314u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x12730Cu, 0x127314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127314u;
label_127314:
    // 0x127314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x127314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127318: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x127318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12731c: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x12731Cu;
    {
        const bool branch_taken_0x12731c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x12731c) {
            ctx->pc = 0x127360u;
            goto label_127360;
        }
    }
    ctx->pc = 0x127324u;
    // 0x127324: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x127324u;
    SET_GPR_U32(ctx, 31, 0x12732Cu);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x127324u, 0x12732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12732Cu;
label_12732c:
    // 0x12732c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x12732cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x127330: 0x24842430  addiu       $a0, $a0, 0x2430
    ctx->pc = 0x127330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9264));
    // 0x127334: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x127334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127338: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x127338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12733c: 0xc08df08  jal         func_237C20
    ctx->pc = 0x12733Cu;
    SET_GPR_U32(ctx, 31, 0x127344u);
    ctx->pc = 0x237C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237C20u, 0x12733Cu, 0x127344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127344u;
label_127344:
    // 0x127344: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127348: 0xc08e054  jal         func_238150
    ctx->pc = 0x127348u;
    SET_GPR_U32(ctx, 31, 0x127350u);
    ctx->pc = 0x238150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238150u, 0x127348u, 0x127350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127350u;
label_127350:
    // 0x127350: 0xc0409a0  jal         func_102680
    ctx->pc = 0x127350u;
    SET_GPR_U32(ctx, 31, 0x127358u);
    ctx->pc = 0x102680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102680u, 0x127350u, 0x127358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127358u;
label_127358:
    // 0x127358: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x127358u;
    {
        const bool branch_taken_0x127358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127358) {
            ctx->pc = 0x1273B8u;
            goto label_1273b8;
        }
    }
    ctx->pc = 0x127360u;
label_127360:
    // 0x127360: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x127360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x127364: 0x16020014  bne         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x127364u;
    {
        const bool branch_taken_0x127364 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x127364) {
            ctx->pc = 0x1273B8u;
            goto label_1273b8;
        }
    }
    ctx->pc = 0x12736Cu;
    // 0x12736c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12736cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x127370: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x127370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x127374: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x127374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x127378: 0xc040924  jal         func_102490
    ctx->pc = 0x127378u;
    SET_GPR_U32(ctx, 31, 0x127380u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x127378u, 0x127380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127380u;
label_127380:
    // 0x127380: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x127380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x127384: 0x2405054a  addiu       $a1, $zero, 0x54A
    ctx->pc = 0x127384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1354));
    // 0x127388: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x127388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12738c: 0xc041b54  jal         func_106D50
    ctx->pc = 0x12738Cu;
    SET_GPR_U32(ctx, 31, 0x127394u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x12738Cu, 0x127394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127394u;
label_127394:
    // 0x127394: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x127394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x127398: 0x24050554  addiu       $a1, $zero, 0x554
    ctx->pc = 0x127398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1364));
    // 0x12739c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12739cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1273a0: 0xc041b54  jal         func_106D50
    ctx->pc = 0x1273A0u;
    SET_GPR_U32(ctx, 31, 0x1273A8u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x1273A0u, 0x1273A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273A8u;
label_1273a8:
    // 0x1273a8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1273a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1273ac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1273acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1273b0: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x1273B0u;
    SET_GPR_U32(ctx, 31, 0x1273B8u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x1273B0u, 0x1273B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273B8u;
label_1273b8:
    // 0x1273b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1273b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1273bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1273bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1273c0: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x1273C0u;
    SET_GPR_U32(ctx, 31, 0x1273C8u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x1273C0u, 0x1273C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273C8u;
label_1273c8:
    // 0x1273c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1273c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1273cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1273ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1273d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1273d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1273d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1273D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1273D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1273DCu;
    // 0x1273dc: 0x0  nop
    ctx->pc = 0x1273dcu;
    // NOP
    ctx->pc = 0x1273e0u;
}
