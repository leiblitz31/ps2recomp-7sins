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

// Function: sub_00188450
// Address: 0x188450 - 0x188880
void sub_00188450_0x188450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188450_0x188450");
#endif

    switch (ctx->pc) {
        case 0x188488u: goto label_188488;
        case 0x18849cu: goto label_18849c;
        case 0x1884b8u: goto label_1884b8;
        case 0x1884e4u: goto label_1884e4;
        case 0x188504u: goto label_188504;
        case 0x188514u: goto label_188514;
        case 0x188520u: goto label_188520;
        case 0x188530u: goto label_188530;
        case 0x188540u: goto label_188540;
        case 0x188550u: goto label_188550;
        case 0x188560u: goto label_188560;
        case 0x188570u: goto label_188570;
        case 0x18858cu: goto label_18858c;
        case 0x1885a0u: goto label_1885a0;
        case 0x1885ccu: goto label_1885cc;
        case 0x188600u: goto label_188600;
        case 0x188628u: goto label_188628;
        case 0x18865cu: goto label_18865c;
        case 0x188688u: goto label_188688;
        case 0x1886a8u: goto label_1886a8;
        case 0x1886bcu: goto label_1886bc;
        case 0x1886ccu: goto label_1886cc;
        case 0x1886dcu: goto label_1886dc;
        case 0x1886f4u: goto label_1886f4;
        case 0x188704u: goto label_188704;
        case 0x188754u: goto label_188754;
        case 0x1887b8u: goto label_1887b8;
        case 0x188814u: goto label_188814;
        case 0x188830u: goto label_188830;
        case 0x188840u: goto label_188840;
        case 0x188850u: goto label_188850;
        default: break;
    }

    ctx->pc = 0x188450u;

    // 0x188450: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x188450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x188454: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x188454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x188458: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x188458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18845c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18845cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x188460: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x188460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x188464: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x188464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x188468: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x188468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18846c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18846cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188470: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188474: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188478: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x188478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x18847c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x18847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x188480: 0xc0495d4  jal         func_125750
    ctx->pc = 0x188480u;
    SET_GPR_U32(ctx, 31, 0x188488u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x188480u, 0x188488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188488u;
label_188488:
    // 0x188488: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x188488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18848c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18848cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x188490: 0x24a55220  addiu       $a1, $a1, 0x5220
    ctx->pc = 0x188490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21024));
    // 0x188494: 0xc05621c  jal         func_158870
    ctx->pc = 0x188494u;
    SET_GPR_U32(ctx, 31, 0x18849Cu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x188494u, 0x18849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18849Cu;
label_18849c:
    // 0x18849c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18849cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884a0: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x1884a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1884a4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1884a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1884a8: 0x24050566  addiu       $a1, $zero, 0x566
    ctx->pc = 0x1884a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1382));
    // 0x1884ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1884acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884b0: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x1884B0u;
    SET_GPR_U32(ctx, 31, 0x1884B8u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x1884B0u, 0x1884B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1884B8u;
label_1884b8:
    // 0x1884b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1884b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884bc: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x1884bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1884c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1884c4: 0x16820009  bne         $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1884C4u;
    {
        const bool branch_taken_0x1884c4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1884c4) {
            ctx->pc = 0x1884ECu;
            goto label_1884ec;
        }
    }
    ctx->pc = 0x1884CCu;
    // 0x1884cc: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1884ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1884d0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1884d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1884d4: 0x24a55238  addiu       $a1, $a1, 0x5238
    ctx->pc = 0x1884d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21048));
    // 0x1884d8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1884d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1884dc: 0xc08e514  jal         func_239450
    ctx->pc = 0x1884DCu;
    SET_GPR_U32(ctx, 31, 0x1884E4u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1884DCu, 0x1884E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1884E4u;
label_1884e4:
    // 0x1884e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1884E4u;
    {
        const bool branch_taken_0x1884e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884e4) {
            ctx->pc = 0x188504u;
            goto label_188504;
        }
    }
    ctx->pc = 0x1884ECu;
label_1884ec:
    // 0x1884ec: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1884ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1884f0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1884f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1884f4: 0x24a55248  addiu       $a1, $a1, 0x5248
    ctx->pc = 0x1884f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21064));
    // 0x1884f8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1884f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1884fc: 0xc08e514  jal         func_239450
    ctx->pc = 0x1884FCu;
    SET_GPR_U32(ctx, 31, 0x188504u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1884FCu, 0x188504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188504u;
label_188504:
    // 0x188504: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x188504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188508: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x188508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x18850c: 0xc1194c4  jal         func_465310
    ctx->pc = 0x18850Cu;
    SET_GPR_U32(ctx, 31, 0x188514u);
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x18850Cu, 0x188514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188514u;
label_188514:
    // 0x188514: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x188514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188518: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x188518u;
    SET_GPR_U32(ctx, 31, 0x188520u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x188518u, 0x188520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188520u;
label_188520:
    // 0x188520: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x188520u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188524: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x188524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188528: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x188528u;
    SET_GPR_U32(ctx, 31, 0x188530u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x188528u, 0x188530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188530u;
label_188530:
    // 0x188530: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x188530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188534: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x188534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188538: 0xc11949c  jal         func_465270
    ctx->pc = 0x188538u;
    SET_GPR_U32(ctx, 31, 0x188540u);
    ctx->pc = 0x465270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465270u, 0x188538u, 0x188540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188540u;
label_188540:
    // 0x188540: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x188540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x188544: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x188544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188548: 0xc119568  jal         func_4655A0
    ctx->pc = 0x188548u;
    SET_GPR_U32(ctx, 31, 0x188550u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x188548u, 0x188550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188550u;
label_188550:
    // 0x188550: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x188550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x188554: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x188554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x188558: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x188558u;
    SET_GPR_U32(ctx, 31, 0x188560u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x188558u, 0x188560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188560u;
label_188560:
    // 0x188560: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x188560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x188564: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x188564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188568: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x188568u;
    SET_GPR_U32(ctx, 31, 0x188570u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x188568u, 0x188570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188570u;
label_188570:
    // 0x188570: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x188570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x188574: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x188574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x188578: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x188578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18857c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x18857cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x188580: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x188580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188584: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x188584u;
    SET_GPR_U32(ctx, 31, 0x18858Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x188584u, 0x18858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18858Cu;
label_18858c:
    // 0x18858c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x18858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x188590: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x188590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x188594: 0x24a551d0  addiu       $a1, $a1, 0x51D0
    ctx->pc = 0x188594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20944));
    // 0x188598: 0xc05621c  jal         func_158870
    ctx->pc = 0x188598u;
    SET_GPR_U32(ctx, 31, 0x1885A0u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x188598u, 0x1885A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885A0u;
label_1885a0:
    // 0x1885a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1885a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885a4: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x1885A4u;
    {
        const bool branch_taken_0x1885a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1885a4) {
            ctx->pc = 0x18865Cu;
            goto label_18865c;
        }
    }
    ctx->pc = 0x1885ACu;
    // 0x1885ac: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x1885acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1885b0: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x1885b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1885b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1885B4u;
    {
        const bool branch_taken_0x1885b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1885b4) {
            ctx->pc = 0x1885D8u;
            goto label_1885d8;
        }
    }
    ctx->pc = 0x1885BCu;
    // 0x1885bc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1885bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1885c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1885c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885c4: 0xc08d95c  jal         func_236570
    ctx->pc = 0x1885C4u;
    SET_GPR_U32(ctx, 31, 0x1885CCu);
    ctx->pc = 0x236570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236570u, 0x1885C4u, 0x1885CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885CCu;
label_1885cc:
    // 0x1885cc: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x1885ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1885d0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1885D0u;
    {
        const bool branch_taken_0x1885d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1885d0) {
            ctx->pc = 0x188608u;
            goto label_188608;
        }
    }
    ctx->pc = 0x1885D8u;
label_1885d8:
    // 0x1885d8: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1885d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1885dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1885dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1885e0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1885e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1885e4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1885e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1885e8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1885e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1885ec: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1885ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1885f0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1885f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1885f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1885f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885f8: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x1885F8u;
    SET_GPR_U32(ctx, 31, 0x188600u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x1885F8u, 0x188600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188600u;
label_188600:
    // 0x188600: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x188600u;
    {
        const bool branch_taken_0x188600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188600) {
            ctx->pc = 0x18865Cu;
            goto label_18865c;
        }
    }
    ctx->pc = 0x188608u;
label_188608:
    // 0x188608: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x188608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18860c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18860cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x188610: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x188610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188614: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x188614u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x188618: 0x24c651e0  addiu       $a2, $a2, 0x51E0
    ctx->pc = 0x188618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20960));
    // 0x18861c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18861cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188620: 0xc08c800  jal         func_232000
    ctx->pc = 0x188620u;
    SET_GPR_U32(ctx, 31, 0x188628u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x188620u, 0x188628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188628u;
label_188628:
    // 0x188628: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x188628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18862c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x188630: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x188630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x188634: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x188634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x188638: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x188638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18863c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18863cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x188640: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x188640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x188644: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x188644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x188648: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x188648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x18864c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18864cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x188650: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x188650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188654: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x188654u;
    SET_GPR_U32(ctx, 31, 0x18865Cu);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x188654u, 0x18865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18865Cu;
label_18865c:
    // 0x18865c: 0x93829194  lbu         $v0, -0x6E6C($gp)
    ctx->pc = 0x18865cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939028)));
    // 0x188660: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x188660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x188664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188668: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x188668u;
    {
        const bool branch_taken_0x188668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188668) {
            ctx->pc = 0x1886BCu;
            goto label_1886bc;
        }
    }
    ctx->pc = 0x188670u;
    // 0x188670: 0xa3809194  sb          $zero, -0x6E6C($gp)
    ctx->pc = 0x188670u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939028), (uint8_t)GPR_U32(ctx, 0));
    // 0x188674: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x188674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x188678: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x188678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x18867c: 0x24a55258  addiu       $a1, $a1, 0x5258
    ctx->pc = 0x18867cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21080));
    // 0x188680: 0xc05621c  jal         func_158870
    ctx->pc = 0x188680u;
    SET_GPR_U32(ctx, 31, 0x188688u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x188680u, 0x188688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188688u;
label_188688:
    // 0x188688: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x188688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18868c: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x18868Cu;
    {
        const bool branch_taken_0x18868c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18868c) {
            ctx->pc = 0x1886BCu;
            goto label_1886bc;
        }
    }
    ctx->pc = 0x188694u;
    // 0x188694: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x188694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x188698: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x188698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18869c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18869cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1886a0: 0xc08c510  jal         func_231440
    ctx->pc = 0x1886A0u;
    SET_GPR_U32(ctx, 31, 0x1886A8u);
    ctx->pc = 0x231440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231440u, 0x1886A0u, 0x1886A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1886A8u;
label_1886a8:
    // 0x1886a8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1886a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x1886ac: 0x2484be40  addiu       $a0, $a0, -0x41C0
    ctx->pc = 0x1886acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950464));
    // 0x1886b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1886b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1886b4: 0xc059ff0  jal         func_167FC0
    ctx->pc = 0x1886B4u;
    SET_GPR_U32(ctx, 31, 0x1886BCu);
    ctx->pc = 0x167FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167FC0u, 0x1886B4u, 0x1886BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1886BCu;
label_1886bc:
    // 0x1886bc: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1886bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1886c0: 0x27859198  addiu       $a1, $gp, -0x6E68
    ctx->pc = 0x1886c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939032));
    // 0x1886c4: 0xc05621c  jal         func_158870
    ctx->pc = 0x1886C4u;
    SET_GPR_U32(ctx, 31, 0x1886CCu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1886C4u, 0x1886CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1886CCu;
label_1886cc:
    // 0x1886cc: 0xaf82bae0  sw          $v0, -0x4520($gp)
    ctx->pc = 0x1886ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949600), GPR_U32(ctx, 2));
    // 0x1886d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1886d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1886d4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1886D4u;
    {
        const bool branch_taken_0x1886d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1886d4) {
            ctx->pc = 0x188818u;
            goto label_188818;
        }
    }
    ctx->pc = 0x1886DCu;
label_1886dc:
    // 0x1886dc: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x1886dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1886e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1886e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1886e4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1886e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1886e8: 0x24a55268  addiu       $a1, $a1, 0x5268
    ctx->pc = 0x1886e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21096));
    // 0x1886ec: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1886ECu;
    SET_GPR_U32(ctx, 31, 0x1886F4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1886ECu, 0x1886F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1886F4u;
label_1886f4:
    // 0x1886f4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1886f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1886f8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1886f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1886fc: 0xc05621c  jal         func_158870
    ctx->pc = 0x1886FCu;
    SET_GPR_U32(ctx, 31, 0x188704u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1886FCu, 0x188704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188704u;
label_188704:
    // 0x188704: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x188704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188708: 0x12200042  beqz        $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x188708u;
    {
        const bool branch_taken_0x188708 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x188708) {
            ctx->pc = 0x188814u;
            goto label_188814;
        }
    }
    ctx->pc = 0x188710u;
    // 0x188710: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x188710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188714: 0x16020018  bne         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x188714u;
    {
        const bool branch_taken_0x188714 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x188714) {
            ctx->pc = 0x188778u;
            goto label_188778;
        }
    }
    ctx->pc = 0x18871Cu;
    // 0x18871c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x18871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x188720: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x188720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x188724: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x188724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x188728: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x188728u;
    {
        const bool branch_taken_0x188728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188728) {
            ctx->pc = 0x188778u;
            goto label_188778;
        }
    }
    ctx->pc = 0x188730u;
    // 0x188730: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x188730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x188734: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x188734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x188738: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x188738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18873c: 0xc78c81b8  lwc1        $f12, -0x7E48($gp)
    ctx->pc = 0x18873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188740: 0xc78d81b8  lwc1        $f13, -0x7E48($gp)
    ctx->pc = 0x188740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x188744: 0xc78e81b8  lwc1        $f14, -0x7E48($gp)
    ctx->pc = 0x188744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x188748: 0xc78f82d8  lwc1        $f15, -0x7D28($gp)
    ctx->pc = 0x188748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x18874c: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x18874Cu;
    SET_GPR_U32(ctx, 31, 0x188754u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x18874Cu, 0x188754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188754u;
label_188754:
    // 0x188754: 0x8f83bae4  lw          $v1, -0x451C($gp)
    ctx->pc = 0x188754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x188758: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x188758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18875c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x18875Cu;
    {
        const bool branch_taken_0x18875c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18875c) {
            ctx->pc = 0x1887B8u;
            goto label_1887b8;
        }
    }
    ctx->pc = 0x188764u;
    // 0x188764: 0xaf80bae4  sw          $zero, -0x451C($gp)
    ctx->pc = 0x188764u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949604), GPR_U32(ctx, 0));
    // 0x188768: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x188768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18876c: 0xaf829190  sw          $v0, -0x6E70($gp)
    ctx->pc = 0x18876cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939024), GPR_U32(ctx, 2));
    // 0x188770: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x188770u;
    {
        const bool branch_taken_0x188770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188770) {
            ctx->pc = 0x1887B8u;
            goto label_1887b8;
        }
    }
    ctx->pc = 0x188778u;
label_188778:
    // 0x188778: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x188778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18877c: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18877Cu;
    {
        const bool branch_taken_0x18877c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18877c) {
            ctx->pc = 0x1887B8u;
            goto label_1887b8;
        }
    }
    ctx->pc = 0x188784u;
    // 0x188784: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x188784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x188788: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x188788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18878c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18878cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188790: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x188790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x188794: 0xc44cbe40  lwc1        $f12, -0x41C0($v0)
    ctx->pc = 0x188794u;
    { uint32_t bits = FAST_READ32(0x60BE40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188798: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x188798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x18879c: 0xc44dbe44  lwc1        $f13, -0x41BC($v0)
    ctx->pc = 0x18879cu;
    { uint32_t bits = FAST_READ32(0x60BE44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1887a0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1887a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1887a4: 0xc44ebe48  lwc1        $f14, -0x41B8($v0)
    ctx->pc = 0x1887a4u;
    { uint32_t bits = FAST_READ32(0x60BE48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1887a8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1887a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1887ac: 0xc44fbe4c  lwc1        $f15, -0x41B4($v0)
    ctx->pc = 0x1887acu;
    { uint32_t bits = FAST_READ32(0x60BE4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1887b0: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x1887B0u;
    SET_GPR_U32(ctx, 31, 0x1887B8u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x1887B0u, 0x1887B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1887B8u;
label_1887b8:
    // 0x1887b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1887b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1887bc: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1887BCu;
    {
        const bool branch_taken_0x1887bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1887bc) {
            ctx->pc = 0x1887D8u;
            goto label_1887d8;
        }
    }
    ctx->pc = 0x1887C4u;
    // 0x1887c4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1887c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1887c8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1887c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1887cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1887ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1887d0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1887D0u;
    {
        const bool branch_taken_0x1887d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1887d0) {
            ctx->pc = 0x188814u;
            goto label_188814;
        }
    }
    ctx->pc = 0x1887D8u;
label_1887d8:
    // 0x1887d8: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x1887d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1887dc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1887dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1887e0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1887e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1887e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1887e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1887e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1887e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1887ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1887ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1887f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1887f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1887f4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1887f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1887f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1887f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1887fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188800: 0x27a700dc  addiu       $a3, $sp, 0xDC
    ctx->pc = 0x188800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x188804: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x188804u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188808: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x188808u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18880c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x18880Cu;
    SET_GPR_U32(ctx, 31, 0x188814u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18880Cu, 0x188814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188814u;
label_188814:
    // 0x188814: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x188814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_188818:
    // 0x188818: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x188818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18881c: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x18881Cu;
    {
        const bool branch_taken_0x18881c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18881c) {
            ctx->pc = 0x1886DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1886dc;
        }
    }
    ctx->pc = 0x188824u;
    // 0x188824: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x188824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x188828: 0xc062314  jal         func_188C50
    ctx->pc = 0x188828u;
    SET_GPR_U32(ctx, 31, 0x188830u);
    ctx->pc = 0x188C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188C50u, 0x188828u, 0x188830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188830u;
label_188830:
    // 0x188830: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x188830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188834: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x188834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188838: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x188838u;
    SET_GPR_U32(ctx, 31, 0x188840u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x188838u, 0x188840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188840u;
label_188840:
    // 0x188840: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x188840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x188844: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x188844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188848: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x188848u;
    SET_GPR_U32(ctx, 31, 0x188850u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x188848u, 0x188850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188850u;
label_188850:
    // 0x188850: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x188850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x188854: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x188854u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x188858: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x188858u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18885c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18885cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188860: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x188860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188864: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x188864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18886c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18886cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188874: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x188874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x188878: 0x3e00008  jr          $ra
    ctx->pc = 0x188878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188880u;
}
