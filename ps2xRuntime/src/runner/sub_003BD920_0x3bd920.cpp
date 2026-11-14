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

// Function: sub_003BD920
// Address: 0x3bd920 - 0x3bdc68
void sub_003BD920_0x3bd920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD920_0x3bd920");
#endif

    switch (ctx->pc) {
        case 0x3bd964u: goto label_3bd964;
        case 0x3bd97cu: goto label_3bd97c;
        case 0x3bd994u: goto label_3bd994;
        case 0x3bd9acu: goto label_3bd9ac;
        case 0x3bd9c4u: goto label_3bd9c4;
        case 0x3bd9d8u: goto label_3bd9d8;
        case 0x3bd9ecu: goto label_3bd9ec;
        case 0x3bda00u: goto label_3bda00;
        case 0x3bda14u: goto label_3bda14;
        case 0x3bda38u: goto label_3bda38;
        case 0x3bda4cu: goto label_3bda4c;
        case 0x3bdab4u: goto label_3bdab4;
        case 0x3bdaf0u: goto label_3bdaf0;
        case 0x3bdb28u: goto label_3bdb28;
        case 0x3bdb40u: goto label_3bdb40;
        case 0x3bdb70u: goto label_3bdb70;
        case 0x3bdb9cu: goto label_3bdb9c;
        case 0x3bdbc8u: goto label_3bdbc8;
        case 0x3bdc00u: goto label_3bdc00;
        case 0x3bdc20u: goto label_3bdc20;
        case 0x3bdc34u: goto label_3bdc34;
        default: break;
    }

    ctx->pc = 0x3bd920u;

    // 0x3bd920: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3bd920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3bd924: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3bd924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x3bd928: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3bd928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x3bd92c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3bd92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd930: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3bd930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x3bd934: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bd934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd938: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3bd938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3bd93c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3bd93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd940: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3bd940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x3bd944: 0x24160028  addiu       $s6, $zero, 0x28
    ctx->pc = 0x3bd944u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3bd948: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3bd948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x3bd94c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3bd94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3bd950: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3bd950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3bd954: 0xafb60020  sw          $s6, 0x20($sp)
    ctx->pc = 0x3bd954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 22));
    // 0x3bd958: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bd958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bd95c: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BD95Cu;
    SET_GPR_U32(ctx, 31, 0x3BD964u);
    ctx->pc = 0x3BD960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD95Cu;
    // 0x3bd960: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BD95Cu, 0x3BD964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD964u;
label_3bd964:
    // 0x3bd964: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3bd964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bd968: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bd968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bd96c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3bd96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x3bd970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bd970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd974: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BD974u;
    SET_GPR_U32(ctx, 31, 0x3BD97Cu);
    ctx->pc = 0x3BD978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD974u;
    // 0x3bd978: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BD974u, 0x3BD97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD97Cu;
label_3bd97c:
    // 0x3bd97c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3bd97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3bd980: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bd980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bd984: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x3bd984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x3bd988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bd988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd98c: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BD98Cu;
    SET_GPR_U32(ctx, 31, 0x3BD994u);
    ctx->pc = 0x3BD990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD98Cu;
    // 0x3bd990: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BD98Cu, 0x3BD994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD994u;
label_3bd994:
    // 0x3bd994: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3bd994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bd998: 0xa7b30000  sh          $s3, 0x0($sp)
    ctx->pc = 0x3bd998u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x3bd99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bd99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd9a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3bd9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd9a4: 0xc10344a  jal         func_40D128
    ctx->pc = 0x3BD9A4u;
    SET_GPR_U32(ctx, 31, 0x3BD9ACu);
    ctx->pc = 0x3BD9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD9A4u;
    // 0x3bd9a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D128u, 0x3BD9A4u, 0x3BD9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD9ACu;
label_3bd9ac:
    // 0x3bd9ac: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x3bd9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x3bd9b0: 0xa7a30002  sh          $v1, 0x2($sp)
    ctx->pc = 0x3bd9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3bd9b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bd9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd9b8: 0x37a50002  ori         $a1, $sp, 0x2
    ctx->pc = 0x3bd9b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
    // 0x3bd9bc: 0xc10344a  jal         func_40D128
    ctx->pc = 0x3BD9BCu;
    SET_GPR_U32(ctx, 31, 0x3BD9C4u);
    ctx->pc = 0x3BD9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD9BCu;
    // 0x3bd9c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D128u, 0x3BD9BCu, 0x3BD9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD9C4u;
label_3bd9c4:
    // 0x3bd9c4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3bd9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x3bd9c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bd9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bd9cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bd9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd9d0: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BD9D0u;
    SET_GPR_U32(ctx, 31, 0x3BD9D8u);
    ctx->pc = 0x3BD9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD9D0u;
    // 0x3bd9d4: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BD9D0u, 0x3BD9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD9D8u;
label_3bd9d8:
    // 0x3bd9d8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3bd9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x3bd9dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bd9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bd9e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bd9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd9e4: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BD9E4u;
    SET_GPR_U32(ctx, 31, 0x3BD9ECu);
    ctx->pc = 0x3BD9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD9E4u;
    // 0x3bd9e8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BD9E4u, 0x3BD9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD9ECu;
label_3bd9ec:
    // 0x3bd9ec: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3bd9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x3bd9f0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bd9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bd9f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bd9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd9f8: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BD9F8u;
    SET_GPR_U32(ctx, 31, 0x3BDA00u);
    ctx->pc = 0x3BD9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD9F8u;
    // 0x3bd9fc: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BD9F8u, 0x3BDA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDA00u;
label_3bda00:
    // 0x3bda00: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3bda00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x3bda04: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bda04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bda08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bda08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bda0c: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BDA0Cu;
    SET_GPR_U32(ctx, 31, 0x3BDA14u);
    ctx->pc = 0x3BDA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDA0Cu;
    // 0x3bda10: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BDA0Cu, 0x3BDA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDA14u;
label_3bda14:
    // 0x3bda14: 0x2e430009  sltiu       $v1, $s2, 0x9
    ctx->pc = 0x3bda14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3bda18: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x3BDA18u;
    {
        const bool branch_taken_0x3bda18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDA18u;
        // 0x3bda1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bda18) {
            ctx->pc = 0x3BDC10u;
            goto label_3bdc10;
        }
    }
    ctx->pc = 0x3BDA20u;
    // 0x3bda20: 0x8e150018  lw          $s5, 0x18($s0)
    ctx->pc = 0x3bda20u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3bda24: 0x2538004  sllv        $s0, $s3, $s2
    ctx->pc = 0x3bda24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 18) & 0x1F));
    // 0x3bda28: 0xafb0003c  sw          $s0, 0x3C($sp)
    ctx->pc = 0x3bda28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
    // 0x3bda2c: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x3bda2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x3bda30: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BDA30u;
    SET_GPR_U32(ctx, 31, 0x3BDA38u);
    ctx->pc = 0x3BDA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDA30u;
    // 0x3bda34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BDA30u, 0x3BDA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDA38u;
label_3bda38:
    // 0x3bda38: 0xafb00040  sw          $s0, 0x40($sp)
    ctx->pc = 0x3bda38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
    // 0x3bda3c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bda3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bda40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bda40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bda44: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BDA44u;
    SET_GPR_U32(ctx, 31, 0x3BDA4Cu);
    ctx->pc = 0x3BDA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDA44u;
    // 0x3bda48: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BDA44u, 0x3BDA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDA4Cu;
label_3bda4c:
    // 0x3bda4c: 0x1a00007a  blez        $s0, . + 4 + (0x7A << 2)
    ctx->pc = 0x3BDA4Cu;
    {
        const bool branch_taken_0x3bda4c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3BDA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDA4Cu;
        // 0x3bda50: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bda4c) {
            ctx->pc = 0x3BDC38u;
            goto label_3bdc38;
        }
    }
    ctx->pc = 0x3BDA54u;
    // 0x3bda54: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x3bda54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bda58: 0x141023  negu        $v0, $s4
    ctx->pc = 0x3bda58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x3bda5c: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x3bda5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3bda60: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3bda60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3bda64: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3BDA64u;
    {
        const bool branch_taken_0x3bda64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDA64u;
        // 0x3bda68: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bda64) {
            ctx->pc = 0x3BDB30u;
            goto label_3bdb30;
        }
    }
    ctx->pc = 0x3BDA6Cu;
    // 0x3bda6c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3bda6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3bda70: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3BDA70u;
    {
        const bool branch_taken_0x3bda70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDA70u;
        // 0x3bda74: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bda70) {
            ctx->pc = 0x3BDAF0u;
            goto label_3bdaf0;
        }
    }
    ctx->pc = 0x3BDA78u;
    // 0x3bda78: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3BDA78u;
    {
        const bool branch_taken_0x3bda78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDA78u;
        // 0x3bda7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bda78) {
            ctx->pc = 0x3BDAB8u;
            goto label_3bdab8;
        }
    }
    ctx->pc = 0x3BDA80u;
    // 0x3bda80: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x3bda80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3bda84: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3bda84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bda88: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bda88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bda8c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x3bda8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bda90: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x3bda90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3bda94: 0x2416002c  addiu       $s6, $zero, 0x2C
    ctx->pc = 0x3bda94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3bda98: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3bda98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3bda9c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x3bda9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3bdaa0: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x3bdaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bdaa4: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3bdaa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3bdaa8: 0xa3b50013  sb          $s5, 0x13($sp)
    ctx->pc = 0x3bdaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 21));
    // 0x3bdaac: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BDAACu;
    SET_GPR_U32(ctx, 31, 0x3BDAB4u);
    ctx->pc = 0x3BDAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDAACu;
    // 0x3bdab0: 0xa3a20012  sb          $v0, 0x12($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BDAACu, 0x3BDAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDAB4u;
label_3bdab4:
    // 0x3bdab4: 0x0  nop
    ctx->pc = 0x3bdab4u;
    // NOP
label_3bdab8:
    // 0x3bdab8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3bdab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3bdabc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bdabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdac0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3bdac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bdac4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bdac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bdac8: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x3bdac8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bdacc: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x3bdaccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x3bdad0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3bdad0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3bdad4: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x3bdad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3bdad8: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x3bdad8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bdadc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3bdadcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bdae0: 0xa3b50013  sb          $s5, 0x13($sp)
    ctx->pc = 0x3bdae0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 21));
    // 0x3bdae4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3bdae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3bdae8: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BDAE8u;
    SET_GPR_U32(ctx, 31, 0x3BDAF0u);
    ctx->pc = 0x3BDAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDAE8u;
    // 0x3bdaec: 0xa3a20012  sb          $v0, 0x12($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BDAE8u, 0x3BDAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDAF0u;
label_3bdaf0:
    // 0x3bdaf0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3bdaf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3bdaf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bdaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdaf8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3bdaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bdafc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bdafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bdb00: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x3bdb00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bdb04: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x3bdb04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x3bdb08: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3bdb08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3bdb0c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x3bdb0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3bdb10: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x3bdb10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bdb14: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3bdb14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bdb18: 0xa3b50013  sb          $s5, 0x13($sp)
    ctx->pc = 0x3bdb18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 21));
    // 0x3bdb1c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3bdb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3bdb20: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BDB20u;
    SET_GPR_U32(ctx, 31, 0x3BDB28u);
    ctx->pc = 0x3BDB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDB20u;
    // 0x3bdb24: 0xa3a20012  sb          $v0, 0x12($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BDB20u, 0x3BDB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDB28u;
label_3bdb28:
    // 0x3bdb28: 0x12800044  beqz        $s4, . + 4 + (0x44 << 2)
    ctx->pc = 0x3BDB28u;
    {
        const bool branch_taken_0x3bdb28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDB28u;
        // 0x3bdb2c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdb28) {
            ctx->pc = 0x3BDC3Cu;
            goto label_3bdc3c;
        }
    }
    ctx->pc = 0x3BDB30u;
label_3bdb30:
    // 0x3bdb30: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3bdb30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdb34: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3bdb34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdb38: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x3bdb38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3bdb3c: 0x0  nop
    ctx->pc = 0x3bdb3cu;
    // NOP
label_3bdb40:
    // 0x3bdb40: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3bdb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bdb44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bdb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdb48: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bdb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bdb4c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x3bdb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bdb50: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x3bdb50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x3bdb54: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x3bdb54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x3bdb58: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x3bdb58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x3bdb5c: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x3bdb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bdb60: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3bdb60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bdb64: 0xa3b50013  sb          $s5, 0x13($sp)
    ctx->pc = 0x3bdb64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 21));
    // 0x3bdb68: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BDB68u;
    SET_GPR_U32(ctx, 31, 0x3BDB70u);
    ctx->pc = 0x3BDB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDB68u;
    // 0x3bdb6c: 0xa3a20012  sb          $v0, 0x12($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BDB68u, 0x3BDB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDB70u;
label_3bdb70:
    // 0x3bdb70: 0x92420006  lbu         $v0, 0x6($s2)
    ctx->pc = 0x3bdb70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x3bdb74: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3bdb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bdb78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bdb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdb7c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bdb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bdb80: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x3bdb80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bdb84: 0x92620005  lbu         $v0, 0x5($s3)
    ctx->pc = 0x3bdb84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x3bdb88: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x3bdb88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bdb8c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x3bdb8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bdb90: 0xa3b50013  sb          $s5, 0x13($sp)
    ctx->pc = 0x3bdb90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 21));
    // 0x3bdb94: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BDB94u;
    SET_GPR_U32(ctx, 31, 0x3BDB9Cu);
    ctx->pc = 0x3BDB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDB94u;
    // 0x3bdb98: 0xa3a20012  sb          $v0, 0x12($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BDB94u, 0x3BDB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDB9Cu;
label_3bdb9c:
    // 0x3bdb9c: 0x9242000a  lbu         $v0, 0xA($s2)
    ctx->pc = 0x3bdb9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x3bdba0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3bdba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bdba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bdba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdba8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bdba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bdbac: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x3bdbacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bdbb0: 0x92620009  lbu         $v0, 0x9($s3)
    ctx->pc = 0x3bdbb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x3bdbb4: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x3bdbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bdbb8: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x3bdbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3bdbbc: 0xa3b50013  sb          $s5, 0x13($sp)
    ctx->pc = 0x3bdbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 21));
    // 0x3bdbc0: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BDBC0u;
    SET_GPR_U32(ctx, 31, 0x3BDBC8u);
    ctx->pc = 0x3BDBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDBC0u;
    // 0x3bdbc4: 0xa3a20012  sb          $v0, 0x12($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BDBC0u, 0x3BDBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDBC8u;
label_3bdbc8:
    // 0x3bdbc8: 0x9242000e  lbu         $v0, 0xE($s2)
    ctx->pc = 0x3bdbc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x3bdbcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bdbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdbd0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3bdbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bdbd4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bdbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bdbd8: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x3bdbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bdbdc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3bdbdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3bdbe0: 0x9262000d  lbu         $v0, 0xD($s3)
    ctx->pc = 0x3bdbe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x3bdbe4: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x3bdbe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x3bdbe8: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x3bdbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bdbec: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x3bdbecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3bdbf0: 0xa3b50013  sb          $s5, 0x13($sp)
    ctx->pc = 0x3bdbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 21));
    // 0x3bdbf4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3bdbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3bdbf8: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BDBF8u;
    SET_GPR_U32(ctx, 31, 0x3BDC00u);
    ctx->pc = 0x3BDBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDBF8u;
    // 0x3bdbfc: 0xa3a20012  sb          $v0, 0x12($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BDBF8u, 0x3BDC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDC00u;
label_3bdc00:
    // 0x3bdc00: 0x5680ffcf  bnel        $s4, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x3BDC00u;
    {
        const bool branch_taken_0x3bdc00 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bdc00) {
            ctx->pc = 0x3BDC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BDC00u;
            // 0x3bdc04: 0x92420002  lbu         $v0, 0x2($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BDB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bdb40;
        }
    }
    ctx->pc = 0x3BDC08u;
    // 0x3bdc08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3BDC08u;
    {
        const bool branch_taken_0x3bdc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDC08u;
        // 0x3bdc0c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdc08) {
            ctx->pc = 0x3BDC3Cu;
            goto label_3bdc3c;
        }
    }
    ctx->pc = 0x3BDC10u;
label_3bdc10:
    // 0x3bdc10: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3bdc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x3bdc14: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x3bdc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x3bdc18: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BDC18u;
    SET_GPR_U32(ctx, 31, 0x3BDC20u);
    ctx->pc = 0x3BDC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDC18u;
    // 0x3bdc1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BDC18u, 0x3BDC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDC20u;
label_3bdc20:
    // 0x3bdc20: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3bdc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x3bdc24: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bdc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bdc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bdc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdc2c: 0xc103440  jal         func_40D100
    ctx->pc = 0x3BDC2Cu;
    SET_GPR_U32(ctx, 31, 0x3BDC34u);
    ctx->pc = 0x3BDC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDC2Cu;
    // 0x3bdc30: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3BDC2Cu, 0x3BDC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDC34u;
label_3bdc34:
    // 0x3bdc34: 0x0  nop
    ctx->pc = 0x3bdc34u;
    // NOP
label_3bdc38:
    // 0x3bdc38: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x3bdc38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3bdc3c:
    // 0x3bdc3c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3bdc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3bdc40: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3bdc40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3bdc44: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3bdc44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3bdc48: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3bdc48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3bdc4c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3bdc4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3bdc50: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3bdc50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3bdc54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3bdc54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3bdc58: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3bdc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3bdc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BDC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDC5Cu;
        // 0x3bdc60: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDC64u;
    // 0x3bdc64: 0x0  nop
    ctx->pc = 0x3bdc64u;
    // NOP
    ctx->pc = 0x3bdc68u;
}
