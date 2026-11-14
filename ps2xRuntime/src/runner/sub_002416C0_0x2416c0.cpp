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

// Function: sub_002416C0
// Address: 0x2416c0 - 0x241ff0
void sub_002416C0_0x2416c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002416C0_0x2416c0");
#endif

    switch (ctx->pc) {
        case 0x2416fcu: goto label_2416fc;
        case 0x241730u: goto label_241730;
        case 0x241748u: goto label_241748;
        case 0x241758u: goto label_241758;
        case 0x241770u: goto label_241770;
        case 0x241784u: goto label_241784;
        case 0x2417a4u: goto label_2417a4;
        case 0x2417b4u: goto label_2417b4;
        case 0x2417ccu: goto label_2417cc;
        case 0x241800u: goto label_241800;
        case 0x241810u: goto label_241810;
        case 0x241830u: goto label_241830;
        case 0x241858u: goto label_241858;
        case 0x241880u: goto label_241880;
        case 0x2418a8u: goto label_2418a8;
        case 0x2418ccu: goto label_2418cc;
        case 0x2418f4u: goto label_2418f4;
        case 0x24191cu: goto label_24191c;
        case 0x241940u: goto label_241940;
        case 0x241968u: goto label_241968;
        case 0x241990u: goto label_241990;
        case 0x2419b4u: goto label_2419b4;
        case 0x2419dcu: goto label_2419dc;
        case 0x241a04u: goto label_241a04;
        case 0x241a28u: goto label_241a28;
        case 0x241a4cu: goto label_241a4c;
        case 0x241a70u: goto label_241a70;
        case 0x241a94u: goto label_241a94;
        case 0x241ab8u: goto label_241ab8;
        case 0x241adcu: goto label_241adc;
        case 0x241b00u: goto label_241b00;
        case 0x241b3cu: goto label_241b3c;
        case 0x241b94u: goto label_241b94;
        case 0x241be4u: goto label_241be4;
        case 0x241bf8u: goto label_241bf8;
        case 0x241c28u: goto label_241c28;
        case 0x241c70u: goto label_241c70;
        case 0x241cb0u: goto label_241cb0;
        case 0x241cc8u: goto label_241cc8;
        case 0x241cfcu: goto label_241cfc;
        case 0x241d2cu: goto label_241d2c;
        case 0x241d60u: goto label_241d60;
        case 0x241d98u: goto label_241d98;
        case 0x241df8u: goto label_241df8;
        case 0x241e10u: goto label_241e10;
        case 0x241e60u: goto label_241e60;
        case 0x241e78u: goto label_241e78;
        case 0x241eb0u: goto label_241eb0;
        case 0x241ef0u: goto label_241ef0;
        case 0x241f10u: goto label_241f10;
        case 0x241fbcu: goto label_241fbc;
        default: break;
    }

    ctx->pc = 0x2416c0u;

    // 0x2416c0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2416c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2416c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2416c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2416c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2416c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2416cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2416ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2416d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2416d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2416d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2416d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2416d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2416d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2416dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2416dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2416e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2416e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2416e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2416e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2416e8: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x2416e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x2416ec: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2416ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2416f0: 0x2484bd20  addiu       $a0, $a0, -0x42E0
    ctx->pc = 0x2416f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950176));
    // 0x2416f4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2416f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2416f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2416f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2416fc:
    // 0x2416fc: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x2416fcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x241700: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x241700u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x241704: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x241704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x241708: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x241708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24170c: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x24170cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x241710: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x241710u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x241714: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x241714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x241718: 0x1c40fff8  bgtz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x241718u;
    {
        const bool branch_taken_0x241718 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x241718) {
            ctx->pc = 0x2416FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2416fc;
        }
    }
    ctx->pc = 0x241720u;
    // 0x241720: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x241720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x241724: 0x27859dc8  addiu       $a1, $gp, -0x6238
    ctx->pc = 0x241724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942152));
    // 0x241728: 0xc0f0ab6  jal         func_3C2AD8
    ctx->pc = 0x241728u;
    SET_GPR_U32(ctx, 31, 0x241730u);
    ctx->pc = 0x3C2AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AD8u, 0x241728u, 0x241730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241730u;
label_241730:
    // 0x241730: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x241730u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241734: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x241734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24173c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x24173cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241740: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x241740u;
    SET_GPR_U32(ctx, 31, 0x241748u);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x241740u, 0x241748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241748u;
label_241748:
    // 0x241748: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x241748u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24174c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241750: 0xc0f0ba4  jal         func_3C2E90
    ctx->pc = 0x241750u;
    SET_GPR_U32(ctx, 31, 0x241758u);
    ctx->pc = 0x3C2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E90u, 0x241750u, 0x241758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241758u;
label_241758:
    // 0x241758: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x241758u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24175c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24175cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241764: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x241764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241768: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x241768u;
    SET_GPR_U32(ctx, 31, 0x241770u);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x241768u, 0x241770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241770u;
label_241770:
    // 0x241770: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x241770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x241774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241778: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x241778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24177c: 0xc090814  jal         func_242050
    ctx->pc = 0x24177Cu;
    SET_GPR_U32(ctx, 31, 0x241784u);
    ctx->pc = 0x242050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242050u, 0x24177Cu, 0x241784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241784u;
label_241784:
    // 0x241784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x241784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241788: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x241788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24178c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24178cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241790: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x241790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241794: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x241794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241798: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x241798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24179c: 0xc0f0b08  jal         func_3C2C20
    ctx->pc = 0x24179Cu;
    SET_GPR_U32(ctx, 31, 0x2417A4u);
    ctx->pc = 0x3C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C20u, 0x24179Cu, 0x2417A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2417A4u;
label_2417a4:
    // 0x2417a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2417a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2417a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2417a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2417ac: 0xc0f0af2  jal         func_3C2BC8
    ctx->pc = 0x2417ACu;
    SET_GPR_U32(ctx, 31, 0x2417B4u);
    ctx->pc = 0x3C2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2BC8u, 0x2417ACu, 0x2417B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2417B4u;
label_2417b4:
    // 0x2417b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2417b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2417b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2417b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2417bc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2417bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2417c0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2417c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2417c4: 0x100001f2  b           . + 4 + (0x1F2 << 2)
    ctx->pc = 0x2417C4u;
    {
        const bool branch_taken_0x2417c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2417c4) {
            ctx->pc = 0x241F90u;
            goto label_241f90;
        }
    }
    ctx->pc = 0x2417CCu;
label_2417cc:
    // 0x2417cc: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2417ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2417d0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2417d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2417d4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2417d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2417d8: 0x2404005b  addiu       $a0, $zero, 0x5B
    ctx->pc = 0x2417d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x2417dc: 0x146401ec  bne         $v1, $a0, . + 4 + (0x1EC << 2)
    ctx->pc = 0x2417DCu;
    {
        const bool branch_taken_0x2417dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2417dc) {
            ctx->pc = 0x241F90u;
            goto label_241f90;
        }
    }
    ctx->pc = 0x2417E4u;
    // 0x2417e4: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x2417e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2417e8: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2417e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2417ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2417ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2417f0: 0x27859dcc  addiu       $a1, $gp, -0x6234
    ctx->pc = 0x2417f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942156));
    // 0x2417f4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2417f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2417f8: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x2417F8u;
    SET_GPR_U32(ctx, 31, 0x241800u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x2417F8u, 0x241800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241800u;
label_241800:
    // 0x241800: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x241800u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241804: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x241804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241808: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x241808u;
    SET_GPR_U32(ctx, 31, 0x241810u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x241808u, 0x241810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241810u;
label_241810:
    // 0x241810: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x241810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241814: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x241814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x241818: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x241818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x24181c: 0xa06000b0  sb          $zero, 0xB0($v1)
    ctx->pc = 0x24181cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 176), (uint8_t)GPR_U32(ctx, 0));
    // 0x241820: 0x27849dd0  addiu       $a0, $gp, -0x6230
    ctx->pc = 0x241820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942160));
    // 0x241824: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x241824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241828: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241828u;
    SET_GPR_U32(ctx, 31, 0x241830u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241828u, 0x241830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241830u;
label_241830:
    // 0x241830: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x241830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241834: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x241834u;
    {
        const bool branch_taken_0x241834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x241834) {
            ctx->pc = 0x241848u;
            goto label_241848;
        }
    }
    ctx->pc = 0x24183Cu;
    // 0x24183c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24183cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241840: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x241840u;
    {
        const bool branch_taken_0x241840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241840) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x241848u;
label_241848:
    // 0x241848: 0x27849dd8  addiu       $a0, $gp, -0x6228
    ctx->pc = 0x241848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942168));
    // 0x24184c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x24184cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241850: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241850u;
    SET_GPR_U32(ctx, 31, 0x241858u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241850u, 0x241858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241858u;
label_241858:
    // 0x241858: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241858u;
    {
        const bool branch_taken_0x241858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241858) {
            ctx->pc = 0x24186Cu;
            goto label_24186c;
        }
    }
    ctx->pc = 0x241860u;
    // 0x241860: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x241860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241864: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x241864u;
    {
        const bool branch_taken_0x241864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241864) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x24186Cu;
label_24186c:
    // 0x24186c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x24186cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x241870: 0x2484bd40  addiu       $a0, $a0, -0x42C0
    ctx->pc = 0x241870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950208));
    // 0x241874: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x241874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241878: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241878u;
    SET_GPR_U32(ctx, 31, 0x241880u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241878u, 0x241880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241880u;
label_241880:
    // 0x241880: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241880u;
    {
        const bool branch_taken_0x241880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241880) {
            ctx->pc = 0x241894u;
            goto label_241894;
        }
    }
    ctx->pc = 0x241888u;
    // 0x241888: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x241888u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24188c: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x24188Cu;
    {
        const bool branch_taken_0x24188c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24188c) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x241894u;
label_241894:
    // 0x241894: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x241894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x241898: 0x2484bd50  addiu       $a0, $a0, -0x42B0
    ctx->pc = 0x241898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950224));
    // 0x24189c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x24189cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2418a0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2418A0u;
    SET_GPR_U32(ctx, 31, 0x2418A8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2418A0u, 0x2418A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2418A8u;
label_2418a8:
    // 0x2418a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2418A8u;
    {
        const bool branch_taken_0x2418a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2418a8) {
            ctx->pc = 0x2418BCu;
            goto label_2418bc;
        }
    }
    ctx->pc = 0x2418B0u;
    // 0x2418b0: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2418b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2418b4: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2418B4u;
    {
        const bool branch_taken_0x2418b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2418b4) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x2418BCu;
label_2418bc:
    // 0x2418bc: 0x27849de0  addiu       $a0, $gp, -0x6220
    ctx->pc = 0x2418bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942176));
    // 0x2418c0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2418c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2418c4: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2418C4u;
    SET_GPR_U32(ctx, 31, 0x2418CCu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2418C4u, 0x2418CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2418CCu;
label_2418cc:
    // 0x2418cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2418CCu;
    {
        const bool branch_taken_0x2418cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2418cc) {
            ctx->pc = 0x2418E0u;
            goto label_2418e0;
        }
    }
    ctx->pc = 0x2418D4u;
    // 0x2418d4: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2418d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2418d8: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2418D8u;
    {
        const bool branch_taken_0x2418d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2418d8) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x2418E0u;
label_2418e0:
    // 0x2418e0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2418e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2418e4: 0x2484bd60  addiu       $a0, $a0, -0x42A0
    ctx->pc = 0x2418e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950240));
    // 0x2418e8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2418e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2418ec: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2418ECu;
    SET_GPR_U32(ctx, 31, 0x2418F4u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2418ECu, 0x2418F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2418F4u;
label_2418f4:
    // 0x2418f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2418F4u;
    {
        const bool branch_taken_0x2418f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2418f4) {
            ctx->pc = 0x241908u;
            goto label_241908;
        }
    }
    ctx->pc = 0x2418FCu;
    // 0x2418fc: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x2418fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x241900: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x241900u;
    {
        const bool branch_taken_0x241900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241900) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x241908u;
label_241908:
    // 0x241908: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x241908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x24190c: 0x2484bd70  addiu       $a0, $a0, -0x4290
    ctx->pc = 0x24190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950256));
    // 0x241910: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x241910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241914: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241914u;
    SET_GPR_U32(ctx, 31, 0x24191Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241914u, 0x24191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24191Cu;
label_24191c:
    // 0x24191c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24191Cu;
    {
        const bool branch_taken_0x24191c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24191c) {
            ctx->pc = 0x241930u;
            goto label_241930;
        }
    }
    ctx->pc = 0x241924u;
    // 0x241924: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x241924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x241928: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x241928u;
    {
        const bool branch_taken_0x241928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241928) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x241930u;
label_241930:
    // 0x241930: 0x27849de8  addiu       $a0, $gp, -0x6218
    ctx->pc = 0x241930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942184));
    // 0x241934: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x241934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241938: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241938u;
    SET_GPR_U32(ctx, 31, 0x241940u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241938u, 0x241940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241940u;
label_241940:
    // 0x241940: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241940u;
    {
        const bool branch_taken_0x241940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241940) {
            ctx->pc = 0x241954u;
            goto label_241954;
        }
    }
    ctx->pc = 0x241948u;
    // 0x241948: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x241948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24194c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x24194Cu;
    {
        const bool branch_taken_0x24194c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24194c) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x241954u;
label_241954:
    // 0x241954: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x241954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x241958: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x241958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x24195c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x24195cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241960: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241960u;
    SET_GPR_U32(ctx, 31, 0x241968u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241960u, 0x241968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241968u;
label_241968:
    // 0x241968: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241968u;
    {
        const bool branch_taken_0x241968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241968) {
            ctx->pc = 0x24197Cu;
            goto label_24197c;
        }
    }
    ctx->pc = 0x241970u;
    // 0x241970: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x241970u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x241974: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x241974u;
    {
        const bool branch_taken_0x241974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241974) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x24197Cu;
label_24197c:
    // 0x24197c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x24197cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x241980: 0x2484bd90  addiu       $a0, $a0, -0x4270
    ctx->pc = 0x241980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950288));
    // 0x241984: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x241984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241988: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241988u;
    SET_GPR_U32(ctx, 31, 0x241990u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241988u, 0x241990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241990u;
label_241990:
    // 0x241990: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241990u;
    {
        const bool branch_taken_0x241990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241990) {
            ctx->pc = 0x2419A4u;
            goto label_2419a4;
        }
    }
    ctx->pc = 0x241998u;
    // 0x241998: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x241998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24199c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x24199Cu;
    {
        const bool branch_taken_0x24199c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24199c) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x2419A4u;
label_2419a4:
    // 0x2419a4: 0x27849df0  addiu       $a0, $gp, -0x6210
    ctx->pc = 0x2419a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942192));
    // 0x2419a8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2419a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2419ac: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2419ACu;
    SET_GPR_U32(ctx, 31, 0x2419B4u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2419ACu, 0x2419B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419B4u;
label_2419b4:
    // 0x2419b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2419B4u;
    {
        const bool branch_taken_0x2419b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2419b4) {
            ctx->pc = 0x2419C8u;
            goto label_2419c8;
        }
    }
    ctx->pc = 0x2419BCu;
    // 0x2419bc: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x2419bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2419c0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2419C0u;
    {
        const bool branch_taken_0x2419c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2419c0) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x2419C8u;
label_2419c8:
    // 0x2419c8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2419c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2419cc: 0x2484bda0  addiu       $a0, $a0, -0x4260
    ctx->pc = 0x2419ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950304));
    // 0x2419d0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2419d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2419d4: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2419D4u;
    SET_GPR_U32(ctx, 31, 0x2419DCu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2419D4u, 0x2419DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419DCu;
label_2419dc:
    // 0x2419dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2419DCu;
    {
        const bool branch_taken_0x2419dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2419dc) {
            ctx->pc = 0x2419F0u;
            goto label_2419f0;
        }
    }
    ctx->pc = 0x2419E4u;
    // 0x2419e4: 0x2412000b  addiu       $s2, $zero, 0xB
    ctx->pc = 0x2419e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2419e8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2419E8u;
    {
        const bool branch_taken_0x2419e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2419e8) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x2419F0u;
label_2419f0:
    // 0x2419f0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2419f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2419f4: 0x2484bdb0  addiu       $a0, $a0, -0x4250
    ctx->pc = 0x2419f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950320));
    // 0x2419f8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2419f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2419fc: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2419FCu;
    SET_GPR_U32(ctx, 31, 0x241A04u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2419FCu, 0x241A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A04u;
label_241a04:
    // 0x241a04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241A04u;
    {
        const bool branch_taken_0x241a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241a04) {
            ctx->pc = 0x241A18u;
            goto label_241a18;
        }
    }
    ctx->pc = 0x241A0Cu;
    // 0x241a0c: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x241a0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x241a10: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x241A10u;
    {
        const bool branch_taken_0x241a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241a10) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x241A18u;
label_241a18:
    // 0x241a18: 0x27849df8  addiu       $a0, $gp, -0x6208
    ctx->pc = 0x241a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942200));
    // 0x241a1c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x241a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241a20: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241A20u;
    SET_GPR_U32(ctx, 31, 0x241A28u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241A20u, 0x241A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A28u;
label_241a28:
    // 0x241a28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241A28u;
    {
        const bool branch_taken_0x241a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241a28) {
            ctx->pc = 0x241A3Cu;
            goto label_241a3c;
        }
    }
    ctx->pc = 0x241A30u;
    // 0x241a30: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x241a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x241a34: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x241A34u;
    {
        const bool branch_taken_0x241a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241a34) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x241A3Cu;
label_241a3c:
    // 0x241a3c: 0x27849e00  addiu       $a0, $gp, -0x6200
    ctx->pc = 0x241a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942208));
    // 0x241a40: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x241a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241a44: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241A44u;
    SET_GPR_U32(ctx, 31, 0x241A4Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241A44u, 0x241A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A4Cu;
label_241a4c:
    // 0x241a4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241A4Cu;
    {
        const bool branch_taken_0x241a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241a4c) {
            ctx->pc = 0x241A60u;
            goto label_241a60;
        }
    }
    ctx->pc = 0x241A54u;
    // 0x241a54: 0x2412000e  addiu       $s2, $zero, 0xE
    ctx->pc = 0x241a54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x241a58: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x241A58u;
    {
        const bool branch_taken_0x241a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241a58) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x241A60u;
label_241a60:
    // 0x241a60: 0x27849e08  addiu       $a0, $gp, -0x61F8
    ctx->pc = 0x241a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942216));
    // 0x241a64: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x241a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241a68: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241A68u;
    SET_GPR_U32(ctx, 31, 0x241A70u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241A68u, 0x241A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A70u;
label_241a70:
    // 0x241a70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241A70u;
    {
        const bool branch_taken_0x241a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241a70) {
            ctx->pc = 0x241A84u;
            goto label_241a84;
        }
    }
    ctx->pc = 0x241A78u;
    // 0x241a78: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x241a78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x241a7c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x241A7Cu;
    {
        const bool branch_taken_0x241a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241a7c) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x241A84u;
label_241a84:
    // 0x241a84: 0x27849e10  addiu       $a0, $gp, -0x61F0
    ctx->pc = 0x241a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942224));
    // 0x241a88: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x241a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241a8c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241A8Cu;
    SET_GPR_U32(ctx, 31, 0x241A94u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241A8Cu, 0x241A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A94u;
label_241a94:
    // 0x241a94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241A94u;
    {
        const bool branch_taken_0x241a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241a94) {
            ctx->pc = 0x241AA8u;
            goto label_241aa8;
        }
    }
    ctx->pc = 0x241A9Cu;
    // 0x241a9c: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x241a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x241aa0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x241AA0u;
    {
        const bool branch_taken_0x241aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241aa0) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x241AA8u;
label_241aa8:
    // 0x241aa8: 0x27849e18  addiu       $a0, $gp, -0x61E8
    ctx->pc = 0x241aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942232));
    // 0x241aac: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x241aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241ab0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241AB0u;
    SET_GPR_U32(ctx, 31, 0x241AB8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241AB0u, 0x241AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AB8u;
label_241ab8:
    // 0x241ab8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241AB8u;
    {
        const bool branch_taken_0x241ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241ab8) {
            ctx->pc = 0x241ACCu;
            goto label_241acc;
        }
    }
    ctx->pc = 0x241AC0u;
    // 0x241ac0: 0x24120011  addiu       $s2, $zero, 0x11
    ctx->pc = 0x241ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x241ac4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x241AC4u;
    {
        const bool branch_taken_0x241ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241ac4) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x241ACCu;
label_241acc:
    // 0x241acc: 0x27849e20  addiu       $a0, $gp, -0x61E0
    ctx->pc = 0x241accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942240));
    // 0x241ad0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x241ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241ad4: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241AD4u;
    SET_GPR_U32(ctx, 31, 0x241ADCu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241AD4u, 0x241ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241ADCu;
label_241adc:
    // 0x241adc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241ADCu;
    {
        const bool branch_taken_0x241adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241adc) {
            ctx->pc = 0x241AF0u;
            goto label_241af0;
        }
    }
    ctx->pc = 0x241AE4u;
    // 0x241ae4: 0x24120012  addiu       $s2, $zero, 0x12
    ctx->pc = 0x241ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x241ae8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x241AE8u;
    {
        const bool branch_taken_0x241ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241ae8) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x241AF0u;
label_241af0:
    // 0x241af0: 0x27849e28  addiu       $a0, $gp, -0x61D8
    ctx->pc = 0x241af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942248));
    // 0x241af4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x241af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x241af8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241AF8u;
    SET_GPR_U32(ctx, 31, 0x241B00u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241AF8u, 0x241B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B00u;
label_241b00:
    // 0x241b00: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x241B00u;
    {
        const bool branch_taken_0x241b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241b00) {
            ctx->pc = 0x241B0Cu;
            goto label_241b0c;
        }
    }
    ctx->pc = 0x241B08u;
    // 0x241b08: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x241b08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_241b0c:
    // 0x241b0c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x241b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x241b10: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x241b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x241b14: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x241b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x241b18: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x241b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241b1c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x241b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x241b20: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x241b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x241b24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241b28: 0x24500038  addiu       $s0, $v0, 0x38
    ctx->pc = 0x241b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x241b2c: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x241b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x241b30: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x241b30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b34: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x241B34u;
    {
        const bool branch_taken_0x241b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241b34) {
            ctx->pc = 0x241B88u;
            goto label_241b88;
        }
    }
    ctx->pc = 0x241B3Cu;
label_241b3c:
    // 0x241b3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241b40: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x241b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x241b44: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241b48: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x241b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x241b4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241b4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241b50: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x241b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x241b54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241b58: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x241b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x241b5c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x241b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x241b60: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x241b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x241b64: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241b68: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x241b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
    // 0x241b6c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x241b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x241b70: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241b74: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x241b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
    // 0x241b78: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x241b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x241b7c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241b80: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x241b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
    // 0x241b84: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x241b84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_241b88:
    // 0x241b88: 0x2e820009  sltiu       $v0, $s4, 0x9
    ctx->pc = 0x241b88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x241b8c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x241B8Cu;
    {
        const bool branch_taken_0x241b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241b8c) {
            ctx->pc = 0x241B3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241b3c;
        }
    }
    ctx->pc = 0x241B94u;
label_241b94:
    // 0x241b94: 0x2331023  subu        $v0, $s1, $s3
    ctx->pc = 0x241b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x241b98: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x241b98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x241b9c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x241B9Cu;
    {
        const bool branch_taken_0x241b9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x241b9c) {
            ctx->pc = 0x241BE0u;
            goto label_241be0;
        }
    }
    ctx->pc = 0x241BA4u;
    // 0x241ba4: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x241ba4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x241ba8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x241ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x241bac: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x241bacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x241bb0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x241bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x241bb4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x241BB4u;
    {
        const bool branch_taken_0x241bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x241bb4) {
            ctx->pc = 0x241BD4u;
            goto label_241bd4;
        }
    }
    ctx->pc = 0x241BBCu;
    // 0x241bbc: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x241bbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x241bc0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x241bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x241bc4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x241bc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x241bc8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x241bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x241bcc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241BCCu;
    {
        const bool branch_taken_0x241bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x241bcc) {
            ctx->pc = 0x241BE0u;
            goto label_241be0;
        }
    }
    ctx->pc = 0x241BD4u;
label_241bd4:
    // 0x241bd4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x241bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x241bd8: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x241BD8u;
    {
        const bool branch_taken_0x241bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241bd8) {
            ctx->pc = 0x241B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241b94;
        }
    }
    ctx->pc = 0x241BE0u;
label_241be0:
    // 0x241be0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x241be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_241be4:
    // 0x241be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241be8: 0x27859e30  addiu       $a1, $gp, -0x61D0
    ctx->pc = 0x241be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942256));
    // 0x241bec: 0x27a600fc  addiu       $a2, $sp, 0xFC
    ctx->pc = 0x241becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x241bf0: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x241BF0u;
    SET_GPR_U32(ctx, 31, 0x241BF8u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x241BF0u, 0x241BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241BF8u;
label_241bf8:
    // 0x241bf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241BF8u;
    {
        const bool branch_taken_0x241bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241bf8) {
            ctx->pc = 0x241C0Cu;
            goto label_241c0c;
        }
    }
    ctx->pc = 0x241C00u;
    // 0x241c00: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x241c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x241c04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x241c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x241c08: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x241c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_241c0c:
    // 0x241c0c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x241c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x241c10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x241c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x241c14: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x241c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c1c: 0x27859e38  addiu       $a1, $gp, -0x61C8
    ctx->pc = 0x241c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942264));
    // 0x241c20: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x241C20u;
    SET_GPR_U32(ctx, 31, 0x241C28u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x241C20u, 0x241C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C28u;
label_241c28:
    // 0x241c28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x241C28u;
    {
        const bool branch_taken_0x241c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241c28) {
            ctx->pc = 0x241C50u;
            goto label_241c50;
        }
    }
    ctx->pc = 0x241C30u;
    // 0x241c30: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x241c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x241c34: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x241c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x241c38: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x241c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241c3c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x241c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x241c40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x241c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x241c44: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x241c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241c48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x241c48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x241c4c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x241c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_241c50:
    // 0x241c50: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x241c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x241c54: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x241c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x241c58: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c60: 0x27859e40  addiu       $a1, $gp, -0x61C0
    ctx->pc = 0x241c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942272));
    // 0x241c64: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x241c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x241c68: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x241C68u;
    SET_GPR_U32(ctx, 31, 0x241C70u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x241C68u, 0x241C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C70u;
label_241c70:
    // 0x241c70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x241C70u;
    {
        const bool branch_taken_0x241c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241c70) {
            ctx->pc = 0x241C98u;
            goto label_241c98;
        }
    }
    ctx->pc = 0x241C78u;
    // 0x241c78: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x241c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x241c7c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x241c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x241c80: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x241c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241c84: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x241c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x241c88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x241c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x241c8c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x241c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241c90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x241c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x241c94: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x241c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_241c98:
    // 0x241c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c9c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x241c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x241ca0: 0x24a5bdc0  addiu       $a1, $a1, -0x4240
    ctx->pc = 0x241ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950336));
    // 0x241ca4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x241ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x241ca8: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x241CA8u;
    SET_GPR_U32(ctx, 31, 0x241CB0u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x241CA8u, 0x241CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CB0u;
label_241cb0:
    // 0x241cb0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x241CB0u;
    {
        const bool branch_taken_0x241cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241cb0) {
            ctx->pc = 0x241D7Cu;
            goto label_241d7c;
        }
    }
    ctx->pc = 0x241CB8u;
    // 0x241cb8: 0x27849e48  addiu       $a0, $gp, -0x61B8
    ctx->pc = 0x241cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942280));
    // 0x241cbc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x241cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x241cc0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241CC0u;
    SET_GPR_U32(ctx, 31, 0x241CC8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241CC0u, 0x241CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CC8u;
label_241cc8:
    // 0x241cc8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x241CC8u;
    {
        const bool branch_taken_0x241cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241cc8) {
            ctx->pc = 0x241CECu;
            goto label_241cec;
        }
    }
    ctx->pc = 0x241CD0u;
    // 0x241cd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241cd4: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x241cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x241cd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241cdc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241ce0: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x241ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x241ce4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x241CE4u;
    {
        const bool branch_taken_0x241ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241ce4) {
            ctx->pc = 0x241D7Cu;
            goto label_241d7c;
        }
    }
    ctx->pc = 0x241CECu;
label_241cec:
    // 0x241cec: 0x27849e50  addiu       $a0, $gp, -0x61B0
    ctx->pc = 0x241cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942288));
    // 0x241cf0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x241cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x241cf4: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241CF4u;
    SET_GPR_U32(ctx, 31, 0x241CFCu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241CF4u, 0x241CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CFCu;
label_241cfc:
    // 0x241cfc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x241CFCu;
    {
        const bool branch_taken_0x241cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241cfc) {
            ctx->pc = 0x241D1Cu;
            goto label_241d1c;
        }
    }
    ctx->pc = 0x241D04u;
    // 0x241d04: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x241d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x241d08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241d0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241d10: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x241d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x241d14: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x241D14u;
    {
        const bool branch_taken_0x241d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241d14) {
            ctx->pc = 0x241D7Cu;
            goto label_241d7c;
        }
    }
    ctx->pc = 0x241D1Cu;
label_241d1c:
    // 0x241d1c: 0x27849e58  addiu       $a0, $gp, -0x61A8
    ctx->pc = 0x241d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942296));
    // 0x241d20: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x241d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x241d24: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241D24u;
    SET_GPR_U32(ctx, 31, 0x241D2Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241D24u, 0x241D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D2Cu;
label_241d2c:
    // 0x241d2c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x241D2Cu;
    {
        const bool branch_taken_0x241d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241d2c) {
            ctx->pc = 0x241D50u;
            goto label_241d50;
        }
    }
    ctx->pc = 0x241D34u;
    // 0x241d34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x241d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241d38: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x241d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x241d3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241d40: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241d44: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x241d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x241d48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x241D48u;
    {
        const bool branch_taken_0x241d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241d48) {
            ctx->pc = 0x241D7Cu;
            goto label_241d7c;
        }
    }
    ctx->pc = 0x241D50u;
label_241d50:
    // 0x241d50: 0x27849e60  addiu       $a0, $gp, -0x61A0
    ctx->pc = 0x241d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942304));
    // 0x241d54: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x241d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x241d58: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241D58u;
    SET_GPR_U32(ctx, 31, 0x241D60u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241D58u, 0x241D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D60u;
label_241d60:
    // 0x241d60: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x241D60u;
    {
        const bool branch_taken_0x241d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241d60) {
            ctx->pc = 0x241D7Cu;
            goto label_241d7c;
        }
    }
    ctx->pc = 0x241D68u;
    // 0x241d68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241d6c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x241d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x241d70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241d74: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241d78: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x241d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
label_241d7c:
    // 0x241d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241d80: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x241d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x241d84: 0x24a5bdd0  addiu       $a1, $a1, -0x4230
    ctx->pc = 0x241d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950352));
    // 0x241d88: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x241d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x241d8c: 0x27a700f4  addiu       $a3, $sp, 0xF4
    ctx->pc = 0x241d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x241d90: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x241D90u;
    SET_GPR_U32(ctx, 31, 0x241D98u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x241D90u, 0x241D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D98u;
label_241d98:
    // 0x241d98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x241D98u;
    {
        const bool branch_taken_0x241d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241d98) {
            ctx->pc = 0x241DE0u;
            goto label_241de0;
        }
    }
    ctx->pc = 0x241DA0u;
    // 0x241da0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x241da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x241da4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x241da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x241da8: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x241da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x241dac: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x241dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x241db0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x241db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x241db4: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x241db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x241db8: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x241db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x241dbc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x241dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x241dc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241dc4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241dc8: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x241dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
    // 0x241dcc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x241dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x241dd0: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x241dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x241dd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241dd8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241ddc: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x241ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
label_241de0:
    // 0x241de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241de4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x241de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x241de8: 0x24a5bde0  addiu       $a1, $a1, -0x4220
    ctx->pc = 0x241de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950368));
    // 0x241dec: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x241decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x241df0: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x241DF0u;
    SET_GPR_U32(ctx, 31, 0x241DF8u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x241DF0u, 0x241DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DF8u;
label_241df8:
    // 0x241df8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x241DF8u;
    {
        const bool branch_taken_0x241df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241df8) {
            ctx->pc = 0x241E48u;
            goto label_241e48;
        }
    }
    ctx->pc = 0x241E00u;
    // 0x241e00: 0x27849e68  addiu       $a0, $gp, -0x6198
    ctx->pc = 0x241e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942312));
    // 0x241e04: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x241e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x241e08: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241E08u;
    SET_GPR_U32(ctx, 31, 0x241E10u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241E08u, 0x241E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E10u;
label_241e10:
    // 0x241e10: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x241E10u;
    {
        const bool branch_taken_0x241e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241e10) {
            ctx->pc = 0x241E34u;
            goto label_241e34;
        }
    }
    ctx->pc = 0x241E18u;
    // 0x241e18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241e1c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x241e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x241e20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241e24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241e28: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x241e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
    // 0x241e2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x241E2Cu;
    {
        const bool branch_taken_0x241e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241e2c) {
            ctx->pc = 0x241E48u;
            goto label_241e48;
        }
    }
    ctx->pc = 0x241E34u;
label_241e34:
    // 0x241e34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x241e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x241e38: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x241e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x241e3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241e40: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241e44: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x241e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
label_241e48:
    // 0x241e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241e4c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x241e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x241e50: 0x24a5bdf0  addiu       $a1, $a1, -0x4210
    ctx->pc = 0x241e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950384));
    // 0x241e54: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x241e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x241e58: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x241E58u;
    SET_GPR_U32(ctx, 31, 0x241E60u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x241E58u, 0x241E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E60u;
label_241e60:
    // 0x241e60: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x241E60u;
    {
        const bool branch_taken_0x241e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241e60) {
            ctx->pc = 0x241F10u;
            goto label_241f10;
        }
    }
    ctx->pc = 0x241E68u;
    // 0x241e68: 0x27849e70  addiu       $a0, $gp, -0x6190
    ctx->pc = 0x241e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942320));
    // 0x241e6c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x241e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x241e70: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241E70u;
    SET_GPR_U32(ctx, 31, 0x241E78u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241E70u, 0x241E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E78u;
label_241e78:
    // 0x241e78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x241E78u;
    {
        const bool branch_taken_0x241e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241e78) {
            ctx->pc = 0x241E98u;
            goto label_241e98;
        }
    }
    ctx->pc = 0x241E80u;
    // 0x241e80: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x241e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x241e84: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x241e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x241e88: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x241e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x241e8c: 0xaca000b4  sw          $zero, 0xB4($a1)
    ctx->pc = 0x241e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 0));
    // 0x241e90: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x241E90u;
    {
        const bool branch_taken_0x241e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241e90) {
            ctx->pc = 0x241F10u;
            goto label_241f10;
        }
    }
    ctx->pc = 0x241E98u;
label_241e98:
    // 0x241e98: 0x27839e78  addiu       $v1, $gp, -0x6188
    ctx->pc = 0x241e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942328));
    // 0x241e9c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x241e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ea0: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x241ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x241ea4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ea8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241EA8u;
    SET_GPR_U32(ctx, 31, 0x241EB0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241EA8u, 0x241EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241EB0u;
label_241eb0:
    // 0x241eb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x241eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241eb4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x241EB4u;
    {
        const bool branch_taken_0x241eb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x241eb4) {
            ctx->pc = 0x241ED8u;
            goto label_241ed8;
        }
    }
    ctx->pc = 0x241EBCu;
    // 0x241ebc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x241ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241ec0: 0x8fb600fc  lw          $s6, 0xFC($sp)
    ctx->pc = 0x241ec0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x241ec4: 0x163080  sll         $a2, $s6, 2
    ctx->pc = 0x241ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x241ec8: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x241ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x241ecc: 0xac6500b4  sw          $a1, 0xB4($v1)
    ctx->pc = 0x241eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 5));
    // 0x241ed0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x241ED0u;
    {
        const bool branch_taken_0x241ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241ed0) {
            ctx->pc = 0x241F10u;
            goto label_241f10;
        }
    }
    ctx->pc = 0x241ED8u;
label_241ed8:
    // 0x241ed8: 0x27829e7c  addiu       $v0, $gp, -0x6184
    ctx->pc = 0x241ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942332));
    // 0x241edc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x241edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ee0: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x241ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x241ee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ee8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x241EE8u;
    SET_GPR_U32(ctx, 31, 0x241EF0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x241EE8u, 0x241EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241EF0u;
label_241ef0:
    // 0x241ef0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x241ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ef4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x241EF4u;
    {
        const bool branch_taken_0x241ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x241ef4) {
            ctx->pc = 0x241F10u;
            goto label_241f10;
        }
    }
    ctx->pc = 0x241EFCu;
    // 0x241efc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x241efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241f00: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x241f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x241f04: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x241f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x241f08: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x241f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x241f0c: 0xac6400b4  sw          $a0, 0xB4($v1)
    ctx->pc = 0x241f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 4));
label_241f10:
    // 0x241f10: 0x2331823  subu        $v1, $s1, $s3
    ctx->pc = 0x241f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x241f14: 0x75082a  slt         $at, $v1, $s5
    ctx->pc = 0x241f14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x241f18: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x241F18u;
    {
        const bool branch_taken_0x241f18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x241f18) {
            ctx->pc = 0x241F60u;
            goto label_241f60;
        }
    }
    ctx->pc = 0x241F20u;
    // 0x241f20: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x241f20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x241f24: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x241f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x241f28: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x241f28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x241f2c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x241f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x241f30: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x241F30u;
    {
        const bool branch_taken_0x241f30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x241f30) {
            ctx->pc = 0x241F50u;
            goto label_241f50;
        }
    }
    ctx->pc = 0x241F38u;
    // 0x241f38: 0x82250001  lb          $a1, 0x1($s1)
    ctx->pc = 0x241f38u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x241f3c: 0x5363c  dsll32      $a2, $a1, 24
    ctx->pc = 0x241f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
    // 0x241f40: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x241f40u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x241f44: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x241f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x241f48: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x241F48u;
    {
        const bool branch_taken_0x241f48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x241f48) {
            ctx->pc = 0x241F60u;
            goto label_241f60;
        }
    }
    ctx->pc = 0x241F50u;
label_241f50:
    // 0x241f50: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x241f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x241f54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x241f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241f58: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x241F58u;
    {
        const bool branch_taken_0x241f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241f58) {
            ctx->pc = 0x241F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241f10;
        }
    }
    ctx->pc = 0x241F60u;
label_241f60:
    // 0x241f60: 0x26230002  addiu       $v1, $s1, 0x2
    ctx->pc = 0x241f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x241f64: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x241f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241f68: 0x2331823  subu        $v1, $s1, $s3
    ctx->pc = 0x241f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x241f6c: 0x75082a  slt         $at, $v1, $s5
    ctx->pc = 0x241f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x241f70: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x241F70u;
    {
        const bool branch_taken_0x241f70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x241f70) {
            ctx->pc = 0x241F90u;
            goto label_241f90;
        }
    }
    ctx->pc = 0x241F78u;
    // 0x241f78: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x241f78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x241f7c: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x241f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x241f80: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x241f80u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x241f84: 0x2405005b  addiu       $a1, $zero, 0x5B
    ctx->pc = 0x241f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x241f88: 0x1485ff16  bne         $a0, $a1, . + 4 + (-0xEA << 2)
    ctx->pc = 0x241F88u;
    {
        const bool branch_taken_0x241f88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x241f88) {
            ctx->pc = 0x241BE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241be4;
        }
    }
    ctx->pc = 0x241F90u;
label_241f90:
    // 0x241f90: 0x2331823  subu        $v1, $s1, $s3
    ctx->pc = 0x241f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x241f94: 0x75202a  slt         $a0, $v1, $s5
    ctx->pc = 0x241f94u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x241f98: 0x1480fe0c  bnez        $a0, . + 4 + (-0x1F4 << 2)
    ctx->pc = 0x241F98u;
    {
        const bool branch_taken_0x241f98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x241f98) {
            ctx->pc = 0x2417CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2417cc;
        }
    }
    ctx->pc = 0x241FA0u;
    // 0x241fa0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x241FA0u;
    {
        const bool branch_taken_0x241fa0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x241fa0) {
            ctx->pc = 0x241FC0u;
            goto label_241fc0;
        }
    }
    ctx->pc = 0x241FA8u;
    // 0x241fa8: 0x8f85c008  lw          $a1, -0x3FF8($gp)
    ctx->pc = 0x241fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x241fac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x241facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241fb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x241fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241fb4: 0xc0907fc  jal         func_241FF0
    ctx->pc = 0x241FB4u;
    SET_GPR_U32(ctx, 31, 0x241FBCu);
    ctx->pc = 0x241FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241FF0u, 0x241FB4u, 0x241FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241FBCu;
label_241fbc:
    // 0x241fbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x241fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241fc0:
    // 0x241fc0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x241fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x241fc4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x241fc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x241fc8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x241fc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x241fcc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x241fccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x241fd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x241fd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x241fd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x241fd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241fd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x241fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241fdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x241fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x241fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241fe4: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x241fe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x241fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x241FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241FF0u;
}
