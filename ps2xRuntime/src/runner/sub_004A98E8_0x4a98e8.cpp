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

// Function: sub_004A98E8
// Address: 0x4a98e8 - 0x4a9b28
void sub_004A98E8_0x4a98e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A98E8_0x4a98e8");
#endif

    switch (ctx->pc) {
        case 0x4a992cu: goto label_4a992c;
        case 0x4a993cu: goto label_4a993c;
        case 0x4a9994u: goto label_4a9994;
        case 0x4a99e4u: goto label_4a99e4;
        case 0x4a99f4u: goto label_4a99f4;
        case 0x4a9a20u: goto label_4a9a20;
        case 0x4a9a44u: goto label_4a9a44;
        case 0x4a9a80u: goto label_4a9a80;
        case 0x4a9a98u: goto label_4a9a98;
        case 0x4a9aacu: goto label_4a9aac;
        case 0x4a9af4u: goto label_4a9af4;
        default: break;
    }

    ctx->pc = 0x4a98e8u;

    // 0x4a98e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4a98e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x4a98ec: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x4a98ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x4a98f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a98f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a98f4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x4a98f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x4a98f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4a98f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4a98fc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x4a98fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x4a9900: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4a9900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9904: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x4a9904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x4a9908: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4a9908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x4a990c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4a990cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9910: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x4a9910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x4a9914: 0x24842930  addiu       $a0, $a0, 0x2930
    ctx->pc = 0x4a9914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10544));
    // 0x4a9918: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4a9918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x4a991c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x4a991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x4a9920: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a9920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4a9924: 0xc1276d6  jal         func_49DB58
    ctx->pc = 0x4A9924u;
    SET_GPR_U32(ctx, 31, 0x4A992Cu);
    ctx->pc = 0x4A9928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9924u;
    // 0x4a9928: 0x149880  sll         $s3, $s4, 2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DB58u, 0x4A9924u, 0x4A992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A992Cu;
label_4a992c:
    // 0x4a992c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x4a992cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x4a9930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a9930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9934: 0xc1276d6  jal         func_49DB58
    ctx->pc = 0x4A9934u;
    SET_GPR_U32(ctx, 31, 0x4A993Cu);
    ctx->pc = 0x4A9938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9934u;
    // 0x4a9938: 0x24842780  addiu       $a0, $a0, 0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DB58u, 0x4A9934u, 0x4A993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A993Cu;
label_4a993c:
    // 0x4a993c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4a993cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9940: 0x26840001  addiu       $a0, $s4, 0x1
    ctx->pc = 0x4a9940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4a9944: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x4a9944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4a9948: 0x96050016  lhu         $a1, 0x16($s0)
    ctx->pc = 0x4a9948u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x4a994c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x4a994cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4a9950: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x4a9950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4a9954: 0x96a20016  lhu         $v0, 0x16($s5)
    ctx->pc = 0x4a9954u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
    // 0x4a9958: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4a9958u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x4a995c: 0x96a60014  lhu         $a2, 0x14($s5)
    ctx->pc = 0x4a995cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x4a9960: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x4a9960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x4a9964: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4a9964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4a9968: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a9968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4a996c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4a996cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4a9970: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4a9970u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x4a9974: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x4a9974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x4a9978: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a9978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a997c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4a997cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4a9980: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a9980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4a9984: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4a9984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4a9988: 0x34a5080d  ori         $a1, $a1, 0x80D
    ctx->pc = 0x4a9988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2061);
    // 0x4a998c: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x4A998Cu;
    SET_GPR_U32(ctx, 31, 0x4A9994u);
    ctx->pc = 0x4A9990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A998Cu;
    // 0x4a9990: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4A998Cu, 0x4A9994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9994u;
label_4a9994:
    // 0x4a9994: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a9994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9998: 0x12400057  beqz        $s2, . + 4 + (0x57 << 2)
    ctx->pc = 0x4A9998u;
    {
        const bool branch_taken_0x4a9998 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9998u;
        // 0x4a999c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9998) {
            ctx->pc = 0x4A9AF8u;
            goto label_4a9af8;
        }
    }
    ctx->pc = 0x4A99A0u;
    // 0x4a99a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a99a4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x4a99a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x4a99a8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4a99a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x4a99ac: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x4a99acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x4a99b0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4a99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4a99b4: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x4a99b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x4a99b8: 0x2442a4c8  addiu       $v0, $v0, -0x5B38
    ctx->pc = 0x4a99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943944));
    // 0x4a99bc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x4a99bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4a99c0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x4a99c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4a99c4: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x4a99c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4a99c8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x4a99c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a99cc: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x4a99ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x4a99d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a99d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a99d4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x4a99d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x4a99d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a99d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a99dc: 0xc1261e6  jal         func_498798
    ctx->pc = 0x4A99DCu;
    SET_GPR_U32(ctx, 31, 0x4A99E4u);
    ctx->pc = 0x4A99E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A99DCu;
    // 0x4a99e0: 0xafb20024  sw          $s2, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498798u, 0x4A99DCu, 0x4A99E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A99E4u;
label_4a99e4:
    // 0x4a99e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A99E4u;
    {
        const bool branch_taken_0x4a99e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A99E4u;
        // 0x4a99e8: 0xaf82b878  sw          $v0, -0x4788($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948984), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a99e4) {
            ctx->pc = 0x4A9A00u;
            goto label_4a9a00;
        }
    }
    ctx->pc = 0x4A99ECu;
    // 0x4a99ec: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4A99ECu;
    SET_GPR_U32(ctx, 31, 0x4A99F4u);
    ctx->pc = 0x4A99F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A99ECu;
    // 0x4a99f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A99ECu, 0x4A99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A99F4u;
label_4a99f4:
    // 0x4a99f4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x4A99F4u;
    {
        const bool branch_taken_0x4a99f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A99F4u;
        // 0x4a99f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a99f4) {
            ctx->pc = 0x4A9AF8u;
            goto label_4a9af8;
        }
    }
    ctx->pc = 0x4A99FCu;
    // 0x4a99fc: 0x0  nop
    ctx->pc = 0x4a99fcu;
    // NOP
label_4a9a00:
    // 0x4a9a00: 0x8fb20030  lw          $s2, 0x30($sp)
    ctx->pc = 0x4a9a00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a9a04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a9a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9a08: 0xaf92c208  sw          $s2, -0x3DF8($gp)
    ctx->pc = 0x4a9a08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951432), GPR_U32(ctx, 18));
    // 0x4a9a0c: 0x1280002e  beqz        $s4, . + 4 + (0x2E << 2)
    ctx->pc = 0x4A9A0Cu;
    {
        const bool branch_taken_0x4a9a0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9A0Cu;
        // 0x4a9a10: 0x2539021  addu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9a0c) {
            ctx->pc = 0x4A9AC8u;
            goto label_4a9ac8;
        }
    }
    ctx->pc = 0x4A9A14u;
    // 0x4a9a14: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4a9a14u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4a9a18: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x4a9a18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4a9a1c: 0x0  nop
    ctx->pc = 0x4a9a1cu;
    // NOP
label_4a9a20:
    // 0x4a9a20: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x4a9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x4a9a24: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x4a9a24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4a9a28: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x4a9a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x4a9a2c: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x4a9a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x4a9a30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a9a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9a34: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4a9a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9a38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a9a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a9a3c: 0xc1261e6  jal         func_498798
    ctx->pc = 0x4A9A3Cu;
    SET_GPR_U32(ctx, 31, 0x4A9A44u);
    ctx->pc = 0x4A9A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9A3Cu;
    // 0x4a9a40: 0xafb20024  sw          $s2, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498798u, 0x4A9A3Cu, 0x4A9A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9A44u;
label_4a9a44:
    // 0x4a9a44: 0x8f83c208  lw          $v1, -0x3DF8($gp)
    ctx->pc = 0x4a9a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951432)));
    // 0x4a9a48: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4a9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4a9a4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a9a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a9a50: 0x8f82c208  lw          $v0, -0x3DF8($gp)
    ctx->pc = 0x4a9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951432)));
    // 0x4a9a54: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x4a9a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4a9a58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a9a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a9a5c: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x4A9A5Cu;
    {
        const bool branch_taken_0x4a9a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9a5c) {
            ctx->pc = 0x4A9A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9A5Cu;
            // 0x4a9a60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9ABCu;
            goto label_4a9abc;
        }
    }
    ctx->pc = 0x4A9A64u;
    // 0x4a9a64: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4a9a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4a9a68: 0x1233000e  beq         $s1, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x4A9A68u;
    {
        const bool branch_taken_0x4a9a68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x4A9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9A68u;
        // 0x4a9a6c: 0x8f84b878  lw          $a0, -0x4788($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9a68) {
            ctx->pc = 0x4A9AA4u;
            goto label_4a9aa4;
        }
    }
    ctx->pc = 0x4A9A70u;
    // 0x4a9a70: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4a9a70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4a9a74: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x4a9a74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a9a78: 0x8f83c208  lw          $v1, -0x3DF8($gp)
    ctx->pc = 0x4a9a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951432)));
    // 0x4a9a7c: 0x0  nop
    ctx->pc = 0x4a9a7cu;
    // NOP
label_4a9a80:
    // 0x4a9a80: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x4a9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4a9a84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a9a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9a88: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4a9a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4a9a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a9a90: 0xc1262a2  jal         func_498A88
    ctx->pc = 0x4A9A90u;
    SET_GPR_U32(ctx, 31, 0x4A9A98u);
    ctx->pc = 0x4A9A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9A90u;
    // 0x4a9a94: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498A88u, 0x4A9A90u, 0x4A9A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9A98u;
label_4a9a98:
    // 0x4a9a98: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4A9A98u;
    {
        const bool branch_taken_0x4a9a98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x4A9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9A98u;
        // 0x4a9a9c: 0x8f83c208  lw          $v1, -0x3DF8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9a98) {
            ctx->pc = 0x4A9A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9a80;
        }
    }
    ctx->pc = 0x4A9AA0u;
    // 0x4a9aa0: 0x8f84b878  lw          $a0, -0x4788($gp)
    ctx->pc = 0x4a9aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
label_4a9aa4:
    // 0x4a9aa4: 0xc1262a2  jal         func_498A88
    ctx->pc = 0x4A9AA4u;
    SET_GPR_U32(ctx, 31, 0x4A9AACu);
    ctx->pc = 0x4A9AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9AA4u;
    // 0x4a9aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498A88u, 0x4A9AA4u, 0x4A9AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9AACu;
label_4a9aac:
    // 0x4a9aac: 0xaf80b87c  sw          $zero, -0x4784($gp)
    ctx->pc = 0x4a9aacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948988), GPR_U32(ctx, 0));
    // 0x4a9ab0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a9ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9ab4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4A9AB4u;
    {
        const bool branch_taken_0x4a9ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9AB4u;
        // 0x4a9ab8: 0xaf80b878  sw          $zero, -0x4788($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948984), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ab4) {
            ctx->pc = 0x4A9AF8u;
            goto label_4a9af8;
        }
    }
    ctx->pc = 0x4A9ABCu;
label_4a9abc:
    // 0x4a9abc: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x4a9abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x4a9ac0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x4A9AC0u;
    {
        const bool branch_taken_0x4a9ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9AC0u;
        // 0x4a9ac4: 0x8fb20030  lw          $s2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ac0) {
            ctx->pc = 0x4A9A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9a20;
        }
    }
    ctx->pc = 0x4A9AC8u;
label_4a9ac8:
    // 0x4a9ac8: 0x8f83c208  lw          $v1, -0x3DF8($gp)
    ctx->pc = 0x4a9ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951432)));
    // 0x4a9acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9ad0: 0x8f84b878  lw          $a0, -0x4788($gp)
    ctx->pc = 0x4a9ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
    // 0x4a9ad4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a9ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4a9ad8: 0xaf82b874  sw          $v0, -0x478C($gp)
    ctx->pc = 0x4a9ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948980), GPR_U32(ctx, 2));
    // 0x4a9adc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a9adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9ae0: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x4a9ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x4a9ae4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x4a9ae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9ae8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4a9ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4a9aec: 0xc1263c0  jal         func_498F00
    ctx->pc = 0x4A9AECu;
    SET_GPR_U32(ctx, 31, 0x4A9AF4u);
    ctx->pc = 0x4A9AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9AECu;
    // 0x4a9af0: 0xaf94b87c  sw          $s4, -0x4784($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948988), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F00u, 0x4A9AECu, 0x4A9AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9AF4u;
label_4a9af4:
    // 0x4a9af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a9af8:
    // 0x4a9af8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x4a9af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4a9afc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x4a9afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4a9b00: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x4a9b00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a9b04: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x4a9b04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a9b08: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x4a9b08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a9b0c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x4a9b0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a9b10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4a9b10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a9b14: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x4a9b14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a9b18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a9b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a9b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9B1Cu;
        // 0x4a9b20: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9B24u;
    // 0x4a9b24: 0x0  nop
    ctx->pc = 0x4a9b24u;
    // NOP
    ctx->pc = 0x4a9b28u;
}
