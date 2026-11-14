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

// Function: sub_002E5510
// Address: 0x2e5510 - 0x2e5720
void sub_002E5510_0x2e5510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5510_0x2e5510");
#endif

    switch (ctx->pc) {
        case 0x2e5538u: goto label_2e5538;
        case 0x2e5544u: goto label_2e5544;
        case 0x2e5584u: goto label_2e5584;
        case 0x2e5594u: goto label_2e5594;
        case 0x2e55b8u: goto label_2e55b8;
        case 0x2e55d8u: goto label_2e55d8;
        case 0x2e55e8u: goto label_2e55e8;
        case 0x2e5600u: goto label_2e5600;
        case 0x2e562cu: goto label_2e562c;
        case 0x2e5654u: goto label_2e5654;
        case 0x2e5664u: goto label_2e5664;
        case 0x2e5694u: goto label_2e5694;
        case 0x2e56a4u: goto label_2e56a4;
        case 0x2e56acu: goto label_2e56ac;
        case 0x2e56b8u: goto label_2e56b8;
        case 0x2e56d0u: goto label_2e56d0;
        case 0x2e56e4u: goto label_2e56e4;
        case 0x2e56fcu: goto label_2e56fc;
        default: break;
    }

    ctx->pc = 0x2e5510u;

    // 0x2e5510: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e5510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e5514: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e5514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e5518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e5518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e551c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e551cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e5520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e5520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e5524: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2e5524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2e5528: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e5528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e552c: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x2e552cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x2e5530: 0xc041010  jal         func_104040
    ctx->pc = 0x2E5530u;
    SET_GPR_U32(ctx, 31, 0x2E5538u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x2E5530u, 0x2E5538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5538u;
label_2e5538:
    // 0x2e5538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e553c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2E553Cu;
    {
        const bool branch_taken_0x2e553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e553c) {
            ctx->pc = 0x2E56D4u;
            goto label_2e56d4;
        }
    }
    ctx->pc = 0x2E5544u;
label_2e5544:
    // 0x2e5544: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e5544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2e5548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e554c: 0x0  nop
    ctx->pc = 0x2e554cu;
    // NOP
    // 0x2e5550: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2e5550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2e5554: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e5554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e5558: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2e5558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e555c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e555cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5560: 0x0  nop
    ctx->pc = 0x2e5560u;
    // NOP
    // 0x2e5564: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e5564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5568: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2E5568u;
    {
        const bool branch_taken_0x2e5568 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5568) {
            ctx->pc = 0x2E559Cu;
            goto label_2e559c;
        }
    }
    ctx->pc = 0x2E5570u;
    // 0x2e5570: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e5570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e5574: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e5574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e5578: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x2e5578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2e557c: 0xc0b7628  jal         func_2DD8A0
    ctx->pc = 0x2E557Cu;
    SET_GPR_U32(ctx, 31, 0x2E5584u);
    ctx->pc = 0x2DD8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD8A0u, 0x2E557Cu, 0x2E5584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5584u;
label_2e5584:
    // 0x2e5584: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e5584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e5588: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2e5588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e558c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2E558Cu;
    SET_GPR_U32(ctx, 31, 0x2E5594u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2E558Cu, 0x2E5594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5594u;
label_2e5594:
    // 0x2e5594: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E5594u;
    {
        const bool branch_taken_0x2e5594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5594) {
            ctx->pc = 0x2E55E8u;
            goto label_2e55e8;
        }
    }
    ctx->pc = 0x2E559Cu;
label_2e559c:
    // 0x2e559c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e55a0: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x2e55a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2e55a4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2e55a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e55a8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2e55a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e55ac: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x2e55acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2e55b0: 0xc0b76bc  jal         func_2DDAF0
    ctx->pc = 0x2E55B0u;
    SET_GPR_U32(ctx, 31, 0x2E55B8u);
    ctx->pc = 0x2DDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDAF0u, 0x2E55B0u, 0x2E55B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E55B8u;
label_2e55b8:
    // 0x2e55b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e55b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e55bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E55BCu;
    {
        const bool branch_taken_0x2e55bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e55bc) {
            ctx->pc = 0x2E55E8u;
            goto label_2e55e8;
        }
    }
    ctx->pc = 0x2E55C4u;
    // 0x2e55c4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e55c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e55c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e55cc: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x2e55ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2e55d0: 0xc0b754c  jal         func_2DD530
    ctx->pc = 0x2E55D0u;
    SET_GPR_U32(ctx, 31, 0x2E55D8u);
    ctx->pc = 0x2DD530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD530u, 0x2E55D0u, 0x2E55D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E55D8u;
label_2e55d8:
    // 0x2e55d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e55d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e55dc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e55dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e55e0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2E55E0u;
    SET_GPR_U32(ctx, 31, 0x2E55E8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2E55E0u, 0x2E55E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E55E8u;
label_2e55e8:
    // 0x2e55e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e55e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e55ec: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2e55ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e55f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e55f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e55f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e55f8: 0xc043448  jal         func_10D120
    ctx->pc = 0x2E55F8u;
    SET_GPR_U32(ctx, 31, 0x2E5600u);
    ctx->pc = 0x10D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D120u, 0x2E55F8u, 0x2E5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5600u;
label_2e5600:
    // 0x2e5600: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e5600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5604: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e5604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2e5608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e560c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2e560cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5610: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2e5610u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5614: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2E5614u;
    {
        const bool branch_taken_0x2e5614 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5614) {
            ctx->pc = 0x2E5654u;
            goto label_2e5654;
        }
    }
    ctx->pc = 0x2E561Cu;
    // 0x2e561c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e561cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5620: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2e5620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e5624: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2E5624u;
    SET_GPR_U32(ctx, 31, 0x2E562Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2E5624u, 0x2E562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E562Cu;
label_2e562c:
    // 0x2e562c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e562cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5630: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5630u;
    {
        const bool branch_taken_0x2e5630 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5630) {
            ctx->pc = 0x2E5654u;
            goto label_2e5654;
        }
    }
    ctx->pc = 0x2E5638u;
    // 0x2e5638: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e5638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e563c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e563cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e5640: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e5640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5644: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x2e5644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5648: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e5648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e564c: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x2E564Cu;
    SET_GPR_U32(ctx, 31, 0x2E5654u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2E564Cu, 0x2E5654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5654u;
label_2e5654:
    // 0x2e5654: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2e5654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e5658: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e5658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e565c: 0xc0b94ac  jal         func_2E52B0
    ctx->pc = 0x2E565Cu;
    SET_GPR_U32(ctx, 31, 0x2E5664u);
    ctx->pc = 0x2E52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E52B0u, 0x2E565Cu, 0x2E5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5664u;
label_2e5664:
    // 0x2e5664: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e5664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e5668: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2e5668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e566c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e566cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5670: 0x0  nop
    ctx->pc = 0x2e5670u;
    // NOP
    // 0x2e5674: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e5674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5678: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x2E5678u;
    {
        const bool branch_taken_0x2e5678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5678) {
            ctx->pc = 0x2E56D0u;
            goto label_2e56d0;
        }
    }
    ctx->pc = 0x2E5680u;
    // 0x2e5680: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e5680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e5684: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e5684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e5688: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x2e5688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2e568c: 0xc0b754c  jal         func_2DD530
    ctx->pc = 0x2E568Cu;
    SET_GPR_U32(ctx, 31, 0x2E5694u);
    ctx->pc = 0x2DD530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD530u, 0x2E568Cu, 0x2E5694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5694u;
label_2e5694:
    // 0x2e5694: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e5694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e5698: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2e5698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e569c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2E569Cu;
    SET_GPR_U32(ctx, 31, 0x2E56A4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2E569Cu, 0x2E56A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E56A4u;
label_2e56a4:
    // 0x2e56a4: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2E56A4u;
    SET_GPR_U32(ctx, 31, 0x2E56ACu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2E56A4u, 0x2E56ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E56ACu;
label_2e56ac:
    // 0x2e56ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e56acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56b0: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2E56B0u;
    SET_GPR_U32(ctx, 31, 0x2E56B8u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2E56B0u, 0x2E56B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E56B8u;
label_2e56b8:
    // 0x2e56b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e56b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e56bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56c0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2e56c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e56c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e56c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56c8: 0xc0b43b8  jal         func_2D0EE0
    ctx->pc = 0x2E56C8u;
    SET_GPR_U32(ctx, 31, 0x2E56D0u);
    ctx->pc = 0x2D0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EE0u, 0x2E56C8u, 0x2E56D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E56D0u;
label_2e56d0:
    // 0x2e56d0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2e56d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2e56d4:
    // 0x2e56d4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e56d8: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x2e56d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x2e56dc: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x2E56DCu;
    SET_GPR_U32(ctx, 31, 0x2E56E4u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x2E56DCu, 0x2E56E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E56E4u;
label_2e56e4:
    // 0x2e56e4: 0x1602ff97  bne         $s0, $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x2E56E4u;
    {
        const bool branch_taken_0x2e56e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e56e4) {
            ctx->pc = 0x2E5544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5544;
        }
    }
    ctx->pc = 0x2E56ECu;
    // 0x2e56ec: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e56ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e56f0: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x2e56f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x2e56f4: 0xc053cd4  jal         func_14F350
    ctx->pc = 0x2E56F4u;
    SET_GPR_U32(ctx, 31, 0x2E56FCu);
    ctx->pc = 0x14F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F350u, 0x2E56F4u, 0x2E56FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E56FCu;
label_2e56fc:
    // 0x2e56fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e56fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e5700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e570c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2e570cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e5710: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5718u;
    // 0x2e5718: 0x0  nop
    ctx->pc = 0x2e5718u;
    // NOP
    // 0x2e571c: 0x0  nop
    ctx->pc = 0x2e571cu;
    // NOP
    ctx->pc = 0x2e5720u;
}
