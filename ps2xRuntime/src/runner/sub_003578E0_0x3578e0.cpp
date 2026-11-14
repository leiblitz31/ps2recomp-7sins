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

// Function: sub_003578E0
// Address: 0x3578e0 - 0x357fa0
void sub_003578E0_0x3578e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003578E0_0x3578e0");
#endif

    switch (ctx->pc) {
        case 0x357974u: goto label_357974;
        case 0x357bf8u: goto label_357bf8;
        case 0x357c28u: goto label_357c28;
        case 0x357c44u: goto label_357c44;
        case 0x357c50u: goto label_357c50;
        case 0x357c5cu: goto label_357c5c;
        case 0x357f40u: goto label_357f40;
        case 0x357f50u: goto label_357f50;
        case 0x357f6cu: goto label_357f6c;
        default: break;
    }

    ctx->pc = 0x3578e0u;

    // 0x3578e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3578e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3578e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3578e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3578e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3578e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3578ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3578ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3578f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3578f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3578f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3578f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3578f8: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x3578f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3578fc: 0x8cc200e0  lw          $v0, 0xE0($a2)
    ctx->pc = 0x3578fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x357900: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x357900u;
    {
        const bool branch_taken_0x357900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x357904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357900u;
        // 0x357904: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357900) {
            ctx->pc = 0x357958u;
            goto label_357958;
        }
    }
    ctx->pc = 0x357908u;
    // 0x357908: 0x8cc400e4  lw          $a0, 0xE4($a2)
    ctx->pc = 0x357908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x35790c: 0x24c500ec  addiu       $a1, $a2, 0xEC
    ctx->pc = 0x35790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 236));
    // 0x357910: 0x8cc300e8  lw          $v1, 0xE8($a2)
    ctx->pc = 0x357910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 232)));
    // 0x357914: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x357914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357918: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x357918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35791c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35791cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x357920: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x357920u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x357924: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x357924u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x357928: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x357928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x35792c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35792cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x357930: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x357930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x357934: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x357934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x357938: 0x8cc300e4  lw          $v1, 0xE4($a2)
    ctx->pc = 0x357938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x35793c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35793cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x357940: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x357940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x357944: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x357944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x357948: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357948u;
    {
        const bool branch_taken_0x357948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357948) {
            ctx->pc = 0x357958u;
            goto label_357958;
        }
    }
    ctx->pc = 0x357950u;
    // 0x357950: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x357950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x357954: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x357954u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_357958:
    // 0x357958: 0x12200067  beqz        $s1, . + 4 + (0x67 << 2)
    ctx->pc = 0x357958u;
    {
        const bool branch_taken_0x357958 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357958u;
        // 0x35795c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357958) {
            ctx->pc = 0x357AF8u;
            goto label_357af8;
        }
    }
    ctx->pc = 0x357960u;
    // 0x357960: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x357960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x357964: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x357964u;
    {
        const bool branch_taken_0x357964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357964u;
        // 0x357968: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357964) {
            ctx->pc = 0x357978u;
            goto label_357978;
        }
    }
    ctx->pc = 0x35796Cu;
    // 0x35796c: 0xc0d4426  jal         func_351098
    ctx->pc = 0x35796Cu;
    SET_GPR_U32(ctx, 31, 0x357974u);
    ctx->pc = 0x357970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35796Cu;
    // 0x357970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351098u, 0x35796Cu, 0x357974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357974u;
label_357974:
    // 0x357974: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x357974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_357978:
    // 0x357978: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x357978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x35797c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x35797Cu;
    {
        const bool branch_taken_0x35797c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35797c) {
            ctx->pc = 0x357980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35797Cu;
            // 0x357980: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3579BCu;
            goto label_3579bc;
        }
    }
    ctx->pc = 0x357984u;
    // 0x357984: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x357984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x357988: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x357988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x35798c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35798Cu;
    {
        const bool branch_taken_0x35798c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35798Cu;
        // 0x357990: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35798c) {
            ctx->pc = 0x3579BCu;
            goto label_3579bc;
        }
    }
    ctx->pc = 0x357994u;
    // 0x357994: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x357994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x357998: 0x6a030097  ldl         $v1, 0x97($s0)
    ctx->pc = 0x357998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35799c: 0x6e030090  ldr         $v1, 0x90($s0)
    ctx->pc = 0x35799cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3579a0: 0x6a04009f  ldl         $a0, 0x9F($s0)
    ctx->pc = 0x3579a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3579a4: 0x6e040098  ldr         $a0, 0x98($s0)
    ctx->pc = 0x3579a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3579a8: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3579a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3579ac: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3579acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3579b0: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3579b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3579b4: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3579b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3579b8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3579b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_3579bc:
    // 0x3579bc: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x3579bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x3579c0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3579C0u;
    {
        const bool branch_taken_0x3579c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3579C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579C0u;
        // 0x3579c4: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3579c0) {
            ctx->pc = 0x357A20u;
            goto label_357a20;
        }
    }
    ctx->pc = 0x3579C8u;
    // 0x3579c8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x3579c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3579cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3579ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3579d0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3579D0u;
    {
        const bool branch_taken_0x3579d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3579D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579D0u;
        // 0x3579d4: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3579d0) {
            ctx->pc = 0x357A20u;
            goto label_357a20;
        }
    }
    ctx->pc = 0x3579D8u;
    // 0x3579d8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x3579d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3579dc: 0x6a030097  ldl         $v1, 0x97($s0)
    ctx->pc = 0x3579dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3579e0: 0x6e030090  ldr         $v1, 0x90($s0)
    ctx->pc = 0x3579e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3579e4: 0x6a04009f  ldl         $a0, 0x9F($s0)
    ctx->pc = 0x3579e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3579e8: 0x6e040098  ldr         $a0, 0x98($s0)
    ctx->pc = 0x3579e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3579ec: 0x6a0500a7  ldl         $a1, 0xA7($s0)
    ctx->pc = 0x3579ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3579f0: 0x6e0500a0  ldr         $a1, 0xA0($s0)
    ctx->pc = 0x3579f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3579f4: 0x6a0600af  ldl         $a2, 0xAF($s0)
    ctx->pc = 0x3579f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3579f8: 0x6e0600a8  ldr         $a2, 0xA8($s0)
    ctx->pc = 0x3579f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3579fc: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3579fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357a00: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x357a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357a04: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x357a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357a08: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x357a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357a0c: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x357a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357a10: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x357a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357a14: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x357a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357a18: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x357a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357a1c: 0x32222000  andi        $v0, $s1, 0x2000
    ctx->pc = 0x357a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
label_357a20:
    // 0x357a20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x357A20u;
    {
        const bool branch_taken_0x357a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A20u;
        // 0x357a24: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a20) {
            ctx->pc = 0x357A50u;
            goto label_357a50;
        }
    }
    ctx->pc = 0x357A28u;
    // 0x357a28: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x357a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x357a2c: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x357a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x357a30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x357a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357a34: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x357A34u;
    {
        const bool branch_taken_0x357a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x357A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A34u;
        // 0x357a38: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a34) {
            ctx->pc = 0x357A54u;
            goto label_357a54;
        }
    }
    ctx->pc = 0x357A3Cu;
    // 0x357a3c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x357a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x357a40: 0x8a03007f  lwl         $v1, 0x7F($s0)
    ctx->pc = 0x357a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x357a44: 0x9a03007c  lwr         $v1, 0x7C($s0)
    ctx->pc = 0x357a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x357a48: 0xa8430003  swl         $v1, 0x3($v0)
    ctx->pc = 0x357a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x357a4c: 0xb8430000  swr         $v1, 0x0($v0)
    ctx->pc = 0x357a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_357a50:
    // 0x357a50: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x357a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_357a54:
    // 0x357a54: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x357a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x357a58: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x357A58u;
    {
        const bool branch_taken_0x357a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357a58) {
            ctx->pc = 0x357A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357A58u;
            // 0x357a5c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357A98u;
            goto label_357a98;
        }
    }
    ctx->pc = 0x357A60u;
    // 0x357a60: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x357a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x357a64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x357a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x357a68: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x357A68u;
    {
        const bool branch_taken_0x357a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A68u;
        // 0x357a6c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a68) {
            ctx->pc = 0x357A98u;
            goto label_357a98;
        }
    }
    ctx->pc = 0x357A70u;
    // 0x357a70: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x357a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x357a74: 0x6a030087  ldl         $v1, 0x87($s0)
    ctx->pc = 0x357a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x357a78: 0x6e030080  ldr         $v1, 0x80($s0)
    ctx->pc = 0x357a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x357a7c: 0x6a04008f  ldl         $a0, 0x8F($s0)
    ctx->pc = 0x357a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x357a80: 0x6e040088  ldr         $a0, 0x88($s0)
    ctx->pc = 0x357a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x357a84: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x357a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357a88: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x357a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357a8c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x357a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357a90: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x357a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357a94: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x357a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_357a98:
    // 0x357a98: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x357a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x357a9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x357A9Cu;
    {
        const bool branch_taken_0x357a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A9Cu;
        // 0x357aa0: 0x32224000  andi        $v0, $s1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a9c) {
            ctx->pc = 0x357ACCu;
            goto label_357acc;
        }
    }
    ctx->pc = 0x357AA4u;
    // 0x357aa4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x357aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x357aa8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x357aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x357aac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x357AACu;
    {
        const bool branch_taken_0x357aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357AACu;
        // 0x357ab0: 0x32224000  andi        $v0, $s1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x357aac) {
            ctx->pc = 0x357ACCu;
            goto label_357acc;
        }
    }
    ctx->pc = 0x357AB4u;
    // 0x357ab4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x357ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x357ab8: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x357ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357abc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x357abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x357ac0: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x357ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357ac4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x357ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x357ac8: 0x32224000  andi        $v0, $s1, 0x4000
    ctx->pc = 0x357ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
label_357acc:
    // 0x357acc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x357ACCu;
    {
        const bool branch_taken_0x357acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357acc) {
            ctx->pc = 0x357AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357ACCu;
            // 0x357ad0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357AFCu;
            goto label_357afc;
        }
    }
    ctx->pc = 0x357AD4u;
    // 0x357ad4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x357ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x357ad8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x357ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x357adc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x357ADCu;
    {
        const bool branch_taken_0x357adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357adc) {
            ctx->pc = 0x357AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357ADCu;
            // 0x357ae0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357AFCu;
            goto label_357afc;
        }
    }
    ctx->pc = 0x357AE4u;
    // 0x357ae4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x357ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x357ae8: 0x6a030077  ldl         $v1, 0x77($s0)
    ctx->pc = 0x357ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x357aec: 0x6e030070  ldr         $v1, 0x70($s0)
    ctx->pc = 0x357aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x357af0: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x357af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357af4: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x357af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357af8:
    // 0x357af8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x357af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_357afc:
    // 0x357afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357b08: 0x3e00008  jr          $ra
    ctx->pc = 0x357B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B08u;
        // 0x357b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357B10u;
    // 0x357b10: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x357b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x357b14: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x357b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x357b18: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x357b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x357b1c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x357b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x357b20: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x357b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x357b24: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x357b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x357b28: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x357b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x357b2c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x357b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x357b30: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x357b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x357b34: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x357b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x357b38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x357b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x357b3c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x357b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x357b40: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x357b40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x357b44: 0x8c73e880  lw          $s3, -0x1780($v1)
    ctx->pc = 0x357b44u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x61E880u));
    // 0x357b48: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x357b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x357b4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x357b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x357b50: 0x8e760060  lw          $s6, 0x60($s3)
    ctx->pc = 0x357b50u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x357b54: 0x24710050  addiu       $s1, $v1, 0x50
    ctx->pc = 0x357b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x357b58: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x357b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x357b5c: 0x8e30004c  lw          $s0, 0x4C($s1)
    ctx->pc = 0x357b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x357b60: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x357b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x357b64: 0x8e0700fc  lw          $a3, 0xFC($s0)
    ctx->pc = 0x357b64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x357b68: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x357b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x357b6c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x357b6cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x357b70: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x357B70u;
    {
        const bool branch_taken_0x357b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357b70) {
            ctx->pc = 0x357B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357B70u;
            // 0x357b74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x357B78u;
            goto label_357b78;
        }
    }
    ctx->pc = 0x357B78u;
label_357b78:
    // 0x357b78: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x357b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x357b7c: 0xa812  mflo        $s5
    ctx->pc = 0x357b7cu;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x357b80: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x357b80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x357b84: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x357B84u;
    {
        const bool branch_taken_0x357b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x357B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B84u;
        // 0x357b88: 0x82b823  subu        $s7, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357b84) {
            ctx->pc = 0x357BF0u;
            goto label_357bf0;
        }
    }
    ctx->pc = 0x357B8Cu;
    // 0x357b8c: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x357b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x357b90: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x357b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x357b94: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x357b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x357b98: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x357b98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x357b9c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x357b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x357ba0: 0x2e52825  or          $a1, $s7, $a1
    ctx->pc = 0x357ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | GPR_U64(ctx, 5));
    // 0x357ba4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x357ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x357ba8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x357ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x357bac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x357bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x357bb0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x357bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x357bb4: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x357bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x357bb8: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x357bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x357bbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x357bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x357bc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x357bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x357bc4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x357bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x357bc8: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x357bc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x357bcc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x357bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x357bd0: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x357bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x357bd4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x357bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x357bd8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x357bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x357bdc: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x357bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x357be0: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x357be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x357be4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x357be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x357be8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x357be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x357bec: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x357becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
label_357bf0:
    // 0x357bf0: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x357BF0u;
    SET_GPR_U32(ctx, 31, 0x357BF8u);
    ctx->pc = 0x357BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357BF0u;
    // 0x357bf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x357BF0u, 0x357BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357BF8u;
label_357bf8:
    // 0x357bf8: 0x7a630020  lq          $v1, 0x20($s3)
    ctx->pc = 0x357bf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x357bfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x357bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x357c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c08: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x357c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x357c0c: 0x7a620030  lq          $v0, 0x30($s3)
    ctx->pc = 0x357c0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x357c10: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x357c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x357c14: 0x7a630040  lq          $v1, 0x40($s3)
    ctx->pc = 0x357c14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x357c18: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x357c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x357c1c: 0x7a620050  lq          $v0, 0x50($s3)
    ctx->pc = 0x357c1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x357c20: 0xc10f898  jal         func_43E260
    ctx->pc = 0x357C20u;
    SET_GPR_U32(ctx, 31, 0x357C28u);
    ctx->pc = 0x357C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C20u;
    // 0x357c24: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E260u, 0x357C20u, 0x357C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C28u;
label_357c28:
    // 0x357c28: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x357c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x357c2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x357c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c30: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x357c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x357c34: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x357c34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x357c38: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x357c38u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x357c3c: 0xc0d51b6  jal         func_3546D8
    ctx->pc = 0x357C3Cu;
    SET_GPR_U32(ctx, 31, 0x357C44u);
    ctx->pc = 0x357C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C3Cu;
    // 0x357c40: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3546D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3546D8u, 0x357C3Cu, 0x357C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C44u;
label_357c44:
    // 0x357c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x357c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c48: 0xc0d51e0  jal         func_354780
    ctx->pc = 0x357C48u;
    SET_GPR_U32(ctx, 31, 0x357C50u);
    ctx->pc = 0x357C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C48u;
    // 0x357c4c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354780u, 0x357C48u, 0x357C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C50u;
label_357c50:
    // 0x357c50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x357c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c54: 0xc10a322  jal         func_428C88
    ctx->pc = 0x357C54u;
    SET_GPR_U32(ctx, 31, 0x357C5Cu);
    ctx->pc = 0x357C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C54u;
    // 0x357c58: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x357C54u, 0x357C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C5Cu;
label_357c5c:
    // 0x357c5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357C5Cu;
    {
        const bool branch_taken_0x357c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C5Cu;
        // 0x357c60: 0x8f86be20  lw          $a2, -0x41E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357c5c) {
            ctx->pc = 0x357C6Cu;
            goto label_357c6c;
        }
    }
    ctx->pc = 0x357C64u;
    // 0x357c64: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x357C64u;
    {
        const bool branch_taken_0x357c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C64u;
        // 0x357c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357c64) {
            ctx->pc = 0x357F70u;
            goto label_357f70;
        }
    }
    ctx->pc = 0x357C6Cu;
label_357c6c:
    // 0x357c6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x357c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x357c70: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x357c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x357c74: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x357c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
    // 0x357c78: 0x344203eb  ori         $v0, $v0, 0x3EB
    ctx->pc = 0x357c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1003);
    // 0x357c7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x357c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x357c80: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x357c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x357c84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x357c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x357c88: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x357c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x357c8c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x357c8cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x357c90: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x357c90u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x357c94: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x357c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x357c98: 0x920200f4  lbu         $v0, 0xF4($s0)
    ctx->pc = 0x357c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x357c9c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x357c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x357ca0: 0x920300f5  lbu         $v1, 0xF5($s0)
    ctx->pc = 0x357ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 245)));
    // 0x357ca4: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x357ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x357ca8: 0x920200f6  lbu         $v0, 0xF6($s0)
    ctx->pc = 0x357ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 246)));
    // 0x357cac: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x357cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x357cb0: 0x920300f7  lbu         $v1, 0xF7($s0)
    ctx->pc = 0x357cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 247)));
    // 0x357cb4: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x357cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x357cb8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x357cb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357cbc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x357cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x357cc0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x357cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x357cc4: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x357cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357cc8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x357cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x357ccc: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x357cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357cd0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x357cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x357cd4: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x357cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357cd8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x357cd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x357cdc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x357cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x357ce0: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x357ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357ce4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x357ce4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x357ce8: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x357ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x357cec: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x357cecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357cf0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x357cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x357cf4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x357cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x357cf8: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x357cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357cfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x357cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x357d00: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x357d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x357d04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x357d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x357d08: 0xc6600070  lwc1        $f0, 0x70($s3)
    ctx->pc = 0x357d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357d0c: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x357d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x357d10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x357d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x357d14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x357d14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x357d18: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x357d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x357d1c: 0xc6600074  lwc1        $f0, 0x74($s3)
    ctx->pc = 0x357d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357d20: 0xc6c10010  lwc1        $f1, 0x10($s6)
    ctx->pc = 0x357d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357d24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x357d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x357d28: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x357d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x357d2c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x357d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x357d30: 0xafb7004c  sw          $s7, 0x4C($sp)
    ctx->pc = 0x357d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 23));
    // 0x357d34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x357d34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x357d38: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x357d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x357d3c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x357d3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357d40: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x357d40u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x357d44: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x357d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x357d48: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x357d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x357d4c: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x357d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x357d50: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x357d50u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD650u));
    // 0x357d54: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x357d54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x357d58: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x357d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x357d5c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x357d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x357d60: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x357d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
    // 0x357d64: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x357d64u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD660u));
    // 0x357d68: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x357d68u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x357d6c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x357d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x357d70: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x357d70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357d74: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x357d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x357d78: 0x344203fa  ori         $v0, $v0, 0x3FA
    ctx->pc = 0x357d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1018);
    // 0x357d7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x357d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x357d80: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x357d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x357d84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x357d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x357d88: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x357d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x357d8c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x357d8cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x357d90: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x357d90u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x357d94: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x357d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x357d98: 0x8e0400fc  lw          $a0, 0xFC($s0)
    ctx->pc = 0x357d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x357d9c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x357D9Cu;
    {
        const bool branch_taken_0x357d9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x357DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D9Cu;
        // 0x357da0: 0xdc830000  ld          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d9c) {
            ctx->pc = 0x357DB0u;
            goto label_357db0;
        }
    }
    ctx->pc = 0x357DA4u;
    // 0x357da4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x357da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x357da8: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x357da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x357dac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x357dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_357db0:
    // 0x357db0: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x357db0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x357db4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x357db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x357db8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x357DB8u;
    {
        const bool branch_taken_0x357db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357db8) {
            ctx->pc = 0x357DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357DB8u;
            // 0x357dbc: 0x8e220064  lw          $v0, 0x64($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357DD0u;
            goto label_357dd0;
        }
    }
    ctx->pc = 0x357DC0u;
    // 0x357dc0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x357dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x357dc4: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x357dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x357dc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x357dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x357dcc: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x357dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_357dd0:
    // 0x357dd0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x357DD0u;
    {
        const bool branch_taken_0x357dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357dd0) {
            ctx->pc = 0x357DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357DD0u;
            // 0x357dd4: 0xdc820008  ld          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357DE8u;
            goto label_357de8;
        }
    }
    ctx->pc = 0x357DD8u;
    // 0x357dd8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x357dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x357ddc: 0x211bc  dsll32      $v0, $v0, 6
    ctx->pc = 0x357ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 6));
    // 0x357de0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x357de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x357de4: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x357de4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_357de8:
    // 0x357de8: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x357de8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x357dec: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x357decu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x357df0: 0xc7848054  lwc1        $f4, -0x7FAC($gp)
    ctx->pc = 0x357df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x357df4: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x357DF4u;
    {
        const bool branch_taken_0x357df4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x357DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357DF4u;
        // 0x357df8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357df4) {
            ctx->pc = 0x357E00u;
            goto label_357e00;
        }
    }
    ctx->pc = 0x357DFCu;
    // 0x357dfc: 0xc784823c  lwc1        $f4, -0x7DC4($gp)
    ctx->pc = 0x357dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_357e00:
    // 0x357e00: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x357e00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x357e04: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x357e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x357e08: 0xc786823c  lwc1        $f6, -0x7DC4($gp)
    ctx->pc = 0x357e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x357e0c: 0x92450007  lbu         $a1, 0x7($s2)
    ctx->pc = 0x357e0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x357e10: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x357e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x357e14: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x357e14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x357e18: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x357e18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x357e1c: 0x92440006  lbu         $a0, 0x6($s2)
    ctx->pc = 0x357e1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x357e20: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x357e20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x357e24: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x357e24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x357e28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x357e28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x357e2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x357e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x357e30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x357e30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x357e34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x357e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x357e38: 0x46061142  mul.s       $f5, $f2, $f6
    ctx->pc = 0x357e38u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x357e3c: 0x460409c2  mul.s       $f7, $f1, $f4
    ctx->pc = 0x357e3cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x357e40: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x357e40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x357e44: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x357e44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x357e48: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x357e48u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x357e4c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x357e4cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x357e50: 0x46040142  mul.s       $f5, $f0, $f4
    ctx->pc = 0x357e50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x357e54: 0x460419c2  mul.s       $f7, $f3, $f4
    ctx->pc = 0x357e54u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x357e58: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x357e58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x357e5c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x357e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x357e60: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x357e60u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x357e64: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x357e64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x357e68: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x357e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x357e6c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x357e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x357e70: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x357e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x357e74: 0x34840006  ori         $a0, $a0, 0x6
    ctx->pc = 0x357e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x357e78: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x357e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x357e7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357e80: 0x70821b89  pcpyld      $v1, $a0, $v0
    ctx->pc = 0x357e80u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x357e84: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x357e84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x357e88: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x357e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x357e8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x357e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x357e90: 0x34638005  ori         $v1, $v1, 0x8005
    ctx->pc = 0x357e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32773);
    // 0x357e94: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x357e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x357e98: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x357e98u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x357e9c: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x357e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x357ea0: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x357ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x357ea4: 0xde0200b8  ld          $v0, 0xB8($s0)
    ctx->pc = 0x357ea4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x357ea8: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x357ea8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x357eac: 0x7cc30030  sq          $v1, 0x30($a2)
    ctx->pc = 0x357eacu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
    // 0x357eb0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x357eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x357eb4: 0xde0200c0  ld          $v0, 0xC0($s0)
    ctx->pc = 0x357eb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x357eb8: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x357eb8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x357ebc: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x357ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x357ec0: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x357ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x357ec4: 0xde0200c8  ld          $v0, 0xC8($s0)
    ctx->pc = 0x357ec4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x357ec8: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x357ec8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x357ecc: 0x7cc30050  sq          $v1, 0x50($a2)
    ctx->pc = 0x357eccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 3));
    // 0x357ed0: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x357ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x357ed4: 0xde0200d0  ld          $v0, 0xD0($s0)
    ctx->pc = 0x357ed4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x357ed8: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x357ed8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x357edc: 0x7cc30060  sq          $v1, 0x60($a2)
    ctx->pc = 0x357edcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 3));
    // 0x357ee0: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x357ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x357ee4: 0xdf82ae38  ld          $v0, -0x51C8($gp)
    ctx->pc = 0x357ee4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
    // 0x357ee8: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x357ee8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x357eec: 0x7cc30070  sq          $v1, 0x70($a2)
    ctx->pc = 0x357eecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 3));
    // 0x357ef0: 0x8f82aed4  lw          $v0, -0x512C($gp)
    ctx->pc = 0x357ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x357ef4: 0x8e0400f8  lw          $a0, 0xF8($s0)
    ctx->pc = 0x357ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x357ef8: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x357EF8u;
    {
        const bool branch_taken_0x357ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x357EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357EF8u;
        // 0x357efc: 0x24c50080  addiu       $a1, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357ef8) {
            ctx->pc = 0x357F20u;
            goto label_357f20;
        }
    }
    ctx->pc = 0x357F00u;
    // 0x357f00: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x357f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x357f04: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x357f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x357f08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x357f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x357f0c: 0xaf84aed4  sw          $a0, -0x512C($gp)
    ctx->pc = 0x357f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 4));
    // 0x357f10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357f14: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x357f14u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x357f18: 0x7cc30080  sq          $v1, 0x80($a2)
    ctx->pc = 0x357f18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), GPR_VEC(ctx, 3));
    // 0x357f1c: 0x24c50090  addiu       $a1, $a2, 0x90
    ctx->pc = 0x357f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
label_357f20:
    // 0x357f20: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x357f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x357f24: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x357f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x357f28: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x357f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x357f2c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x357f2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x357f30: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x357f30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x357f34: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x357f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x357f38: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x357F38u;
    SET_GPR_U32(ctx, 31, 0x357F40u);
    ctx->pc = 0x357F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357F38u;
    // 0x357f3c: 0xaf85be20  sw          $a1, -0x41E0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x357F38u, 0x357F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357F40u;
label_357f40:
    // 0x357f40: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x357f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x357f44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x357f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x357f48: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x357F48u;
    SET_GPR_U32(ctx, 31, 0x357F50u);
    ctx->pc = 0x357F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357F48u;
    // 0x357f4c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x357F48u, 0x357F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357F50u;
label_357f50:
    // 0x357f50: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x357f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x357f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357f58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x357f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x357f5c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x357F5Cu;
    {
        const bool branch_taken_0x357f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x357F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F5Cu;
        // 0x357f60: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357f5c) {
            ctx->pc = 0x357F70u;
            goto label_357f70;
        }
    }
    ctx->pc = 0x357F64u;
    // 0x357f64: 0xc10a762  jal         func_429D88
    ctx->pc = 0x357F64u;
    SET_GPR_U32(ctx, 31, 0x357F6Cu);
    ctx->pc = 0x357F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357F64u;
    // 0x357f68: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x357F64u, 0x357F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357F6Cu;
label_357f6c:
    // 0x357f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_357f70:
    // 0x357f70: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x357f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x357f74: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x357f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x357f78: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x357f78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x357f7c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x357f7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x357f80: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x357f80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x357f84: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x357f84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x357f88: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x357f88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x357f8c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x357f8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x357f90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x357f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x357f94: 0x3e00008  jr          $ra
    ctx->pc = 0x357F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F94u;
        // 0x357f98: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357F9Cu;
    // 0x357f9c: 0x0  nop
    ctx->pc = 0x357f9cu;
    // NOP
    ctx->pc = 0x357fa0u;
}
