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

// Function: sub_004279A8
// Address: 0x4279a8 - 0x427c18
void sub_004279A8_0x4279a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004279A8_0x4279a8");
#endif

    switch (ctx->pc) {
        case 0x427a54u: goto label_427a54;
        case 0x427a70u: goto label_427a70;
        case 0x427becu: goto label_427bec;
        default: break;
    }

    ctx->pc = 0x4279a8u;

    // 0x4279a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4279a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4279ac: 0x2782beac  addiu       $v0, $gp, -0x4154
    ctx->pc = 0x4279acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950572));
    // 0x4279b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4279b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4279b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4279b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4279b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4279b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4279bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4279bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4279c0: 0x39c9024  and         $s2, $gp, $gp
    ctx->pc = 0x4279c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 28) & GPR_U64(ctx, 28));
    // 0x4279c4: 0x8c5c0000  lw          $gp, 0x0($v0)
    ctx->pc = 0x4279c4u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4279c8: 0x9385bea1  lbu         $a1, -0x415F($gp)
    ctx->pc = 0x4279c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950561)));
    // 0x4279cc: 0x9383ade4  lbu         $v1, -0x521C($gp)
    ctx->pc = 0x4279ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946276)));
    // 0x4279d0: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x4279d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4279d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4279D4u;
    {
        const bool branch_taken_0x4279d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4279D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4279D4u;
        // 0x4279d8: 0x2c6200ff  sltiu       $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4279d4) {
            ctx->pc = 0x4279FCu;
            goto label_4279fc;
        }
    }
    ctx->pc = 0x4279DCu;
    // 0x4279dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4279DCu;
    {
        const bool branch_taken_0x4279dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4279E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4279DCu;
        // 0x4279e0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4279dc) {
            ctx->pc = 0x4279E8u;
            goto label_4279e8;
        }
    }
    ctx->pc = 0x4279E4u;
    // 0x4279e4: 0xa382bea1  sb          $v0, -0x415F($gp)
    ctx->pc = 0x4279e4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950561), (uint8_t)GPR_U32(ctx, 2));
label_4279e8:
    // 0x4279e8: 0x252e024  and         $gp, $s2, $s2
    ctx->pc = 0x4279e8u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 18) & GPR_U64(ctx, 18));
    // 0x4279ec: 0xf  sync
    ctx->pc = 0x4279ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4279f0: 0x42000038  ei
    ctx->pc = 0x4279f0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x4279f4: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x4279F4u;
    {
        const bool branch_taken_0x4279f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4279F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4279F4u;
        // 0x4279f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4279f4) {
            ctx->pc = 0x427BFCu;
            goto label_427bfc;
        }
    }
    ctx->pc = 0x4279FCu;
label_4279fc:
    // 0x4279fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4279fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x427a00: 0x1482007a  bne         $a0, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x427A00u;
    {
        const bool branch_taken_0x427a00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x427a00) {
            ctx->pc = 0x427BECu;
            goto label_427bec;
        }
    }
    ctx->pc = 0x427A08u;
    // 0x427a08: 0x9382be2f  lbu         $v0, -0x41D1($gp)
    ctx->pc = 0x427a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950447)));
    // 0x427a0c: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x427A0Cu;
    {
        const bool branch_taken_0x427a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x427A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427A0Cu;
        // 0x427a10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427a0c) {
            ctx->pc = 0x427BECu;
            goto label_427bec;
        }
    }
    ctx->pc = 0x427A14u;
    // 0x427a14: 0xa380be2f  sb          $zero, -0x41D1($gp)
    ctx->pc = 0x427a14u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950447), (uint8_t)GPR_U32(ctx, 0));
    // 0x427a18: 0xa382bea1  sb          $v0, -0x415F($gp)
    ctx->pc = 0x427a18u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950561), (uint8_t)GPR_U32(ctx, 2));
    // 0x427a1c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x427a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x427a20: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x427a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x427a24: 0x8f90be94  lw          $s0, -0x416C($gp)
    ctx->pc = 0x427a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950548)));
    // 0x427a28: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x427a28u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x427a2c: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x427a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x427a30: 0x30510002  andi        $s1, $v0, 0x2
    ctx->pc = 0x427a30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x427a34: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x427A34u;
    {
        const bool branch_taken_0x427a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x427A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427A34u;
        // 0x427a38: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427a34) {
            ctx->pc = 0x427A5Cu;
            goto label_427a5c;
        }
    }
    ctx->pc = 0x427A3Cu;
    // 0x427a3c: 0x9384be30  lbu         $a0, -0x41D0($gp)
    ctx->pc = 0x427a3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950448)));
    // 0x427a40: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x427a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x427a44: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x427a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x427a48: 0x24840350  addiu       $a0, $a0, 0x350
    ctx->pc = 0x427a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    // 0x427a4c: 0xc0bf116  jal         func_2FC458
    ctx->pc = 0x427A4Cu;
    SET_GPR_U32(ctx, 31, 0x427A54u);
    ctx->pc = 0x427A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427A4Cu;
    // 0x427a50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC458u, 0x427A4Cu, 0x427A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427A54u;
label_427a54:
    // 0x427a54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x427A54u;
    {
        const bool branch_taken_0x427a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427A54u;
        // 0x427a58: 0x9382be30  lbu         $v0, -0x41D0($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427a54) {
            ctx->pc = 0x427A74u;
            goto label_427a74;
        }
    }
    ctx->pc = 0x427A5Cu;
label_427a5c:
    // 0x427a5c: 0x9384be30  lbu         $a0, -0x41D0($gp)
    ctx->pc = 0x427a5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950448)));
    // 0x427a60: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x427a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x427a64: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x427a64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x427a68: 0xc0bf116  jal         func_2FC458
    ctx->pc = 0x427A68u;
    SET_GPR_U32(ctx, 31, 0x427A70u);
    ctx->pc = 0x427A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427A68u;
    // 0x427a6c: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC458u, 0x427A68u, 0x427A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427A70u;
label_427a70:
    // 0x427a70: 0x9382be30  lbu         $v0, -0x41D0($gp)
    ctx->pc = 0x427a70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950448)));
label_427a74:
    // 0x427a74: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x427A74u;
    {
        const bool branch_taken_0x427a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x427a74) {
            ctx->pc = 0x427ABCu;
            goto label_427abc;
        }
    }
    ctx->pc = 0x427A7Cu;
    // 0x427a7c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x427A7Cu;
    {
        const bool branch_taken_0x427a7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x427A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427A7Cu;
        // 0x427a80: 0x3c031200  lui         $v1, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427a7c) {
            ctx->pc = 0x427AA0u;
            goto label_427aa0;
        }
    }
    ctx->pc = 0x427A84u;
    // 0x427a84: 0xde0403b0  ld          $a0, 0x3B0($s0)
    ctx->pc = 0x427a84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x427a88: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x427a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x427a8c: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x427a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x427a90: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x427a90u;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 4));
    // 0x427a94: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x427a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x427a98: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x427A98u;
    {
        const bool branch_taken_0x427a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427A98u;
        // 0x427a9c: 0xde0203b8  ld          $v0, 0x3B8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427a98) {
            ctx->pc = 0x427AF8u;
            goto label_427af8;
        }
    }
    ctx->pc = 0x427AA0u;
label_427aa0:
    // 0x427aa0: 0xde040340  ld          $a0, 0x340($s0)
    ctx->pc = 0x427aa0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x427aa4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x427aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x427aa8: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x427aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x427aac: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x427aacu;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 4));
    // 0x427ab0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x427ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x427ab4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x427AB4u;
    {
        const bool branch_taken_0x427ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427AB4u;
        // 0x427ab8: 0xde020348  ld          $v0, 0x348($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427ab4) {
            ctx->pc = 0x427AF8u;
            goto label_427af8;
        }
    }
    ctx->pc = 0x427ABCu;
label_427abc:
    // 0x427abc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x427ABCu;
    {
        const bool branch_taken_0x427abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x427AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427ABCu;
        // 0x427ac0: 0x3c021200  lui         $v0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427abc) {
            ctx->pc = 0x427AE0u;
            goto label_427ae0;
        }
    }
    ctx->pc = 0x427AC4u;
    // 0x427ac4: 0xde0403a0  ld          $a0, 0x3A0($s0)
    ctx->pc = 0x427ac4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 928)));
    // 0x427ac8: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x427ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x427acc: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x427accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x427ad0: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x427ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x427ad4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x427ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x427ad8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x427AD8u;
    {
        const bool branch_taken_0x427ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427AD8u;
        // 0x427adc: 0xde0203a8  ld          $v0, 0x3A8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427ad8) {
            ctx->pc = 0x427AF8u;
            goto label_427af8;
        }
    }
    ctx->pc = 0x427AE0u;
label_427ae0:
    // 0x427ae0: 0xde040330  ld          $a0, 0x330($s0)
    ctx->pc = 0x427ae0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x427ae4: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x427ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x427ae8: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x427ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x427aec: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x427aecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x427af0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x427af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x427af4: 0xde020338  ld          $v0, 0x338($s0)
    ctx->pc = 0x427af4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 824)));
label_427af8:
    // 0x427af8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x427af8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x427afc: 0x9382be2c  lbu         $v0, -0x41D4($gp)
    ctx->pc = 0x427afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950444)));
    // 0x427b00: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x427B00u;
    {
        const bool branch_taken_0x427b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x427B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427B00u;
        // 0x427b04: 0x9382be30  lbu         $v0, -0x41D0($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427b00) {
            ctx->pc = 0x427B8Cu;
            goto label_427b8c;
        }
    }
    ctx->pc = 0x427B08u;
    // 0x427b08: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x427B08u;
    {
        const bool branch_taken_0x427b08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x427B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427B08u;
        // 0x427b0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427b08) {
            ctx->pc = 0x427B1Cu;
            goto label_427b1c;
        }
    }
    ctx->pc = 0x427B10u;
    // 0x427b10: 0xa380be2d  sb          $zero, -0x41D3($gp)
    ctx->pc = 0x427b10u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950445), (uint8_t)GPR_U32(ctx, 0));
    // 0x427b14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x427B14u;
    {
        const bool branch_taken_0x427b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427B14u;
        // 0x427b18: 0x9382be30  lbu         $v0, -0x41D0($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427b14) {
            ctx->pc = 0x427B24u;
            goto label_427b24;
        }
    }
    ctx->pc = 0x427B1Cu;
label_427b1c:
    // 0x427b1c: 0xa382be2d  sb          $v0, -0x41D3($gp)
    ctx->pc = 0x427b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950445), (uint8_t)GPR_U32(ctx, 2));
    // 0x427b20: 0x9382be30  lbu         $v0, -0x41D0($gp)
    ctx->pc = 0x427b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950448)));
label_427b24:
    // 0x427b24: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x427B24u;
    {
        const bool branch_taken_0x427b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x427B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427B24u;
        // 0x427b28: 0x3a230002  xori        $v1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x427b24) {
            ctx->pc = 0x427B5Cu;
            goto label_427b5c;
        }
    }
    ctx->pc = 0x427B2Cu;
    // 0x427b2c: 0x8e0501f4  lw          $a1, 0x1F4($s0)
    ctx->pc = 0x427b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x427b30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x427b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x427b34: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x427b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x427b38: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x427b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x427b3c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x427b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x427b40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x427b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x427b44: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x427b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x427b48: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x427b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x427b4c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x427b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x427b50: 0xae0501f4  sw          $a1, 0x1F4($s0)
    ctx->pc = 0x427b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 5));
    // 0x427b54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x427B54u;
    {
        const bool branch_taken_0x427b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427B54u;
        // 0x427b58: 0xae040274  sw          $a0, 0x274($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427b54) {
            ctx->pc = 0x427B88u;
            goto label_427b88;
        }
    }
    ctx->pc = 0x427B5Cu;
label_427b5c:
    // 0x427b5c: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x427b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x427b60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x427b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x427b64: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x427b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x427b68: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x427b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x427b6c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x427b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x427b70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x427b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x427b74: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x427b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x427b78: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x427b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x427b7c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x427b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x427b80: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x427b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x427b84: 0xae040104  sw          $a0, 0x104($s0)
    ctx->pc = 0x427b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 4));
label_427b88:
    // 0x427b88: 0x9382be30  lbu         $v0, -0x41D0($gp)
    ctx->pc = 0x427b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950448)));
label_427b8c:
    // 0x427b8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x427b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x427b90: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x427b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x427b94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x427b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x427b98: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x427b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x427b9c: 0x8c4303c0  lw          $v1, 0x3C0($v0)
    ctx->pc = 0x427b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 960)));
    // 0x427ba0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x427BA0u;
    {
        const bool branch_taken_0x427ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x427BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427BA0u;
        // 0x427ba4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427ba0) {
            ctx->pc = 0x427BE4u;
            goto label_427be4;
        }
    }
    ctx->pc = 0x427BA8u;
    // 0x427ba8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x427ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x427bac: 0x3442a030  ori         $v0, $v0, 0xA030
    ctx->pc = 0x427bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41008);
    // 0x427bb0: 0x3484a020  ori         $a0, $a0, 0xA020
    ctx->pc = 0x427bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40992);
    // 0x427bb4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x427bb4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000a030
    // 0x427bb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x427bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x427bbc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x427bbcu;
    runtime->Store32(rdram, ctx, 0x1000A020u, GPR_U32(ctx, 0)); // MMIO: 0x1000a020
    // 0x427bc0: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x427bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x427bc4: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x427bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x427bc8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x427bc8u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 2)); // MMIO: 0x1000a000
    // 0x427bcc: 0xf  sync
    ctx->pc = 0x427bccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x427bd0: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x427bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
    // 0x427bd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x427bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x427bd8: 0xa382be90  sb          $v0, -0x4170($gp)
    ctx->pc = 0x427bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950544), (uint8_t)GPR_U32(ctx, 2));
    // 0x427bdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x427BDCu;
    {
        const bool branch_taken_0x427bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x427bdc) {
            ctx->pc = 0x427BECu;
            goto label_427bec;
        }
    }
    ctx->pc = 0x427BE4u;
label_427be4:
    // 0x427be4: 0xc109d0e  jal         func_427438
    ctx->pc = 0x427BE4u;
    SET_GPR_U32(ctx, 31, 0x427BECu);
    ctx->pc = 0x427BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427BE4u;
    // 0x427be8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427438u, 0x427BE4u, 0x427BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427BECu;
label_427bec:
    // 0x427bec: 0x252e024  and         $gp, $s2, $s2
    ctx->pc = 0x427becu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 18) & GPR_U64(ctx, 18));
    // 0x427bf0: 0xf  sync
    ctx->pc = 0x427bf0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x427bf4: 0x42000038  ei
    ctx->pc = 0x427bf4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x427bf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x427bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_427bfc:
    // 0x427bfc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x427bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x427c00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x427c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x427c04: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x427c04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x427c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x427c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x427c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x427C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x427C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427C0Cu;
        // 0x427c10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x427C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x427C14u;
    // 0x427c14: 0x0  nop
    ctx->pc = 0x427c14u;
    // NOP
    ctx->pc = 0x427c18u;
}
