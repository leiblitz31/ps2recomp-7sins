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

// Function: sub_00357580
// Address: 0x357580 - 0x357720
void sub_00357580_0x357580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357580_0x357580");
#endif

    switch (ctx->pc) {
        case 0x3575bcu: goto label_3575bc;
        case 0x3575ecu: goto label_3575ec;
        case 0x3575fcu: goto label_3575fc;
        case 0x357630u: goto label_357630;
        case 0x357670u: goto label_357670;
        case 0x3576b8u: goto label_3576b8;
        case 0x3576c0u: goto label_3576c0;
        case 0x3576d0u: goto label_3576d0;
        case 0x3576ecu: goto label_3576ec;
        default: break;
    }

    ctx->pc = 0x357580u;

    // 0x357580: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x357580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x357584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357588: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x357588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x35758c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x35758cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x357590: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x357590u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357594: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x357594u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357598: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x357598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x35759c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x35759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3575a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3575a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3575a4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3575a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3575a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3575a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3575ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3575acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3575b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3575b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3575b4: 0xc0e2dbc  jal         func_38B6F0
    ctx->pc = 0x3575B4u;
    SET_GPR_U32(ctx, 31, 0x3575BCu);
    ctx->pc = 0x3575B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3575B4u;
    // 0x3575b8: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x3575B4u, 0x3575BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575BCu;
label_3575bc:
    // 0x3575bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3575bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3575c0: 0x1220004d  beqz        $s1, . + 4 + (0x4D << 2)
    ctx->pc = 0x3575C0u;
    {
        const bool branch_taken_0x3575c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3575C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575C0u;
        // 0x3575c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3575c0) {
            ctx->pc = 0x3576F8u;
            goto label_3576f8;
        }
    }
    ctx->pc = 0x3575C8u;
    // 0x3575c8: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x3575c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x3575cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3575ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3575d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3575d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3575d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3575d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3575d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3575d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3575dc: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x3575dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3575e0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3575e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3575e4: 0xc0e2d08  jal         func_38B420
    ctx->pc = 0x3575E4u;
    SET_GPR_U32(ctx, 31, 0x3575ECu);
    ctx->pc = 0x3575E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3575E4u;
    // 0x3575e8: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x3575E4u, 0x3575ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575ECu;
label_3575ec:
    // 0x3575ec: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3575ECu;
    {
        const bool branch_taken_0x3575ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3575F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575ECu;
        // 0x3575f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3575ec) {
            ctx->pc = 0x3576F8u;
            goto label_3576f8;
        }
    }
    ctx->pc = 0x3575F4u;
    // 0x3575f4: 0xc0e3992  jal         func_38E648
    ctx->pc = 0x3575F4u;
    SET_GPR_U32(ctx, 31, 0x3575FCu);
    ctx->pc = 0x38E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E648u, 0x3575F4u, 0x3575FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575FCu;
label_3575fc:
    // 0x3575fc: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x3575fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357600: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x357600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357604: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x357604u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x357608: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x357608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35760c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x35760cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x357610: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x357610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x357614: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x357614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x357618: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x357618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35761c: 0xb2420013  sdl         $v0, 0x13($s2)
    ctx->pc = 0x35761cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357620: 0xb642000c  sdr         $v0, 0xC($s2)
    ctx->pc = 0x357620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357624: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x357624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x357628: 0xc0e410c  jal         func_390430
    ctx->pc = 0x357628u;
    SET_GPR_U32(ctx, 31, 0x357630u);
    ctx->pc = 0x35762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357628u;
    // 0x35762c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390430u, 0x357628u, 0x357630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357630u;
label_357630:
    // 0x357630: 0x8f85bd50  lw          $a1, -0x42B0($gp)
    ctx->pc = 0x357630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
    // 0x357634: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x357634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x357638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x357638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35763c: 0x2473e880  addiu       $s3, $v1, -0x1780
    ctx->pc = 0x35763cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x357640: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x357640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x357644: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x357644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x357648: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x357648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x35764c: 0x90a6002d  lbu         $a2, 0x2D($a1)
    ctx->pc = 0x35764cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
    // 0x357650: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x357650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x357654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x357654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357658: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x357658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x35765c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x35765cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x357660: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x357660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x357664: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x357664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x357668: 0xc0e3fee  jal         func_38FFB8
    ctx->pc = 0x357668u;
    SET_GPR_U32(ctx, 31, 0x357670u);
    ctx->pc = 0x35766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357668u;
    // 0x35766c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFB8u, 0x357668u, 0x357670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357670u;
label_357670:
    // 0x357670: 0x8f83a85c  lw          $v1, -0x57A4($gp)
    ctx->pc = 0x357670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944860)));
    // 0x357674: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x357674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x357678: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x357678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x35767c: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x35767cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x357680: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x357680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x357684: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x357684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x357688: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x357688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35768c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x35768cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x357690: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x357690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x357694: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x357694u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x357698: 0xacb20008  sw          $s2, 0x8($a1)
    ctx->pc = 0x357698u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 18));
    // 0x35769c: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x35769cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
    // 0x3576a0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3576a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3576a4: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3576A4u;
    {
        const bool branch_taken_0x3576a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3576A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3576A4u;
        // 0x3576a8: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3576a4) {
            ctx->pc = 0x3576F4u;
            goto label_3576f4;
        }
    }
    ctx->pc = 0x3576ACu;
    // 0x3576ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3576acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3576b0: 0xc0e3b14  jal         func_38EC50
    ctx->pc = 0x3576B0u;
    SET_GPR_U32(ctx, 31, 0x3576B8u);
    ctx->pc = 0x3576B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3576B0u;
    // 0x3576b4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EC50u, 0x3576B0u, 0x3576B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3576B8u;
label_3576b8:
    // 0x3576b8: 0xc0e39c0  jal         func_38E700
    ctx->pc = 0x3576B8u;
    SET_GPR_U32(ctx, 31, 0x3576C0u);
    ctx->pc = 0x3576BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3576B8u;
    // 0x3576bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x3576B8u, 0x3576C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3576C0u;
label_3576c0:
    // 0x3576c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3576c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3576c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3576c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3576c8: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x3576C8u;
    SET_GPR_U32(ctx, 31, 0x3576D0u);
    ctx->pc = 0x3576CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3576C8u;
    // 0x3576cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x3576C8u, 0x3576D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3576D0u;
label_3576d0:
    // 0x3576d0: 0x8f83a85c  lw          $v1, -0x57A4($gp)
    ctx->pc = 0x3576d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944860)));
    // 0x3576d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3576d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3576d8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3576d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3576dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3576dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3576e0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x3576e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3576e4: 0xc0e3414  jal         func_38D050
    ctx->pc = 0x3576E4u;
    SET_GPR_U32(ctx, 31, 0x3576ECu);
    ctx->pc = 0x3576E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3576E4u;
    // 0x3576e8: 0xaea5006c  sw          $a1, 0x6C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x3576E4u, 0x3576ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3576ECu;
label_3576ec:
    // 0x3576ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3576ECu;
    {
        const bool branch_taken_0x3576ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3576F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3576ECu;
        // 0x3576f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3576ec) {
            ctx->pc = 0x3576F8u;
            goto label_3576f8;
        }
    }
    ctx->pc = 0x3576F4u;
label_3576f4:
    // 0x3576f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3576f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3576f8:
    // 0x3576f8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3576f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3576fc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3576fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x357700: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x357700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x357704: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x357704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357708: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x357708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35770c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x35770cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357714: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x357714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x357718: 0x3e00008  jr          $ra
    ctx->pc = 0x357718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357718u;
        // 0x35771c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357720u;
}
