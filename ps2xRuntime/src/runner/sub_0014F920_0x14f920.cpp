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

// Function: sub_0014F920
// Address: 0x14f920 - 0x150360
void sub_0014F920_0x14f920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F920_0x14f920");
#endif

    switch (ctx->pc) {
        case 0x14f970u: goto label_14f970;
        case 0x14f98cu: goto label_14f98c;
        case 0x14f998u: goto label_14f998;
        case 0x14f9acu: goto label_14f9ac;
        case 0x14f9bcu: goto label_14f9bc;
        case 0x14f9c4u: goto label_14f9c4;
        case 0x14f9d8u: goto label_14f9d8;
        case 0x14f9f4u: goto label_14f9f4;
        case 0x14fa28u: goto label_14fa28;
        case 0x14fa38u: goto label_14fa38;
        case 0x14fa54u: goto label_14fa54;
        case 0x14fa68u: goto label_14fa68;
        case 0x14fa74u: goto label_14fa74;
        case 0x14fad8u: goto label_14fad8;
        case 0x14faecu: goto label_14faec;
        case 0x14fb00u: goto label_14fb00;
        case 0x14fb18u: goto label_14fb18;
        case 0x14fbb8u: goto label_14fbb8;
        case 0x14fbccu: goto label_14fbcc;
        case 0x14fbe4u: goto label_14fbe4;
        case 0x14fbfcu: goto label_14fbfc;
        case 0x14fcdcu: goto label_14fcdc;
        case 0x14fcf0u: goto label_14fcf0;
        case 0x14fcfcu: goto label_14fcfc;
        case 0x14fd10u: goto label_14fd10;
        case 0x14fd20u: goto label_14fd20;
        case 0x14fd34u: goto label_14fd34;
        case 0x14fd44u: goto label_14fd44;
        case 0x14fd54u: goto label_14fd54;
        case 0x14fd6cu: goto label_14fd6c;
        case 0x14fd7cu: goto label_14fd7c;
        case 0x14fd9cu: goto label_14fd9c;
        case 0x14fdb0u: goto label_14fdb0;
        case 0x14fdc0u: goto label_14fdc0;
        case 0x14fdd4u: goto label_14fdd4;
        case 0x14fdecu: goto label_14fdec;
        case 0x14fe00u: goto label_14fe00;
        case 0x14fe40u: goto label_14fe40;
        case 0x14fe58u: goto label_14fe58;
        case 0x14fe64u: goto label_14fe64;
        case 0x14fec8u: goto label_14fec8;
        case 0x14fedcu: goto label_14fedc;
        case 0x14fef0u: goto label_14fef0;
        case 0x14ff08u: goto label_14ff08;
        case 0x14ffa8u: goto label_14ffa8;
        case 0x14ffbcu: goto label_14ffbc;
        case 0x14ffd0u: goto label_14ffd0;
        case 0x14ffe8u: goto label_14ffe8;
        case 0x1500d8u: goto label_1500d8;
        case 0x1500f8u: goto label_1500f8;
        case 0x15011cu: goto label_15011c;
        case 0x150140u: goto label_150140;
        case 0x150220u: goto label_150220;
        case 0x150280u: goto label_150280;
        case 0x150290u: goto label_150290;
        case 0x15029cu: goto label_15029c;
        case 0x1502d8u: goto label_1502d8;
        case 0x1502f8u: goto label_1502f8;
        case 0x15031cu: goto label_15031c;
        default: break;
    }

    ctx->pc = 0x14f920u;

    // 0x14f920: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x14f920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x14f924: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14f924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14f928: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14f928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14f92c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14f92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14f930: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14f930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14f934: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14f934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14f938: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14f938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14f93c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14f93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14f940: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14f940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14f944: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f94c: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x14f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
    // 0x14f950: 0xafa501e0  sw          $a1, 0x1E0($sp)
    ctx->pc = 0x14f950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 5));
    // 0x14f954: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14f954u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f958: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14f958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14f95c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14f960: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x14f960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x14f964: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x14f964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14f968: 0xc085538  jal         func_2154E0
    ctx->pc = 0x14F968u;
    SET_GPR_U32(ctx, 31, 0x14F970u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x14F968u, 0x14F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F970u;
label_14f970:
    // 0x14f970: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x14f970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
    // 0x14f974: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x14f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x14f978: 0x10020268  beq         $zero, $v0, . + 4 + (0x268 << 2)
    ctx->pc = 0x14F978u;
    {
        const bool branch_taken_0x14f978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f978) {
            ctx->pc = 0x15031Cu;
            goto label_15031c;
        }
    }
    ctx->pc = 0x14F980u;
    // 0x14f980: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x14f980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x14f984: 0xc054300  jal         func_150C00
    ctx->pc = 0x14F984u;
    SET_GPR_U32(ctx, 31, 0x14F98Cu);
    ctx->pc = 0x150C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150C00u, 0x14F984u, 0x14F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F98Cu;
label_14f98c:
    // 0x14f98c: 0x8fa401cc  lw          $a0, 0x1CC($sp)
    ctx->pc = 0x14f98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x14f990: 0xc0a361c  jal         func_28D870
    ctx->pc = 0x14F990u;
    SET_GPR_U32(ctx, 31, 0x14F998u);
    ctx->pc = 0x28D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D870u, 0x14F990u, 0x14F998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F998u;
label_14f998:
    // 0x14f998: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x14f998u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f99c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x14f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14f9a0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x14f9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9a4: 0xc0542d8  jal         func_150B60
    ctx->pc = 0x14F9A4u;
    SET_GPR_U32(ctx, 31, 0x14F9ACu);
    ctx->pc = 0x150B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B60u, 0x14F9A4u, 0x14F9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9ACu;
label_14f9ac:
    // 0x14f9ac: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x14f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x14f9b0: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x14f9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14f9b4: 0xc0542c8  jal         func_150B20
    ctx->pc = 0x14F9B4u;
    SET_GPR_U32(ctx, 31, 0x14F9BCu);
    ctx->pc = 0x150B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B20u, 0x14F9B4u, 0x14F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9BCu;
label_14f9bc:
    // 0x14f9bc: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x14F9BCu;
    {
        const bool branch_taken_0x14f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f9bc) {
            ctx->pc = 0x14FD34u;
            goto label_14fd34;
        }
    }
    ctx->pc = 0x14F9C4u;
label_14f9c4:
    // 0x14f9c4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x14f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14f9c8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x14f9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x14f9cc: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x14f9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x14f9d0: 0xc0542b4  jal         func_150AD0
    ctx->pc = 0x14F9D0u;
    SET_GPR_U32(ctx, 31, 0x14F9D8u);
    ctx->pc = 0x150AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AD0u, 0x14F9D0u, 0x14F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9D8u;
label_14f9d8:
    // 0x14f9d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f9dc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x14f9dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14f9e0: 0x144300d1  bne         $v0, $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x14F9E0u;
    {
        const bool branch_taken_0x14f9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14f9e0) {
            ctx->pc = 0x14FD28u;
            goto label_14fd28;
        }
    }
    ctx->pc = 0x14F9E8u;
    // 0x14f9e8: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x14f9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x14f9ec: 0xc0542b4  jal         func_150AD0
    ctx->pc = 0x14F9ECu;
    SET_GPR_U32(ctx, 31, 0x14F9F4u);
    ctx->pc = 0x150AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AD0u, 0x14F9ECu, 0x14F9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9F4u;
label_14f9f4:
    // 0x14f9f4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x14f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14f9f8: 0x14030011  bne         $zero, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14F9F8u;
    {
        const bool branch_taken_0x14f9f8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 3));
        if (branch_taken_0x14f9f8) {
            ctx->pc = 0x14FA40u;
            goto label_14fa40;
        }
    }
    ctx->pc = 0x14FA00u;
    // 0x14fa00: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x14fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x14fa04: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x14fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x14fa08: 0x30420700  andi        $v0, $v0, 0x700
    ctx->pc = 0x14fa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
    // 0x14fa0c: 0x30420110  andi        $v0, $v0, 0x110
    ctx->pc = 0x14fa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)272);
    // 0x14fa10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14FA10u;
    {
        const bool branch_taken_0x14fa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa10) {
            ctx->pc = 0x14FA40u;
            goto label_14fa40;
        }
    }
    ctx->pc = 0x14FA18u;
    // 0x14fa18: 0x27a4019c  addiu       $a0, $sp, 0x19C
    ctx->pc = 0x14fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x14fa1c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x14fa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa20: 0xc054288  jal         func_150A20
    ctx->pc = 0x14FA20u;
    SET_GPR_U32(ctx, 31, 0x14FA28u);
    ctx->pc = 0x150A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A20u, 0x14FA20u, 0x14FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA28u;
label_14fa28:
    // 0x14fa28: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x14fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x14fa2c: 0x27a5019c  addiu       $a1, $sp, 0x19C
    ctx->pc = 0x14fa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x14fa30: 0xc0542c8  jal         func_150B20
    ctx->pc = 0x14FA30u;
    SET_GPR_U32(ctx, 31, 0x14FA38u);
    ctx->pc = 0x150B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B20u, 0x14FA30u, 0x14FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA38u;
label_14fa38:
    // 0x14fa38: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x14FA38u;
    {
        const bool branch_taken_0x14fa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa38) {
            ctx->pc = 0x14FD5Cu;
            goto label_14fd5c;
        }
    }
    ctx->pc = 0x14FA40u;
label_14fa40:
    // 0x14fa40: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x14fa40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14fa44: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x14fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x14fa48: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x14fa48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14fa4c: 0xc094d74  jal         func_2535D0
    ctx->pc = 0x14FA4Cu;
    SET_GPR_U32(ctx, 31, 0x14FA54u);
    ctx->pc = 0x2535D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535D0u, 0x14FA4Cu, 0x14FA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA54u;
label_14fa54:
    // 0x14fa54: 0x8f85ba98  lw          $a1, -0x4568($gp)
    ctx->pc = 0x14fa54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14fa58: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x14fa58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14fa5c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x14fa5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa60: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14FA60u;
    SET_GPR_U32(ctx, 31, 0x14FA68u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14FA60u, 0x14FA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA68u;
label_14fa68:
    // 0x14fa68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14fa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa6c: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x14FA6Cu;
    SET_GPR_U32(ctx, 31, 0x14FA74u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x14FA6Cu, 0x14FA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA74u;
label_14fa74:
    // 0x14fa74: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x14fa74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa78: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x14fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14fa7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14fa80: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x14fa80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14fa84: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x14FA84u;
    {
        const bool branch_taken_0x14fa84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa84) {
            ctx->pc = 0x14FB7Cu;
            goto label_14fb7c;
        }
    }
    ctx->pc = 0x14FA8Cu;
    // 0x14fa8c: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x14fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14fa90: 0x5187c  dsll32      $v1, $a1, 1
    ctx->pc = 0x14fa90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 1));
    // 0x14fa94: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x14fa94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x14fa98: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x14fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x14fa9c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x14fa9cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x14faa0: 0x1012  mflo        $v0
    ctx->pc = 0x14faa0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x14faa4: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x14faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
    // 0x14faa8: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x14faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14faac: 0x2187c  dsll32      $v1, $v0, 1
    ctx->pc = 0x14faacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 1));
    // 0x14fab0: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x14fab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x14fab4: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x14fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x14fab8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x14fab8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x14fabc: 0x1010  mfhi        $v0
    ctx->pc = 0x14fabcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14fac0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14fac4: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x14fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
    // 0x14fac8: 0x8f83ba98  lw          $v1, -0x4568($gp)
    ctx->pc = 0x14fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14facc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x14faccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14fad0: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14FAD0u;
    SET_GPR_U32(ctx, 31, 0x14FAD8u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14FAD0u, 0x14FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FAD8u;
label_14fad8:
    // 0x14fad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14fad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fadc: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x14fadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x14fae0: 0x8fa601c4  lw          $a2, 0x1C4($sp)
    ctx->pc = 0x14fae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x14fae4: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14FAE4u;
    SET_GPR_U32(ctx, 31, 0x14FAECu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14FAE4u, 0x14FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FAECu;
label_14faec:
    // 0x14faec: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x14faecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x14faf0: 0x8f83ba98  lw          $v1, -0x4568($gp)
    ctx->pc = 0x14faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14faf4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x14faf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14faf8: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14FAF8u;
    SET_GPR_U32(ctx, 31, 0x14FB00u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14FAF8u, 0x14FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB00u;
label_14fb00:
    // 0x14fb00: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x14fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x14fb04: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x14fb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14fb08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14fb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb0c: 0x8fa601c4  lw          $a2, 0x1C4($sp)
    ctx->pc = 0x14fb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x14fb10: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14FB10u;
    SET_GPR_U32(ctx, 31, 0x14FB18u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14FB10u, 0x14FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB18u;
label_14fb18:
    // 0x14fb18: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x14fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x14fb1c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x14fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14fb20: 0x10030006  beq         $zero, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FB20u;
    {
        const bool branch_taken_0x14fb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x14fb20) {
            ctx->pc = 0x14FB3Cu;
            goto label_14fb3c;
        }
    }
    ctx->pc = 0x14FB28u;
    // 0x14fb28: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x14fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14fb2c: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x14fb2cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14fb30: 0xafb5018c  sw          $s5, 0x18C($sp)
    ctx->pc = 0x14fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 21));
    // 0x14fb34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14FB34u;
    {
        const bool branch_taken_0x14fb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb34) {
            ctx->pc = 0x14FB40u;
            goto label_14fb40;
        }
    }
    ctx->pc = 0x14FB3Cu;
label_14fb3c:
    // 0x14fb3c: 0xafa0018c  sw          $zero, 0x18C($sp)
    ctx->pc = 0x14fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
label_14fb40:
    // 0x14fb40: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x14fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x14fb44: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x14fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x14fb48: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x14fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x14fb4c: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FB4Cu;
    {
        const bool branch_taken_0x14fb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14fb4c) {
            ctx->pc = 0x14FB68u;
            goto label_14fb68;
        }
    }
    ctx->pc = 0x14FB54u;
    // 0x14fb54: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x14fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x14fb58: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x14fb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14fb5c: 0xafa50188  sw          $a1, 0x188($sp)
    ctx->pc = 0x14fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 5));
    // 0x14fb60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14FB60u;
    {
        const bool branch_taken_0x14fb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb60) {
            ctx->pc = 0x14FB6Cu;
            goto label_14fb6c;
        }
    }
    ctx->pc = 0x14FB68u;
label_14fb68:
    // 0x14fb68: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x14fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
label_14fb6c:
    // 0x14fb6c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x14fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x14fb70: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x14fb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x14fb74: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x14FB74u;
    {
        const bool branch_taken_0x14fb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb74) {
            ctx->pc = 0x14FC58u;
            goto label_14fc58;
        }
    }
    ctx->pc = 0x14FB7Cu;
label_14fb7c:
    // 0x14fb7c: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x14fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x14fb80: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x14fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14fb84: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14fb84u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14fb88: 0xa812  mflo        $s5
    ctx->pc = 0x14fb88u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x14fb8c: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x14fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x14fb90: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x14fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
    // 0x14fb94: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x14fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x14fb98: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x14fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14fb9c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14fb9cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14fba0: 0x1010  mfhi        $v0
    ctx->pc = 0x14fba0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14fba4: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x14fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
    // 0x14fba8: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14fbac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14fbb0: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14FBB0u;
    SET_GPR_U32(ctx, 31, 0x14FBB8u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14FBB0u, 0x14FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FBB8u;
label_14fbb8:
    // 0x14fbb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14fbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbbc: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x14fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x14fbc0: 0x8fa601bc  lw          $a2, 0x1BC($sp)
    ctx->pc = 0x14fbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x14fbc4: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14FBC4u;
    SET_GPR_U32(ctx, 31, 0x14FBCCu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14FBC4u, 0x14FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FBCCu;
label_14fbcc:
    // 0x14fbcc: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x14fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x14fbd0: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14fbd4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x14fbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14fbd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14fbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbdc: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14FBDCu;
    SET_GPR_U32(ctx, 31, 0x14FBE4u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14FBDCu, 0x14FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FBE4u;
label_14fbe4:
    // 0x14fbe4: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x14fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x14fbe8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x14fbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14fbec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14fbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbf0: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x14fbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x14fbf4: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14FBF4u;
    SET_GPR_U32(ctx, 31, 0x14FBFCu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14FBF4u, 0x14FBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FBFCu;
label_14fbfc:
    // 0x14fbfc: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x14fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x14fc00: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x14fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x14fc04: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FC04u;
    {
        const bool branch_taken_0x14fc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14fc04) {
            ctx->pc = 0x14FC20u;
            goto label_14fc20;
        }
    }
    ctx->pc = 0x14FC0Cu;
    // 0x14fc0c: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x14fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x14fc10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fc14: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x14fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x14fc18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14FC18u;
    {
        const bool branch_taken_0x14fc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fc18) {
            ctx->pc = 0x14FC24u;
            goto label_14fc24;
        }
    }
    ctx->pc = 0x14FC20u;
label_14fc20:
    // 0x14fc20: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x14fc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
label_14fc24:
    // 0x14fc24: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x14fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x14fc28: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x14fc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x14fc2c: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x14fc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14fc30: 0x10050006  beq         $zero, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FC30u;
    {
        const bool branch_taken_0x14fc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        if (branch_taken_0x14fc30) {
            ctx->pc = 0x14FC4Cu;
            goto label_14fc4c;
        }
    }
    ctx->pc = 0x14FC38u;
    // 0x14fc38: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x14fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14fc3c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14fc40: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x14fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x14fc44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14FC44u;
    {
        const bool branch_taken_0x14fc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fc44) {
            ctx->pc = 0x14FC50u;
            goto label_14fc50;
        }
    }
    ctx->pc = 0x14FC4Cu;
label_14fc4c:
    // 0x14fc4c: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x14fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
label_14fc50:
    // 0x14fc50: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x14fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x14fc54: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x14fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_14fc58:
    // 0x14fc58: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x14fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x14fc5c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x14FC5Cu;
    {
        const bool branch_taken_0x14fc5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fc5c) {
            ctx->pc = 0x14FC94u;
            goto label_14fc94;
        }
    }
    ctx->pc = 0x14FC64u;
    // 0x14fc64: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14fc68: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x14fc68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fc6c: 0x10060009  beq         $zero, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x14FC6Cu;
    {
        const bool branch_taken_0x14fc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        if (branch_taken_0x14fc6c) {
            ctx->pc = 0x14FC94u;
            goto label_14fc94;
        }
    }
    ctx->pc = 0x14FC74u;
    // 0x14fc74: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x14fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x14fc78: 0x8f85ba98  lw          $a1, -0x4568($gp)
    ctx->pc = 0x14fc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14fc7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fc80: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x14fc80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fc84: 0x14920003  bne         $a0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FC84u;
    {
        const bool branch_taken_0x14fc84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        if (branch_taken_0x14fc84) {
            ctx->pc = 0x14FC94u;
            goto label_14fc94;
        }
    }
    ctx->pc = 0x14FC8Cu;
    // 0x14fc8c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x14fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x14fc90: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x14fc90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_14fc94:
    // 0x14fc94: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x14fc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x14fc98: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x14FC98u;
    {
        const bool branch_taken_0x14fc98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fc98) {
            ctx->pc = 0x14FCD0u;
            goto label_14fcd0;
        }
    }
    ctx->pc = 0x14FCA0u;
    // 0x14fca0: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14fca4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fca8: 0x10020009  beq         $zero, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14FCA8u;
    {
        const bool branch_taken_0x14fca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14fca8) {
            ctx->pc = 0x14FCD0u;
            goto label_14fcd0;
        }
    }
    ctx->pc = 0x14FCB0u;
    // 0x14fcb0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x14fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x14fcb4: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14fcb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fcbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fcc0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FCC0u;
    {
        const bool branch_taken_0x14fcc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14fcc0) {
            ctx->pc = 0x14FCD0u;
            goto label_14fcd0;
        }
    }
    ctx->pc = 0x14FCC8u;
    // 0x14fcc8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x14fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x14fccc: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x14fcccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_14fcd0:
    // 0x14fcd0: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x14fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x14fcd4: 0xc0542b4  jal         func_150AD0
    ctx->pc = 0x14FCD4u;
    SET_GPR_U32(ctx, 31, 0x14FCDCu);
    ctx->pc = 0x150AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AD0u, 0x14FCD4u, 0x14FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCDCu;
label_14fcdc:
    // 0x14fcdc: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14fce0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x14fce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14fce4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14fce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fce8: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x14FCE8u;
    SET_GPR_U32(ctx, 31, 0x14FCF0u);
    ctx->pc = 0x14AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFA0u, 0x14FCE8u, 0x14FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCF0u;
label_14fcf0:
    // 0x14fcf0: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x14fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x14fcf4: 0xc0542b4  jal         func_150AD0
    ctx->pc = 0x14FCF4u;
    SET_GPR_U32(ctx, 31, 0x14FCFCu);
    ctx->pc = 0x150AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AD0u, 0x14FCF4u, 0x14FCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCFCu;
label_14fcfc:
    // 0x14fcfc: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14fd00: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x14fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14fd04: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14fd04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd08: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x14FD08u;
    SET_GPR_U32(ctx, 31, 0x14FD10u);
    ctx->pc = 0x14AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFA0u, 0x14FD08u, 0x14FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD10u;
label_14fd10:
    // 0x14fd10: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x14fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x14fd14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14fd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14fd18: 0xc094d94  jal         func_253650
    ctx->pc = 0x14FD18u;
    SET_GPR_U32(ctx, 31, 0x14FD20u);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x14FD18u, 0x14FD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD20u;
label_14fd20:
    // 0x14fd20: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14FD20u;
    {
        const bool branch_taken_0x14fd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fd20) {
            ctx->pc = 0x14FD5Cu;
            goto label_14fd5c;
        }
    }
    ctx->pc = 0x14FD28u;
label_14fd28:
    // 0x14fd28: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x14fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x14fd2c: 0xc054278  jal         func_1509E0
    ctx->pc = 0x14FD2Cu;
    SET_GPR_U32(ctx, 31, 0x14FD34u);
    ctx->pc = 0x1509E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1509E0u, 0x14FD2Cu, 0x14FD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD34u;
label_14fd34:
    // 0x14fd34: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x14fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x14fd38: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x14fd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd3c: 0xc054288  jal         func_150A20
    ctx->pc = 0x14FD3Cu;
    SET_GPR_U32(ctx, 31, 0x14FD44u);
    ctx->pc = 0x150A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A20u, 0x14FD3Cu, 0x14FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD44u;
label_14fd44:
    // 0x14fd44: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x14fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x14fd48: 0x27a50198  addiu       $a1, $sp, 0x198
    ctx->pc = 0x14fd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x14fd4c: 0xc041998  jal         func_106660
    ctx->pc = 0x14FD4Cu;
    SET_GPR_U32(ctx, 31, 0x14FD54u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x14FD4Cu, 0x14FD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD54u;
label_14fd54:
    // 0x14fd54: 0x1440ff1b  bnez        $v0, . + 4 + (-0xE5 << 2)
    ctx->pc = 0x14FD54u;
    {
        const bool branch_taken_0x14fd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fd54) {
            ctx->pc = 0x14F9C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f9c4;
        }
    }
    ctx->pc = 0x14FD5Cu;
label_14fd5c:
    // 0x14fd5c: 0x27a40194  addiu       $a0, $sp, 0x194
    ctx->pc = 0x14fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x14fd60: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x14fd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd64: 0xc054288  jal         func_150A20
    ctx->pc = 0x14FD64u;
    SET_GPR_U32(ctx, 31, 0x14FD6Cu);
    ctx->pc = 0x150A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A20u, 0x14FD64u, 0x14FD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD6Cu;
label_14fd6c:
    // 0x14fd6c: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x14fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x14fd70: 0x27a50194  addiu       $a1, $sp, 0x194
    ctx->pc = 0x14fd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x14fd74: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x14FD74u;
    SET_GPR_U32(ctx, 31, 0x14FD7Cu);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x14FD74u, 0x14FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD7Cu;
label_14fd7c:
    // 0x14fd7c: 0x10400167  beqz        $v0, . + 4 + (0x167 << 2)
    ctx->pc = 0x14FD7Cu;
    {
        const bool branch_taken_0x14fd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fd7c) {
            ctx->pc = 0x15031Cu;
            goto label_15031c;
        }
    }
    ctx->pc = 0x14FD84u;
    // 0x14fd84: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x14fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14fd88: 0x27a401b4  addiu       $a0, $sp, 0x1B4
    ctx->pc = 0x14fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x14fd8c: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x14fd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x14fd90: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x14fd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x14fd94: 0xc054210  jal         func_150840
    ctx->pc = 0x14FD94u;
    SET_GPR_U32(ctx, 31, 0x14FD9Cu);
    ctx->pc = 0x150840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150840u, 0x14FD94u, 0x14FD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD9Cu;
label_14fd9c:
    // 0x14fd9c: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x14fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14fda0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x14fda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x14fda4: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x14fda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x14fda8: 0xc052a1c  jal         func_14A870
    ctx->pc = 0x14FDA8u;
    SET_GPR_U32(ctx, 31, 0x14FDB0u);
    ctx->pc = 0x14A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A870u, 0x14FDA8u, 0x14FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDB0u;
label_14fdb0:
    // 0x14fdb0: 0x27a401b4  addiu       $a0, $sp, 0x1B4
    ctx->pc = 0x14fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x14fdb4: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x14fdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x14fdb8: 0xc041998  jal         func_106660
    ctx->pc = 0x14FDB8u;
    SET_GPR_U32(ctx, 31, 0x14FDC0u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x14FDB8u, 0x14FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDC0u;
label_14fdc0:
    // 0x14fdc0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14FDC0u;
    {
        const bool branch_taken_0x14fdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fdc0) {
            ctx->pc = 0x14FE2Cu;
            goto label_14fe2c;
        }
    }
    ctx->pc = 0x14FDC8u;
    // 0x14fdc8: 0x27a401b4  addiu       $a0, $sp, 0x1B4
    ctx->pc = 0x14fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x14fdcc: 0xc052a58  jal         func_14A960
    ctx->pc = 0x14FDCCu;
    SET_GPR_U32(ctx, 31, 0x14FDD4u);
    ctx->pc = 0x14A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A960u, 0x14FDCCu, 0x14FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDD4u;
label_14fdd4:
    // 0x14fdd4: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x14fdd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14fdd8: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14fddc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14fde0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x14fde0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14fde4: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x14FDE4u;
    SET_GPR_U32(ctx, 31, 0x14FDECu);
    ctx->pc = 0x14AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFA0u, 0x14FDE4u, 0x14FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDECu;
label_14fdec:
    // 0x14fdec: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14fdf0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14fdf4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x14fdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14fdf8: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x14FDF8u;
    SET_GPR_U32(ctx, 31, 0x14FE00u);
    ctx->pc = 0x14AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFA0u, 0x14FDF8u, 0x14FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE00u;
label_14fe00:
    // 0x14fe00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fe04: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x14fe04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x14fe08: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x14fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14fe0c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x14fe0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x14fe10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FE10u;
    {
        const bool branch_taken_0x14fe10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fe10) {
            ctx->pc = 0x14FE20u;
            goto label_14fe20;
        }
    }
    ctx->pc = 0x14FE18u;
    // 0x14fe18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fe1c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x14fe1cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14fe20:
    // 0x14fe20: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x14fe20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe24: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x14FE24u;
    {
        const bool branch_taken_0x14fe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fe24) {
            ctx->pc = 0x150320u;
            goto label_150320;
        }
    }
    ctx->pc = 0x14FE2Cu;
label_14fe2c:
    // 0x14fe2c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x14fe2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14fe30: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14fe34: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x14fe34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14fe38: 0xc094d74  jal         func_2535D0
    ctx->pc = 0x14FE38u;
    SET_GPR_U32(ctx, 31, 0x14FE40u);
    ctx->pc = 0x2535D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535D0u, 0x14FE38u, 0x14FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE40u;
label_14fe40:
    // 0x14fe40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14fe44: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x14fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x14fe48: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14fe4c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14fe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14fe50: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14FE50u;
    SET_GPR_U32(ctx, 31, 0x14FE58u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14FE50u, 0x14FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE58u;
label_14fe58:
    // 0x14fe58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14fe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe5c: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x14FE5Cu;
    SET_GPR_U32(ctx, 31, 0x14FE64u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x14FE5Cu, 0x14FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE64u;
label_14fe64:
    // 0x14fe64: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x14fe64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe68: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x14fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14fe6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14fe70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14fe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14fe74: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x14FE74u;
    {
        const bool branch_taken_0x14fe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fe74) {
            ctx->pc = 0x14FF6Cu;
            goto label_14ff6c;
        }
    }
    ctx->pc = 0x14FE7Cu;
    // 0x14fe7c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x14fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14fe80: 0x2187c  dsll32      $v1, $v0, 1
    ctx->pc = 0x14fe80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 1));
    // 0x14fe84: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x14fe84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x14fe88: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x14fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x14fe8c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x14fe8cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x14fe90: 0x1012  mflo        $v0
    ctx->pc = 0x14fe90u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x14fe94: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x14fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x14fe98: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x14fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14fe9c: 0x2187c  dsll32      $v1, $v0, 1
    ctx->pc = 0x14fe9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 1));
    // 0x14fea0: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x14fea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x14fea4: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x14fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x14fea8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x14fea8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x14feac: 0x1010  mfhi        $v0
    ctx->pc = 0x14feacu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14feb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14feb4: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x14feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x14feb8: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14febc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14febcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14fec0: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14FEC0u;
    SET_GPR_U32(ctx, 31, 0x14FEC8u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14FEC0u, 0x14FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEC8u;
label_14fec8:
    // 0x14fec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14fec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fecc: 0x8fa501ac  lw          $a1, 0x1AC($sp)
    ctx->pc = 0x14feccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x14fed0: 0x8fa601b0  lw          $a2, 0x1B0($sp)
    ctx->pc = 0x14fed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x14fed4: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14FED4u;
    SET_GPR_U32(ctx, 31, 0x14FEDCu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14FED4u, 0x14FEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEDCu;
label_14fedc:
    // 0x14fedc: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x14fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x14fee0: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14fee4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14fee8: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14FEE8u;
    SET_GPR_U32(ctx, 31, 0x14FEF0u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14FEE8u, 0x14FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEF0u;
label_14fef0:
    // 0x14fef0: 0x8fa301ac  lw          $v1, 0x1AC($sp)
    ctx->pc = 0x14fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x14fef4: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x14fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14fef8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14fef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fefc: 0x8fa601b0  lw          $a2, 0x1B0($sp)
    ctx->pc = 0x14fefcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x14ff00: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14FF00u;
    SET_GPR_U32(ctx, 31, 0x14FF08u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14FF00u, 0x14FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF08u;
label_14ff08:
    // 0x14ff08: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x14ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x14ff0c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x14ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14ff10: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FF10u;
    {
        const bool branch_taken_0x14ff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ff10) {
            ctx->pc = 0x14FF2Cu;
            goto label_14ff2c;
        }
    }
    ctx->pc = 0x14FF18u;
    // 0x14ff18: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x14ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14ff1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ff20: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x14ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x14ff24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14FF24u;
    {
        const bool branch_taken_0x14ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff24) {
            ctx->pc = 0x14FF30u;
            goto label_14ff30;
        }
    }
    ctx->pc = 0x14FF2Cu;
label_14ff2c:
    // 0x14ff2c: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x14ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
label_14ff30:
    // 0x14ff30: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x14ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x14ff34: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x14ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x14ff38: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x14ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x14ff3c: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FF3Cu;
    {
        const bool branch_taken_0x14ff3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ff3c) {
            ctx->pc = 0x14FF58u;
            goto label_14ff58;
        }
    }
    ctx->pc = 0x14FF44u;
    // 0x14ff44: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x14ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x14ff48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ff4c: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x14ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x14ff50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14FF50u;
    {
        const bool branch_taken_0x14ff50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff50) {
            ctx->pc = 0x14FF5Cu;
            goto label_14ff5c;
        }
    }
    ctx->pc = 0x14FF58u;
label_14ff58:
    // 0x14ff58: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x14ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
label_14ff5c:
    // 0x14ff5c: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x14ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x14ff60: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x14ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x14ff64: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x14FF64u;
    {
        const bool branch_taken_0x14ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff64) {
            ctx->pc = 0x150044u;
            goto label_150044;
        }
    }
    ctx->pc = 0x14FF6Cu;
label_14ff6c:
    // 0x14ff6c: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x14ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x14ff70: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x14ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14ff74: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14ff74u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14ff78: 0x1012  mflo        $v0
    ctx->pc = 0x14ff78u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x14ff7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14ff80: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x14ff80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x14ff84: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x14ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x14ff88: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x14ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14ff8c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14ff8cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14ff90: 0x1010  mfhi        $v0
    ctx->pc = 0x14ff90u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14ff94: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x14ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    // 0x14ff98: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14ff9c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14ffa0: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14FFA0u;
    SET_GPR_U32(ctx, 31, 0x14FFA8u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14FFA0u, 0x14FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFA8u;
label_14ffa8:
    // 0x14ffa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14ffa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ffac: 0x8fa501a4  lw          $a1, 0x1A4($sp)
    ctx->pc = 0x14ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x14ffb0: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x14ffb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x14ffb4: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14FFB4u;
    SET_GPR_U32(ctx, 31, 0x14FFBCu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14FFB4u, 0x14FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFBCu;
label_14ffbc:
    // 0x14ffbc: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x14ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x14ffc0: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14ffc4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14ffc8: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14FFC8u;
    SET_GPR_U32(ctx, 31, 0x14FFD0u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14FFC8u, 0x14FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFD0u;
label_14ffd0:
    // 0x14ffd0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x14ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x14ffd4: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x14ffd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ffd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14ffd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ffdc: 0x8fa501a4  lw          $a1, 0x1A4($sp)
    ctx->pc = 0x14ffdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x14ffe0: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14FFE0u;
    SET_GPR_U32(ctx, 31, 0x14FFE8u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14FFE0u, 0x14FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFE8u;
label_14ffe8:
    // 0x14ffe8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x14ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x14ffec: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x14ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x14fff0: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FFF0u;
    {
        const bool branch_taken_0x14fff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14fff0) {
            ctx->pc = 0x15000Cu;
            goto label_15000c;
        }
    }
    ctx->pc = 0x14FFF8u;
    // 0x14fff8: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x14fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x14fffc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14fffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150000: 0xafa40174  sw          $a0, 0x174($sp)
    ctx->pc = 0x150000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 4));
    // 0x150004: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x150004u;
    {
        const bool branch_taken_0x150004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150004) {
            ctx->pc = 0x150010u;
            goto label_150010;
        }
    }
    ctx->pc = 0x15000Cu;
label_15000c:
    // 0x15000c: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x15000cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
label_150010:
    // 0x150010: 0x8fa50174  lw          $a1, 0x174($sp)
    ctx->pc = 0x150010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x150014: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x150014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
    // 0x150018: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x150018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15001c: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15001Cu;
    {
        const bool branch_taken_0x15001c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x15001c) {
            ctx->pc = 0x150038u;
            goto label_150038;
        }
    }
    ctx->pc = 0x150024u;
    // 0x150024: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x150024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x150028: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x150028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15002c: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x15002cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
    // 0x150030: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x150030u;
    {
        const bool branch_taken_0x150030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150030) {
            ctx->pc = 0x15003Cu;
            goto label_15003c;
        }
    }
    ctx->pc = 0x150038u;
label_150038:
    // 0x150038: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x150038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
label_15003c:
    // 0x15003c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x15003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x150040: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x150040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_150044:
    // 0x150044: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x150044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x150048: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x150048u;
    {
        const bool branch_taken_0x150048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x150048) {
            ctx->pc = 0x15008Cu;
            goto label_15008c;
        }
    }
    ctx->pc = 0x150050u;
    // 0x150050: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x150050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x150054: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x150054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150058: 0x1004000c  beq         $zero, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x150058u;
    {
        const bool branch_taken_0x150058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x150058) {
            ctx->pc = 0x15008Cu;
            goto label_15008c;
        }
    }
    ctx->pc = 0x150060u;
    // 0x150060: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x150060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x150064: 0x8f85ba98  lw          $a1, -0x4568($gp)
    ctx->pc = 0x150064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x150068: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x150068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15006c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150070: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x150070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x150074: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x150074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x150078: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150078u;
    {
        const bool branch_taken_0x150078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x150078) {
            ctx->pc = 0x15008Cu;
            goto label_15008c;
        }
    }
    ctx->pc = 0x150080u;
    // 0x150080: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x150080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x150084: 0x2241024  and         $v0, $s1, $a0
    ctx->pc = 0x150084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x150088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x150088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15008c:
    // 0x15008c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x15008cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x150090: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x150090u;
    {
        const bool branch_taken_0x150090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150090) {
            ctx->pc = 0x1500CCu;
            goto label_1500cc;
        }
    }
    ctx->pc = 0x150098u;
    // 0x150098: 0x8f84ba98  lw          $a0, -0x4568($gp)
    ctx->pc = 0x150098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x15009c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1500a0: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1500A0u;
    {
        const bool branch_taken_0x1500a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1500a0) {
            ctx->pc = 0x1500CCu;
            goto label_1500cc;
        }
    }
    ctx->pc = 0x1500A8u;
    // 0x1500a8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1500a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1500ac: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x1500acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x1500b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1500b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1500b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1500b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1500b8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1500B8u;
    {
        const bool branch_taken_0x1500b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1500b8) {
            ctx->pc = 0x1500CCu;
            goto label_1500cc;
        }
    }
    ctx->pc = 0x1500C0u;
    // 0x1500c0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1500c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1500c4: 0x2222024  and         $a0, $s1, $v0
    ctx->pc = 0x1500c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1500c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1500c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1500cc:
    // 0x1500cc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1500ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1500d0: 0xc0a407c  jal         func_2901F0
    ctx->pc = 0x1500D0u;
    SET_GPR_U32(ctx, 31, 0x1500D8u);
    ctx->pc = 0x2901F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2901F0u, 0x1500D0u, 0x1500D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500D8u;
label_1500d8:
    // 0x1500d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1500d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500dc: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1500dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1500e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1500e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1500e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500e8: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x1500e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1500ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1500ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500f0: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x1500F0u;
    SET_GPR_U32(ctx, 31, 0x1500F8u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x1500F0u, 0x1500F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500F8u;
label_1500f8:
    // 0x1500f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1500f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500fc: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x1500fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x150100: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x150100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x150104: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x150104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x150108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x150108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15010c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x15010cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x150110: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x150110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x150114: 0xc0a3624  jal         func_28D890
    ctx->pc = 0x150114u;
    SET_GPR_U32(ctx, 31, 0x15011Cu);
    ctx->pc = 0x28D890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D890u, 0x150114u, 0x15011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15011Cu;
label_15011c:
    // 0x15011c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15011cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x150120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150124: 0x14430078  bne         $v0, $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x150124u;
    {
        const bool branch_taken_0x150124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x150124) {
            ctx->pc = 0x150308u;
            goto label_150308;
        }
    }
    ctx->pc = 0x15012Cu;
    // 0x15012c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x15012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x150130: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x150130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x150134: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x150134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x150138: 0xc090f80  jal         func_243E00
    ctx->pc = 0x150138u;
    SET_GPR_U32(ctx, 31, 0x150140u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x150138u, 0x150140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150140u;
label_150140:
    // 0x150140: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x150140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x150144: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x150144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x150148: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x150148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15014c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150150: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x150150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150154: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x150154u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x150158: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x150158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15015c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x15015cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x150160: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x150160u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150164: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x150164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x150168: 0x10020035  beq         $zero, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x150168u;
    {
        const bool branch_taken_0x150168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x150168) {
            ctx->pc = 0x150240u;
            goto label_150240;
        }
    }
    ctx->pc = 0x150170u;
    // 0x150170: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x150170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x150174: 0x10020032  beq         $zero, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x150174u;
    {
        const bool branch_taken_0x150174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x150174) {
            ctx->pc = 0x150240u;
            goto label_150240;
        }
    }
    ctx->pc = 0x15017Cu;
    // 0x15017c: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x15017cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x150180: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x150180u;
    {
        const bool branch_taken_0x150180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x150180) {
            ctx->pc = 0x150240u;
            goto label_150240;
        }
    }
    ctx->pc = 0x150188u;
    // 0x150188: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x150188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15018c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x15018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x150190: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150190u;
    {
        const bool branch_taken_0x150190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x150190) {
            ctx->pc = 0x1501B0u;
            goto label_1501b0;
        }
    }
    ctx->pc = 0x150198u;
    // 0x150198: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x150198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15019c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15019cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1501a0: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x1501a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1501a4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1501a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1501a8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1501A8u;
    {
        const bool branch_taken_0x1501a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1501a8) {
            ctx->pc = 0x150200u;
            goto label_150200;
        }
    }
    ctx->pc = 0x1501B0u;
label_1501b0:
    // 0x1501b0: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1501b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1501b4: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x1501b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1501b8: 0x10060007  beq         $zero, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1501B8u;
    {
        const bool branch_taken_0x1501b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        if (branch_taken_0x1501b8) {
            ctx->pc = 0x1501D8u;
            goto label_1501d8;
        }
    }
    ctx->pc = 0x1501C0u;
    // 0x1501c0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1501c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1501c4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1501c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1501c8: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x1501c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1501cc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1501ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1501d0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1501D0u;
    {
        const bool branch_taken_0x1501d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1501d0) {
            ctx->pc = 0x150200u;
            goto label_150200;
        }
    }
    ctx->pc = 0x1501D8u;
label_1501d8:
    // 0x1501d8: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1501d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1501dc: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1501dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1501e0: 0x1005000b  beq         $zero, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1501E0u;
    {
        const bool branch_taken_0x1501e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        if (branch_taken_0x1501e0) {
            ctx->pc = 0x150210u;
            goto label_150210;
        }
    }
    ctx->pc = 0x1501E8u;
    // 0x1501e8: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x1501e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1501ec: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x1501ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1501f0: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x1501f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1501f4: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x1501f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1501f8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1501F8u;
    {
        const bool branch_taken_0x1501f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1501f8) {
            ctx->pc = 0x150210u;
            goto label_150210;
        }
    }
    ctx->pc = 0x150200u;
label_150200:
    // 0x150200: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x150200u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150208: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x150208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15020c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15020cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_150210:
    // 0x150210: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x150210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x150214: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x150214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x150218: 0xc0545bc  jal         func_1516F0
    ctx->pc = 0x150218u;
    SET_GPR_U32(ctx, 31, 0x150220u);
    ctx->pc = 0x1516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1516F0u, 0x150218u, 0x150220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150220u;
label_150220:
    // 0x150220: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x150220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150228: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x150228u;
    {
        const bool branch_taken_0x150228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x150228) {
            ctx->pc = 0x150240u;
            goto label_150240;
        }
    }
    ctx->pc = 0x150230u;
    // 0x150230: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x150230u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150238: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x150238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15023c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x15023cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_150240:
    // 0x150240: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x150240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x150244: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x150244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x150248: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x150248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x15024c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x15024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x150250: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x150250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x150254: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x150254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x150258: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x150258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
    // 0x15025c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150260: 0xa3a200cc  sb          $v0, 0xCC($sp)
    ctx->pc = 0x150260u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 204), (uint8_t)GPR_U32(ctx, 2));
    // 0x150264: 0x8f85ba9c  lw          $a1, -0x4564($gp)
    ctx->pc = 0x150264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x150268: 0x24a60028  addiu       $a2, $a1, 0x28
    ctx->pc = 0x150268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x15026c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15026cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150270: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x150270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x150274: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x150274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150278: 0xc0540f0  jal         func_1503C0
    ctx->pc = 0x150278u;
    SET_GPR_U32(ctx, 31, 0x150280u);
    ctx->pc = 0x1503C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1503C0u, 0x150278u, 0x150280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150280u;
label_150280:
    // 0x150280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x150280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150284: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x150284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x150288: 0xc0540d8  jal         func_150360
    ctx->pc = 0x150288u;
    SET_GPR_U32(ctx, 31, 0x150290u);
    ctx->pc = 0x150360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150360u, 0x150288u, 0x150290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150290u;
label_150290:
    // 0x150290: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x150290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150294: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x150294u;
    {
        const bool branch_taken_0x150294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150294) {
            ctx->pc = 0x1502FCu;
            goto label_1502fc;
        }
    }
    ctx->pc = 0x15029Cu;
label_15029c:
    // 0x15029c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15029cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1502a0: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x1502a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1502a4: 0x8cc500d4  lw          $a1, 0xD4($a2)
    ctx->pc = 0x1502a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x1502a8: 0x10050013  beq         $zero, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1502A8u;
    {
        const bool branch_taken_0x1502a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        if (branch_taken_0x1502a8) {
            ctx->pc = 0x1502F8u;
            goto label_1502f8;
        }
    }
    ctx->pc = 0x1502B0u;
    // 0x1502b0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1502b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1502b4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1502b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1502b8: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x1502b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1502bc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1502bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1502c0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1502c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1502c4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1502c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1502c8: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1502c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1502cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1502ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1502d0: 0xc106598  jal         func_419660
    ctx->pc = 0x1502D0u;
    SET_GPR_U32(ctx, 31, 0x1502D8u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x1502D0u, 0x1502D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502D8u;
label_1502d8:
    // 0x1502d8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1502d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1502dc: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1502dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1502e0: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x1502e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1502e4: 0x553025  or          $a2, $v0, $s5
    ctx->pc = 0x1502e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x1502e8: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x1502e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x1502ec: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x1502ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1502f0: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x1502F0u;
    SET_GPR_U32(ctx, 31, 0x1502F8u);
    ctx->pc = 0x14AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFA0u, 0x1502F0u, 0x1502F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502F8u;
label_1502f8:
    // 0x1502f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1502f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1502fc:
    // 0x1502fc: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1502fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x150300: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x150300u;
    {
        const bool branch_taken_0x150300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150300) {
            ctx->pc = 0x15029Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15029c;
        }
    }
    ctx->pc = 0x150308u;
label_150308:
    // 0x150308: 0x27b300f0  addiu       $s3, $sp, 0xF0
    ctx->pc = 0x150308u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15030c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15030cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150310: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x150310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x150314: 0xc094d94  jal         func_253650
    ctx->pc = 0x150314u;
    SET_GPR_U32(ctx, 31, 0x15031Cu);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x150314u, 0x15031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15031Cu;
label_15031c:
    // 0x15031c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x15031cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_150320:
    // 0x150320: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x150320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x150324: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x150324u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x150328: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x150328u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15032c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15032cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x150330: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x150330u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150334: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x150334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150338: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x150338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15033c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15033cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150348: 0x27bd01f0  addiu       $sp, $sp, 0x1F0
    ctx->pc = 0x150348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x15034c: 0x3e00008  jr          $ra
    ctx->pc = 0x15034Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15034Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150354u;
    // 0x150354: 0x0  nop
    ctx->pc = 0x150354u;
    // NOP
    // 0x150358: 0x0  nop
    ctx->pc = 0x150358u;
    // NOP
    // 0x15035c: 0x0  nop
    ctx->pc = 0x15035cu;
    // NOP
    ctx->pc = 0x150360u;
}
