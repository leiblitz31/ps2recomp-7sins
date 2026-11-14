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

// Function: sub_003123C8
// Address: 0x3123c8 - 0x312568
void sub_003123C8_0x3123c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003123C8_0x3123c8");
#endif

    switch (ctx->pc) {
        case 0x312428u: goto label_312428;
        case 0x312448u: goto label_312448;
        case 0x3124a4u: goto label_3124a4;
        case 0x3124acu: goto label_3124ac;
        case 0x3124c8u: goto label_3124c8;
        case 0x312500u: goto label_312500;
        case 0x312538u: goto label_312538;
        default: break;
    }

    ctx->pc = 0x3123c8u;

    // 0x3123c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3123c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3123cc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3123ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3123d0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3123d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3123d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3123d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3123d8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3123d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3123dc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3123dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3123e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3123e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3123e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3123e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3123e8: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x3123e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x3123ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3123ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3123f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3123f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3123f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3123f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3123f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3123F8u;
    {
        const bool branch_taken_0x3123f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3123FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3123F8u;
        // 0x3123fc: 0x24510030  addiu       $s1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3123f8) {
            ctx->pc = 0x31240Cu;
            goto label_31240c;
        }
    }
    ctx->pc = 0x312400u;
    // 0x312400: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x312400u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x312404: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x312404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x312408: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x312408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_31240c:
    // 0x31240c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x31240cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x312410: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x312410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312414: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x312414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x312418: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x312418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31241c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x31241cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x312420: 0xc103404  jal         func_40D010
    ctx->pc = 0x312420u;
    SET_GPR_U32(ctx, 31, 0x312428u);
    ctx->pc = 0x312424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312420u;
    // 0x312424: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x312420u, 0x312428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312428u;
label_312428:
    // 0x312428: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x312428u;
    {
        const bool branch_taken_0x312428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312428u;
        // 0x31242c: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312428) {
            ctx->pc = 0x3124ACu;
            goto label_3124ac;
        }
    }
    ctx->pc = 0x312430u;
    // 0x312430: 0x2626fff4  addiu       $a2, $s1, -0xC
    ctx->pc = 0x312430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    // 0x312434: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x312434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312438: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x312438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31243c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x31243cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x312440: 0xc103404  jal         func_40D010
    ctx->pc = 0x312440u;
    SET_GPR_U32(ctx, 31, 0x312448u);
    ctx->pc = 0x312444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312440u;
    // 0x312444: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x312440u, 0x312448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312448u;
label_312448:
    // 0x312448: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x312448u;
    {
        const bool branch_taken_0x312448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312448u;
        // 0x31244c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312448) {
            ctx->pc = 0x3124ACu;
            goto label_3124ac;
        }
    }
    ctx->pc = 0x312450u;
    // 0x312450: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x312450u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x312454: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x312454u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x312458: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x312458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31245c: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x31245cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x312460: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x312460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x312464: 0x6a080017  ldl         $t0, 0x17($s0)
    ctx->pc = 0x312464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x312468: 0x6e080010  ldr         $t0, 0x10($s0)
    ctx->pc = 0x312468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x31246c: 0x8e090018  lw          $t1, 0x18($s0)
    ctx->pc = 0x31246cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x312470: 0xb3a8000b  sdl         $t0, 0xB($sp)
    ctx->pc = 0x312470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x312474: 0xb7a80004  sdr         $t0, 0x4($sp)
    ctx->pc = 0x312474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x312478: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x312478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x31247c: 0x6a08000b  ldl         $t0, 0xB($s0)
    ctx->pc = 0x31247cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x312480: 0x6e080004  ldr         $t0, 0x4($s0)
    ctx->pc = 0x312480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x312484: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x312484u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x312488: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x312488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31248c: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x31248cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x312490: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x312490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x312494: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x312494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x312498: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x312498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x31249c: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x31249Cu;
    SET_GPR_U32(ctx, 31, 0x3124A4u);
    ctx->pc = 0x3124A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31249Cu;
    // 0x3124a0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x31249Cu, 0x3124A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124A4u;
label_3124a4:
    // 0x3124a4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3124A4u;
    {
        const bool branch_taken_0x3124a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3124a4) {
            ctx->pc = 0x3124A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3124A4u;
            // 0x3124a8: 0x9602001e  lhu         $v0, 0x1E($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3124B4u;
            goto label_3124b4;
        }
    }
    ctx->pc = 0x3124ACu;
label_3124ac:
    // 0x3124ac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3124ACu;
    {
        const bool branch_taken_0x3124ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3124B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124ACu;
        // 0x3124b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124ac) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3124B4u;
label_3124b4:
    // 0x3124b4: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3124B4u;
    {
        const bool branch_taken_0x3124b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3124b4) {
            ctx->pc = 0x3124B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3124B4u;
            // 0x3124b8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31251Cu;
            goto label_31251c;
        }
    }
    ctx->pc = 0x3124BCu;
    // 0x3124bc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3124BCu;
    {
        const bool branch_taken_0x3124bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3124C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124BCu;
        // 0x3124c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124bc) {
            ctx->pc = 0x312518u;
            goto label_312518;
        }
    }
    ctx->pc = 0x3124C4u;
    // 0x3124c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3124c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3124c8:
    // 0x3124c8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3124c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3124cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3124ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3124d0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3124d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3124d4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3124d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3124d8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x3124d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3124dc: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x3124dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3124e0: 0x6847000f  ldl         $a3, 0xF($v0)
    ctx->pc = 0x3124e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3124e4: 0x6c470008  ldr         $a3, 0x8($v0)
    ctx->pc = 0x3124e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3124e8: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x3124e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3124ec: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x3124ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3124f0: 0xb3a7003f  sdl         $a3, 0x3F($sp)
    ctx->pc = 0x3124f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3124f4: 0xb7a70038  sdr         $a3, 0x38($sp)
    ctx->pc = 0x3124f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3124f8: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3124F8u;
    SET_GPR_U32(ctx, 31, 0x312500u);
    ctx->pc = 0x3124FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3124F8u;
    // 0x3124fc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3124F8u, 0x312500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312500u;
label_312500:
    // 0x312500: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x312500u;
    {
        const bool branch_taken_0x312500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312500u;
        // 0x312504: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312500) {
            ctx->pc = 0x3124ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3124ac;
        }
    }
    ctx->pc = 0x312508u;
    // 0x312508: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x312508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x31250c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x31250cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x312510: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x312510u;
    {
        const bool branch_taken_0x312510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312510u;
        // 0x312514: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312510) {
            ctx->pc = 0x3124C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3124c8;
        }
    }
    ctx->pc = 0x312518u;
label_312518:
    // 0x312518: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x312518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31251c:
    // 0x31251c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31251cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x312520: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x312520u;
    {
        const bool branch_taken_0x312520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312520u;
        // 0x312524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312520) {
            ctx->pc = 0x312544u;
            goto label_312544;
        }
    }
    ctx->pc = 0x312528u;
    // 0x312528: 0x9606001c  lhu         $a2, 0x1C($s0)
    ctx->pc = 0x312528u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x31252c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x31252cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x312530: 0xc10344a  jal         func_40D128
    ctx->pc = 0x312530u;
    SET_GPR_U32(ctx, 31, 0x312538u);
    ctx->pc = 0x312534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312530u;
    // 0x312534: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D128u, 0x312530u, 0x312538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312538u;
label_312538:
    // 0x312538: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x312538u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31253c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31253Cu;
    {
        const bool branch_taken_0x31253c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x312540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31253Cu;
        // 0x312540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31253c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x312544u;
label_312544:
    // 0x312544: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x312544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_312548:
    // 0x312548: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x312548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31254c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x31254cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x312550: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x312550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x312554: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x312554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x312558: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x312558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31255c: 0x3e00008  jr          $ra
    ctx->pc = 0x31255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31255Cu;
        // 0x312560: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31255Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312564u;
    // 0x312564: 0x0  nop
    ctx->pc = 0x312564u;
    // NOP
    ctx->pc = 0x312568u;
}
