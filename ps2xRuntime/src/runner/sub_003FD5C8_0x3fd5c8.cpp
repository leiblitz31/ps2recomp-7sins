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

// Function: sub_003FD5C8
// Address: 0x3fd5c8 - 0x3fd970
void sub_003FD5C8_0x3fd5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FD5C8_0x3fd5c8");
#endif

    switch (ctx->pc) {
        case 0x3fd600u: goto label_3fd600;
        case 0x3fd61cu: goto label_3fd61c;
        case 0x3fd644u: goto label_3fd644;
        case 0x3fd688u: goto label_3fd688;
        case 0x3fd6c0u: goto label_3fd6c0;
        case 0x3fd6dcu: goto label_3fd6dc;
        case 0x3fd6f8u: goto label_3fd6f8;
        case 0x3fd718u: goto label_3fd718;
        case 0x3fd748u: goto label_3fd748;
        case 0x3fd768u: goto label_3fd768;
        case 0x3fd788u: goto label_3fd788;
        case 0x3fd7a8u: goto label_3fd7a8;
        case 0x3fd7bcu: goto label_3fd7bc;
        case 0x3fd7f0u: goto label_3fd7f0;
        case 0x3fd80cu: goto label_3fd80c;
        case 0x3fd82cu: goto label_3fd82c;
        case 0x3fd858u: goto label_3fd858;
        case 0x3fd8b0u: goto label_3fd8b0;
        case 0x3fd8bcu: goto label_3fd8bc;
        case 0x3fd920u: goto label_3fd920;
        default: break;
    }

    ctx->pc = 0x3fd5c8u;

    // 0x3fd5c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3fd5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3fd5cc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3fd5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3fd5d0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3fd5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3fd5d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fd5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd5d8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3fd5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3fd5dc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3fd5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3fd5e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3fd5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3fd5e4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3fd5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3fd5e8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3fd5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3fd5ec: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3fd5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3fd5f0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3fd5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3fd5f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fd5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fd5f8: 0xc0ff4d0  jal         func_3FD340
    ctx->pc = 0x3FD5F8u;
    SET_GPR_U32(ctx, 31, 0x3FD600u);
    ctx->pc = 0x3FD5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD5F8u;
    // 0x3fd5fc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD340u, 0x3FD5F8u, 0x3FD600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD600u;
label_3fd600:
    // 0x3fd600: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3fd600u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3fd604: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3fd604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3fd608: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FD608u;
    {
        const bool branch_taken_0x3fd608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD608u;
        // 0x3fd60c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd608) {
            ctx->pc = 0x3FD624u;
            goto label_3fd624;
        }
    }
    ctx->pc = 0x3FD610u;
    // 0x3fd610: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x3fd610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3fd614: 0xc10036c  jal         func_400DB0
    ctx->pc = 0x3FD614u;
    SET_GPR_U32(ctx, 31, 0x3FD61Cu);
    ctx->pc = 0x3FD618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD614u;
    // 0x3fd618: 0x96060024  lhu         $a2, 0x24($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x400DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x400DB0u, 0x3FD614u, 0x3FD61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD61Cu;
label_3fd61c:
    // 0x3fd61c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3FD61Cu;
    {
        const bool branch_taken_0x3fd61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD61Cu;
        // 0x3fd620: 0xde020010  ld          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd61c) {
            ctx->pc = 0x3FD648u;
            goto label_3fd648;
        }
    }
    ctx->pc = 0x3FD624u;
label_3fd624:
    // 0x3fd624: 0x92030029  lbu         $v1, 0x29($s0)
    ctx->pc = 0x3fd624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x3fd628: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3fd628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3fd62c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FD62Cu;
    {
        const bool branch_taken_0x3fd62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fd62c) {
            ctx->pc = 0x3FD630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD62Cu;
            // 0x3fd630: 0xde020010  ld          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD648u;
            goto label_3fd648;
        }
    }
    ctx->pc = 0x3FD634u;
    // 0x3fd634: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fd634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fd638: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fd638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd63c: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FD63Cu;
    SET_GPR_U32(ctx, 31, 0x3FD644u);
    ctx->pc = 0x3FD640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD63Cu;
    // 0x3fd640: 0x24a5fa00  addiu       $a1, $a1, -0x600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FD63Cu, 0x3FD644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD644u;
label_3fd644:
    // 0x3fd644: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3fd644u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_3fd648:
    // 0x3fd648: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3fd648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3fd64c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3FD64Cu;
    {
        const bool branch_taken_0x3fd64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD64Cu;
        // 0x3fd650: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd64c) {
            ctx->pc = 0x3FD6C0u;
            goto label_3fd6c0;
        }
    }
    ctx->pc = 0x3FD654u;
    // 0x3fd654: 0xde620108  ld          $v0, 0x108($s3)
    ctx->pc = 0x3fd654u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 264)));
    // 0x3fd658: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3fd658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3fd65c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3FD65Cu;
    {
        const bool branch_taken_0x3fd65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD65Cu;
        // 0x3fd660: 0x26060060  addiu       $a2, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd65c) {
            ctx->pc = 0x3FD6ACu;
            goto label_3fd6ac;
        }
    }
    ctx->pc = 0x3FD664u;
    // 0x3fd664: 0x92030029  lbu         $v1, 0x29($s0)
    ctx->pc = 0x3fd664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x3fd668: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3fd668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3fd66c: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3FD66Cu;
    {
        const bool branch_taken_0x3fd66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fd66c) {
            ctx->pc = 0x3FD670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD66Cu;
            // 0x3fd670: 0x8e05005c  lw          $a1, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD6B0u;
            goto label_3fd6b0;
        }
    }
    ctx->pc = 0x3FD674u;
    // 0x3fd674: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x3fd674u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x3fd678: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3FD678u;
    {
        const bool branch_taken_0x3fd678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD678u;
        // 0x3fd67c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd678) {
            ctx->pc = 0x3FD6ACu;
            goto label_3fd6ac;
        }
    }
    ctx->pc = 0x3FD680u;
    // 0x3fd680: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3fd680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3fd684: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x3fd684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3fd688:
    // 0x3fd688: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3fd688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3fd68c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3fd68cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3fd690: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fd690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fd694: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3fd694u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3fd698: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3fd698u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fd69c: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x3fd69cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x3fd6a0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3fd6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3fd6a4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3FD6A4u;
    {
        const bool branch_taken_0x3fd6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fd6a4) {
            ctx->pc = 0x3FD6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD6A4u;
            // 0x3fd6a8: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fd688;
        }
    }
    ctx->pc = 0x3FD6ACu;
label_3fd6ac:
    // 0x3fd6ac: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x3fd6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3fd6b0:
    // 0x3fd6b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fd6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd6b4: 0x96070026  lhu         $a3, 0x26($s0)
    ctx->pc = 0x3fd6b4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x3fd6b8: 0xc101cce  jal         func_407338
    ctx->pc = 0x3FD6B8u;
    SET_GPR_U32(ctx, 31, 0x3FD6C0u);
    ctx->pc = 0x3FD6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD6B8u;
    // 0x3fd6bc: 0x92080029  lbu         $t0, 0x29($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x407338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x407338u, 0x3FD6B8u, 0x3FD6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD6C0u;
label_3fd6c0:
    // 0x3fd6c0: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3fd6c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3fd6c4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3fd6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3fd6c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FD6C8u;
    {
        const bool branch_taken_0x3fd6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD6C8u;
        // 0x3fd6cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd6c8) {
            ctx->pc = 0x3FD6DCu;
            goto label_3fd6dc;
        }
    }
    ctx->pc = 0x3FD6D0u;
    // 0x3fd6d0: 0x92060029  lbu         $a2, 0x29($s0)
    ctx->pc = 0x3fd6d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x3fd6d4: 0xc100874  jal         func_4021D0
    ctx->pc = 0x3FD6D4u;
    SET_GPR_U32(ctx, 31, 0x3FD6DCu);
    ctx->pc = 0x3FD6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD6D4u;
    // 0x3fd6d8: 0x2605006a  addiu       $a1, $s0, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 106));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4021D0u, 0x3FD6D4u, 0x3FD6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD6DCu;
label_3fd6dc:
    // 0x3fd6dc: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3fd6dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3fd6e0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3fd6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3fd6e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FD6E4u;
    {
        const bool branch_taken_0x3fd6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD6E4u;
        // 0x3fd6e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd6e4) {
            ctx->pc = 0x3FD6F8u;
            goto label_3fd6f8;
        }
    }
    ctx->pc = 0x3FD6ECu;
    // 0x3fd6ec: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x3fd6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3fd6f0: 0xc1008c2  jal         func_402308
    ctx->pc = 0x3FD6F0u;
    SET_GPR_U32(ctx, 31, 0x3FD6F8u);
    ctx->pc = 0x3FD6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD6F0u;
    // 0x3fd6f4: 0x96060024  lhu         $a2, 0x24($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x402308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x402308u, 0x3FD6F0u, 0x3FD6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD6F8u;
label_3fd6f8:
    // 0x3fd6f8: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3fd6f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3fd6fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3fd6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3fd700: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FD700u;
    {
        const bool branch_taken_0x3fd700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD700u;
        // 0x3fd704: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd700) {
            ctx->pc = 0x3FD718u;
            goto label_3fd718;
        }
    }
    ctx->pc = 0x3FD708u;
    // 0x3fd708: 0xde050078  ld          $a1, 0x78($s0)
    ctx->pc = 0x3fd708u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x3fd70c: 0xde060080  ld          $a2, 0x80($s0)
    ctx->pc = 0x3fd70cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3fd710: 0xc101d1e  jal         func_407478
    ctx->pc = 0x3FD710u;
    SET_GPR_U32(ctx, 31, 0x3FD718u);
    ctx->pc = 0x3FD714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD710u;
    // 0x3fd714: 0x92070088  lbu         $a3, 0x88($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x407478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x407478u, 0x3FD710u, 0x3FD718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD718u;
label_3fd718:
    // 0x3fd718: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3fd718u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3fd71c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3fd71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3fd720: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FD720u;
    {
        const bool branch_taken_0x3fd720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD720u;
        // 0x3fd724: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd720) {
            ctx->pc = 0x3FD748u;
            goto label_3fd748;
        }
    }
    ctx->pc = 0x3FD728u;
    // 0x3fd728: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x3fd728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x3fd72c: 0xde0600d0  ld          $a2, 0xD0($s0)
    ctx->pc = 0x3fd72cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x3fd730: 0xde0700d8  ld          $a3, 0xD8($s0)
    ctx->pc = 0x3fd730u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x3fd734: 0x920800e8  lbu         $t0, 0xE8($s0)
    ctx->pc = 0x3fd734u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x3fd738: 0x920900e9  lbu         $t1, 0xE9($s0)
    ctx->pc = 0x3fd738u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 233)));
    // 0x3fd73c: 0x8e0a00e0  lw          $t2, 0xE0($s0)
    ctx->pc = 0x3fd73cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x3fd740: 0xc100b66  jal         func_402D98
    ctx->pc = 0x3FD740u;
    SET_GPR_U32(ctx, 31, 0x3FD748u);
    ctx->pc = 0x3FD744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD740u;
    // 0x3fd744: 0x8e0b00e4  lw          $t3, 0xE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x402D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x402D98u, 0x3FD740u, 0x3FD748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD748u;
label_3fd748:
    // 0x3fd748: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3fd748u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3fd74c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x3fd74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x3fd750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FD750u;
    {
        const bool branch_taken_0x3fd750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD750u;
        // 0x3fd754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd750) {
            ctx->pc = 0x3FD768u;
            goto label_3fd768;
        }
    }
    ctx->pc = 0x3FD758u;
    // 0x3fd758: 0x92050120  lbu         $a1, 0x120($s0)
    ctx->pc = 0x3fd758u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x3fd75c: 0x8e060138  lw          $a2, 0x138($s0)
    ctx->pc = 0x3fd75cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x3fd760: 0xc100d04  jal         func_403410
    ctx->pc = 0x3FD760u;
    SET_GPR_U32(ctx, 31, 0x3FD768u);
    ctx->pc = 0x3FD764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD760u;
    // 0x3fd764: 0x8e07013c  lw          $a3, 0x13C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x403410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x403410u, 0x3FD760u, 0x3FD768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD768u;
label_3fd768:
    // 0x3fd768: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3fd768u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3fd76c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3fd76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3fd770: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FD770u;
    {
        const bool branch_taken_0x3fd770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD770u;
        // 0x3fd774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd770) {
            ctx->pc = 0x3FD788u;
            goto label_3fd788;
        }
    }
    ctx->pc = 0x3FD778u;
    // 0x3fd778: 0xde050090  ld          $a1, 0x90($s0)
    ctx->pc = 0x3fd778u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x3fd77c: 0xde060098  ld          $a2, 0x98($s0)
    ctx->pc = 0x3fd77cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x3fd780: 0xc101d5e  jal         func_407578
    ctx->pc = 0x3FD780u;
    SET_GPR_U32(ctx, 31, 0x3FD788u);
    ctx->pc = 0x3FD784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD780u;
    // 0x3fd784: 0x920700a0  lbu         $a3, 0xA0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x407578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x407578u, 0x3FD780u, 0x3FD788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD788u;
label_3fd788:
    // 0x3fd788: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3fd788u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3fd78c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3fd78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3fd790: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3FD790u;
    {
        const bool branch_taken_0x3fd790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fd790) {
            ctx->pc = 0x3FD794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD790u;
            // 0x3fd794: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD7D0u;
            goto label_3fd7d0;
        }
    }
    ctx->pc = 0x3FD798u;
    // 0x3fd798: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x3fd798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x3fd79c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3FD79Cu;
    {
        const bool branch_taken_0x3fd79c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3FD7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD79Cu;
        // 0x3fd7a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd79c) {
            ctx->pc = 0x3FD7CCu;
            goto label_3fd7cc;
        }
    }
    ctx->pc = 0x3FD7A4u;
    // 0x3fd7a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3fd7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fd7a8:
    // 0x3fd7a8: 0x8e050114  lw          $a1, 0x114($s0)
    ctx->pc = 0x3fd7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x3fd7ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fd7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd7b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3fd7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3fd7b4: 0xc100518  jal         func_401460
    ctx->pc = 0x3FD7B4u;
    SET_GPR_U32(ctx, 31, 0x3FD7BCu);
    ctx->pc = 0x3FD7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD7B4u;
    // 0x3fd7b8: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x401460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x401460u, 0x3FD7B4u, 0x3FD7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD7BCu;
label_3fd7bc:
    // 0x3fd7bc: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x3fd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x3fd7c0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3fd7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3fd7c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3FD7C4u;
    {
        const bool branch_taken_0x3fd7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD7C4u;
        // 0x3fd7c8: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd7c4) {
            ctx->pc = 0x3FD7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fd7a8;
        }
    }
    ctx->pc = 0x3FD7CCu;
label_3fd7cc:
    // 0x3fd7cc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x3fd7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_3fd7d0:
    // 0x3fd7d0: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3FD7D0u;
    {
        const bool branch_taken_0x3fd7d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3FD7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD7D0u;
        // 0x3fd7d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd7d0) {
            ctx->pc = 0x3FD878u;
            goto label_3fd878;
        }
    }
    ctx->pc = 0x3FD7D8u;
    // 0x3fd7d8: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x3fd7d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    // 0x3fd7dc: 0x2414fffd  addiu       $s4, $zero, -0x3
    ctx->pc = 0x3fd7dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3fd7e0: 0x2416fffe  addiu       $s6, $zero, -0x2
    ctx->pc = 0x3fd7e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3fd7e4: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x3fd7e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3fd7e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3fd7e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd7ec: 0x0  nop
    ctx->pc = 0x3fd7ecu;
    // NOP
label_3fd7f0:
    // 0x3fd7f0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x3fd7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3fd7f4: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x3fd7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3fd7f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3fd7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fd7fc: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FD7FCu;
    {
        const bool branch_taken_0x3fd7fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3FD800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD7FCu;
        // 0x3fd800: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd7fc) {
            ctx->pc = 0x3FD814u;
            goto label_3fd814;
        }
    }
    ctx->pc = 0x3FD804u;
    // 0x3fd804: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FD804u;
    SET_GPR_U32(ctx, 31, 0x3FD80Cu);
    ctx->pc = 0x3FD808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD804u;
    // 0x3fd808: 0x26e5fa30  addiu       $a1, $s7, -0x5D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FD804u, 0x3FD80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD80Cu;
label_3fd80c:
    // 0x3fd80c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3FD80Cu;
    {
        const bool branch_taken_0x3fd80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD80Cu;
        // 0x3fd810: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd80c) {
            ctx->pc = 0x3FD85Cu;
            goto label_3fd85c;
        }
    }
    ctx->pc = 0x3FD814u;
label_3fd814:
    // 0x3fd814: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FD814u;
    {
        const bool branch_taken_0x3fd814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FD818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD814u;
        // 0x3fd818: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd814) {
            ctx->pc = 0x3FD83Cu;
            goto label_3fd83c;
        }
    }
    ctx->pc = 0x3FD81Cu;
    // 0x3fd81c: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x3fd81cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3fd820: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x3fd820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3fd824: 0xc100a96  jal         func_402A58
    ctx->pc = 0x3FD824u;
    SET_GPR_U32(ctx, 31, 0x3FD82Cu);
    ctx->pc = 0x3FD828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD824u;
    // 0x3fd828: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x402A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x402A58u, 0x3FD824u, 0x3FD82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD82Cu;
label_3fd82c:
    // 0x3fd82c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x3fd82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3fd830: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3fd830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3fd834: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3FD834u;
    {
        const bool branch_taken_0x3fd834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD834u;
        // 0x3fd838: 0xac560000  sw          $s6, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd834) {
            ctx->pc = 0x3FD864u;
            goto label_3fd864;
        }
    }
    ctx->pc = 0x3FD83Cu;
label_3fd83c:
    // 0x3fd83c: 0x5455000a  bnel        $v0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x3FD83Cu;
    {
        const bool branch_taken_0x3fd83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x3fd83c) {
            ctx->pc = 0x3FD840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD83Cu;
            // 0x3fd840: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD868u;
            goto label_3fd868;
        }
    }
    ctx->pc = 0x3FD844u;
    // 0x3fd844: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x3fd844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3fd848: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fd848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd84c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x3fd84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3fd850: 0xc100a20  jal         func_402880
    ctx->pc = 0x3FD850u;
    SET_GPR_U32(ctx, 31, 0x3FD858u);
    ctx->pc = 0x3FD854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD850u;
    // 0x3fd854: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x402880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x402880u, 0x3FD850u, 0x3FD858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD858u;
label_3fd858:
    // 0x3fd858: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x3fd858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_3fd85c:
    // 0x3fd85c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3fd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3fd860: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x3fd860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_3fd864:
    // 0x3fd864: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x3fd864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_3fd868:
    // 0x3fd868: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3fd868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3fd86c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3fd86cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3fd870: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3FD870u;
    {
        const bool branch_taken_0x3fd870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FD874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD870u;
        // 0x3fd874: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd870) {
            ctx->pc = 0x3FD7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fd7f0;
        }
    }
    ctx->pc = 0x3FD878u;
label_3fd878:
    // 0x3fd878: 0x8e0300fc  lw          $v1, 0xFC($s0)
    ctx->pc = 0x3fd878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x3fd87c: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3FD87Cu;
    {
        const bool branch_taken_0x3fd87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD87Cu;
        // 0x3fd880: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd87c) {
            ctx->pc = 0x3FD940u;
            goto label_3fd940;
        }
    }
    ctx->pc = 0x3FD884u;
    // 0x3fd884: 0x8e1200f8  lw          $s2, 0xF8($s0)
    ctx->pc = 0x3fd884u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x3fd888: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3fd888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3fd88c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3fd88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3fd890: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3fd890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3fd894: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3FD894u;
    {
        const bool branch_taken_0x3fd894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD894u;
        // 0x3fd898: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd894) {
            ctx->pc = 0x3FD940u;
            goto label_3fd940;
        }
    }
    ctx->pc = 0x3FD89Cu;
    // 0x3fd89c: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x3fd89cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3fd8a0: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x3fd8a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3fd8a4: 0x3c150001  lui         $s5, 0x1
    ctx->pc = 0x3fd8a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1 << 16));
    // 0x3fd8a8: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x3fd8a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3fd8ac: 0x2651000c  addiu       $s1, $s2, 0xC
    ctx->pc = 0x3fd8acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_3fd8b0:
    // 0x3fd8b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fd8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd8b4: 0xc0f8606  jal         func_3E1818
    ctx->pc = 0x3FD8B4u;
    SET_GPR_U32(ctx, 31, 0x3FD8BCu);
    ctx->pc = 0x3FD8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD8B4u;
    // 0x3fd8b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1818u, 0x3FD8B4u, 0x3FD8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD8BCu;
label_3fd8bc:
    // 0x3fd8bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3fd8bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd8c0: 0x507e0018  beql        $v1, $fp, . + 4 + (0x18 << 2)
    ctx->pc = 0x3FD8C0u;
    {
        const bool branch_taken_0x3fd8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x3fd8c0) {
            ctx->pc = 0x3FD8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD8C0u;
            // 0x3fd8c4: 0x8e0300fc  lw          $v1, 0xFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD924u;
            goto label_3fd924;
        }
    }
    ctx->pc = 0x3FD8C8u;
    // 0x3fd8c8: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x3fd8c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3fd8cc: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3FD8CCu;
    {
        const bool branch_taken_0x3fd8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fd8cc) {
            ctx->pc = 0x3FD8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD8CCu;
            // 0x3fd8d0: 0x8e0300fc  lw          $v1, 0xFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD924u;
            goto label_3fd924;
        }
    }
    ctx->pc = 0x3FD8D4u;
    // 0x3fd8d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3fd8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3fd8d8: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x3fd8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x3fd8dc: 0x54570011  bnel        $v0, $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x3FD8DCu;
    {
        const bool branch_taken_0x3fd8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x3fd8dc) {
            ctx->pc = 0x3FD8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD8DCu;
            // 0x3fd8e0: 0x8e0300fc  lw          $v1, 0xFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD924u;
            goto label_3fd924;
        }
    }
    ctx->pc = 0x3FD8E4u;
    // 0x3fd8e4: 0x9222fff7  lbu         $v0, -0x9($s1)
    ctx->pc = 0x3fd8e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967287)));
    // 0x3fd8e8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3fd8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3fd8ec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FD8ECu;
    {
        const bool branch_taken_0x3fd8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fd8ec) {
            ctx->pc = 0x3FD8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD8ECu;
            // 0x3fd8f0: 0x8e26fffc  lw          $a2, -0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD910u;
            goto label_3fd910;
        }
    }
    ctx->pc = 0x3FD8F4u;
    // 0x3fd8f4: 0x50760006  beql        $v1, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FD8F4u;
    {
        const bool branch_taken_0x3fd8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x3fd8f4) {
            ctx->pc = 0x3FD8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD8F4u;
            // 0x3fd8f8: 0x8e26fffc  lw          $a2, -0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD910u;
            goto label_3fd910;
        }
    }
    ctx->pc = 0x3FD8FCu;
    // 0x3fd8fc: 0xde620100  ld          $v0, 0x100($s3)
    ctx->pc = 0x3fd8fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x3fd900: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x3fd900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x3fd904: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FD904u;
    {
        const bool branch_taken_0x3fd904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fd904) {
            ctx->pc = 0x3FD908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD904u;
            // 0x3fd908: 0x8e0300fc  lw          $v1, 0xFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD924u;
            goto label_3fd924;
        }
    }
    ctx->pc = 0x3FD90Cu;
    // 0x3fd90c: 0x8e26fffc  lw          $a2, -0x4($s1)
    ctx->pc = 0x3fd90cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_3fd910:
    // 0x3fd910: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fd910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd914: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x3fd914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3fd918: 0xc101b80  jal         func_406E00
    ctx->pc = 0x3FD918u;
    SET_GPR_U32(ctx, 31, 0x3FD920u);
    ctx->pc = 0x3FD91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD918u;
    // 0x3fd91c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E00u, 0x3FD918u, 0x3FD920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD920u;
label_3fd920:
    // 0x3fd920: 0x8e0300fc  lw          $v1, 0xFC($s0)
    ctx->pc = 0x3fd920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_3fd924:
    // 0x3fd924: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x3fd924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x3fd928: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x3fd928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x3fd92c: 0x741818  mult        $v1, $v1, $s4
    ctx->pc = 0x3fd92cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3fd930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fd930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3fd934: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3fd934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3fd938: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x3FD938u;
    {
        const bool branch_taken_0x3fd938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD938u;
        // 0x3fd93c: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd938) {
            ctx->pc = 0x3FD8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fd8b0;
        }
    }
    ctx->pc = 0x3FD940u;
label_3fd940:
    // 0x3fd940: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3fd940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3fd944: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3fd944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3fd948: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3fd948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3fd94c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3fd94cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fd950: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3fd950u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fd954: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3fd954u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fd958: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3fd958u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fd95c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3fd95cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fd960: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3fd960u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fd964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fd964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fd968: 0x3e00008  jr          $ra
    ctx->pc = 0x3FD968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FD96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD968u;
        // 0x3fd96c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FD970u;
}
