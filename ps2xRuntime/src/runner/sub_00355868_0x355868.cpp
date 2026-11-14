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

// Function: sub_00355868
// Address: 0x355868 - 0x355a08
void sub_00355868_0x355868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355868_0x355868");
#endif

    switch (ctx->pc) {
        case 0x3558a4u: goto label_3558a4;
        case 0x3558d4u: goto label_3558d4;
        case 0x3558e4u: goto label_3558e4;
        case 0x355918u: goto label_355918;
        case 0x355958u: goto label_355958;
        case 0x35599cu: goto label_35599c;
        case 0x3559a4u: goto label_3559a4;
        case 0x3559b4u: goto label_3559b4;
        case 0x3559d0u: goto label_3559d0;
        default: break;
    }

    ctx->pc = 0x355868u;

    // 0x355868: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x355868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x35586c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35586cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355870: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x355870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x355874: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x355874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x355878: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x355878u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35587c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x35587cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355880: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x355880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x355884: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x355884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x355888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x355888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35588c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x35588cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x355890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x355890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355894: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x355894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x355898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x355898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35589c: 0xc0e2dbc  jal         func_38B6F0
    ctx->pc = 0x35589Cu;
    SET_GPR_U32(ctx, 31, 0x3558A4u);
    ctx->pc = 0x3558A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35589Cu;
    // 0x3558a0: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x35589Cu, 0x3558A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3558A4u;
label_3558a4:
    // 0x3558a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3558a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3558a8: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
    ctx->pc = 0x3558A8u;
    {
        const bool branch_taken_0x3558a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3558ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3558A8u;
        // 0x3558ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3558a8) {
            ctx->pc = 0x3559DCu;
            goto label_3559dc;
        }
    }
    ctx->pc = 0x3558B0u;
    // 0x3558b0: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x3558b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x3558b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3558b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3558b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3558b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3558bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3558bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3558c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3558c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3558c4: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x3558c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3558c8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3558c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3558cc: 0xc0e2d08  jal         func_38B420
    ctx->pc = 0x3558CCu;
    SET_GPR_U32(ctx, 31, 0x3558D4u);
    ctx->pc = 0x3558D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3558CCu;
    // 0x3558d0: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x3558CCu, 0x3558D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3558D4u;
label_3558d4:
    // 0x3558d4: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3558D4u;
    {
        const bool branch_taken_0x3558d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3558D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3558D4u;
        // 0x3558d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3558d4) {
            ctx->pc = 0x3559DCu;
            goto label_3559dc;
        }
    }
    ctx->pc = 0x3558DCu;
    // 0x3558dc: 0xc0e3992  jal         func_38E648
    ctx->pc = 0x3558DCu;
    SET_GPR_U32(ctx, 31, 0x3558E4u);
    ctx->pc = 0x38E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E648u, 0x3558DCu, 0x3558E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3558E4u;
label_3558e4:
    // 0x3558e4: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x3558e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3558e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3558e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3558ec: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x3558ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3558f0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3558f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3558f4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x3558f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3558f8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3558f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3558fc: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3558fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x355900: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x355900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x355904: 0xb2420013  sdl         $v0, 0x13($s2)
    ctx->pc = 0x355904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355908: 0xb642000c  sdr         $v0, 0xC($s2)
    ctx->pc = 0x355908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35590c: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x35590cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x355910: 0xc0e410c  jal         func_390430
    ctx->pc = 0x355910u;
    SET_GPR_U32(ctx, 31, 0x355918u);
    ctx->pc = 0x355914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355910u;
    // 0x355914: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390430u, 0x355910u, 0x355918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355918u;
label_355918:
    // 0x355918: 0x8f85bd50  lw          $a1, -0x42B0($gp)
    ctx->pc = 0x355918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
    // 0x35591c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x35591cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x355920: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x355920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355924: 0x2473e880  addiu       $s3, $v1, -0x1780
    ctx->pc = 0x355924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x355928: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x355928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x35592c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x35592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x355930: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x355930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x355934: 0x90a6002d  lbu         $a2, 0x2D($a1)
    ctx->pc = 0x355934u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
    // 0x355938: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x355938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x35593c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35593cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355940: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x355940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x355944: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x355944u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x355948: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x355948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x35594c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x35594cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x355950: 0xc0e3fee  jal         func_38FFB8
    ctx->pc = 0x355950u;
    SET_GPR_U32(ctx, 31, 0x355958u);
    ctx->pc = 0x355954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355950u;
    // 0x355954: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFB8u, 0x355950u, 0x355958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355958u;
label_355958:
    // 0x355958: 0x8f83a85c  lw          $v1, -0x57A4($gp)
    ctx->pc = 0x355958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944860)));
    // 0x35595c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x35595cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x355960: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x355960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x355964: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x355964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x355968: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x355968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x35596c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35596cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355970: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x355970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x355974: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x355974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x355978: 0xacb50004  sw          $s5, 0x4($a1)
    ctx->pc = 0x355978u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 21));
    // 0x35597c: 0xacb20008  sw          $s2, 0x8($a1)
    ctx->pc = 0x35597cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 18));
    // 0x355980: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x355980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
    // 0x355984: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x355984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x355988: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x355988u;
    {
        const bool branch_taken_0x355988 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355988u;
        // 0x35598c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355988) {
            ctx->pc = 0x3559D8u;
            goto label_3559d8;
        }
    }
    ctx->pc = 0x355990u;
    // 0x355990: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x355990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355994: 0xc0e3b14  jal         func_38EC50
    ctx->pc = 0x355994u;
    SET_GPR_U32(ctx, 31, 0x35599Cu);
    ctx->pc = 0x355998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355994u;
    // 0x355998: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EC50u, 0x355994u, 0x35599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35599Cu;
label_35599c:
    // 0x35599c: 0xc0e39c0  jal         func_38E700
    ctx->pc = 0x35599Cu;
    SET_GPR_U32(ctx, 31, 0x3559A4u);
    ctx->pc = 0x3559A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35599Cu;
    // 0x3559a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x35599Cu, 0x3559A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3559A4u;
label_3559a4:
    // 0x3559a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3559a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3559a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3559a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3559ac: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x3559ACu;
    SET_GPR_U32(ctx, 31, 0x3559B4u);
    ctx->pc = 0x3559B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3559ACu;
    // 0x3559b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x3559ACu, 0x3559B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3559B4u;
label_3559b4:
    // 0x3559b4: 0x8f83a85c  lw          $v1, -0x57A4($gp)
    ctx->pc = 0x3559b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944860)));
    // 0x3559b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3559b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3559bc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3559bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3559c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3559c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3559c4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3559c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3559c8: 0xc0e3414  jal         func_38D050
    ctx->pc = 0x3559C8u;
    SET_GPR_U32(ctx, 31, 0x3559D0u);
    ctx->pc = 0x3559CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3559C8u;
    // 0x3559cc: 0xae85006c  sw          $a1, 0x6C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x3559C8u, 0x3559D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3559D0u;
label_3559d0:
    // 0x3559d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3559D0u;
    {
        const bool branch_taken_0x3559d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3559D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3559D0u;
        // 0x3559d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3559d0) {
            ctx->pc = 0x3559DCu;
            goto label_3559dc;
        }
    }
    ctx->pc = 0x3559D8u;
label_3559d8:
    // 0x3559d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3559d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3559dc:
    // 0x3559dc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3559dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3559e0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3559e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3559e4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3559e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3559e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3559e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3559ec: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3559ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3559f0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3559f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3559f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3559f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3559f8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3559f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3559fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3559FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3559FCu;
        // 0x355a00: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3559FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355A04u;
    // 0x355a04: 0x0  nop
    ctx->pc = 0x355a04u;
    // NOP
    ctx->pc = 0x355a08u;
}
