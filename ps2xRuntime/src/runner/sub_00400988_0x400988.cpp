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

// Function: sub_00400988
// Address: 0x400988 - 0x400db0
void sub_00400988_0x400988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00400988_0x400988");
#endif

    switch (ctx->pc) {
        case 0x400a2cu: goto label_400a2c;
        case 0x400a54u: goto label_400a54;
        case 0x400ab0u: goto label_400ab0;
        case 0x400ad8u: goto label_400ad8;
        case 0x400b04u: goto label_400b04;
        case 0x400b20u: goto label_400b20;
        case 0x400b38u: goto label_400b38;
        case 0x400b50u: goto label_400b50;
        case 0x400b70u: goto label_400b70;
        case 0x400b9cu: goto label_400b9c;
        case 0x400c54u: goto label_400c54;
        case 0x400c64u: goto label_400c64;
        case 0x400c6cu: goto label_400c6c;
        case 0x400d6cu: goto label_400d6c;
        default: break;
    }

    ctx->pc = 0x400988u;

    // 0x400988: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x400988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x40098c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x40098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x400990: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x400990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x400994: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x400994u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400998: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x400998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x40099c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40099cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4009a0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4009a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4009a4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4009a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4009a8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4009a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4009ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4009acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4009b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4009b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4009b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4009b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4009b8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4009b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x4009bc: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x4009bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4009c0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4009c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x4009c4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x4009c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4009c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4009c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4009cc: 0x2ea20007  sltiu       $v0, $s5, 0x7
    ctx->pc = 0x4009ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x4009d0: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x4009D0u;
    {
        const bool branch_taken_0x4009d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4009D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4009D0u;
        // 0x4009d4: 0x140b82d  daddu       $s7, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4009d0) {
            ctx->pc = 0x400B10u;
            goto label_400b10;
        }
    }
    ctx->pc = 0x4009D8u;
    // 0x4009d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4009d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4009dc: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x4009dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x4009e0: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4009e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x4009e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4009e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4009e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4009e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4009ec: 0x800008  jr          $a0
    ctx->pc = 0x4009ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4009F4u: goto label_4009f4;
            case 0x400A34u: goto label_400a34;
            case 0x400A60u: goto label_400a60;
            case 0x400AB8u: goto label_400ab8;
            case 0x400AE4u: goto label_400ae4;
            case 0x400B10u: goto label_400b10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4009ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4009F4u;
label_4009f4:
    // 0x4009f4: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x4009f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4009f8: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x4009f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4009fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4009FCu;
    {
        const bool branch_taken_0x4009fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x400A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4009FCu;
        // 0x400a00: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4009fc) {
            ctx->pc = 0x400A1Cu;
            goto label_400a1c;
        }
    }
    ctx->pc = 0x400A04u;
    // 0x400a04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x400a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x400a08: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x400a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
    // 0x400a0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x400a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x400a10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x400a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x400a14: 0x800008  jr          $a0
    ctx->pc = 0x400A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x400A1Cu: goto label_400a1c;
            case 0x400A98u: goto label_400a98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x400A14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x400A1Cu;
label_400a1c:
    // 0x400a1c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x400a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x400a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400a24: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x400A24u;
    SET_GPR_U32(ctx, 31, 0x400A2Cu);
    ctx->pc = 0x400A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400A24u;
    // 0x400a28: 0x24a5fe20  addiu       $a1, $a1, -0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x400A24u, 0x400A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400A2Cu;
label_400a2c:
    // 0x400a2c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x400A2Cu;
    {
        const bool branch_taken_0x400a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x400a2c) {
            ctx->pc = 0x400B20u;
            goto label_400b20;
        }
    }
    ctx->pc = 0x400A34u;
label_400a34:
    // 0x400a34: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x400a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x400a38: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x400A38u;
    {
        const bool branch_taken_0x400a38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x400A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A38u;
        // 0x400a3c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400a38) {
            ctx->pc = 0x400A54u;
            goto label_400a54;
        }
    }
    ctx->pc = 0x400A40u;
    // 0x400a40: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x400A40u;
    {
        const bool branch_taken_0x400a40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x400A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A40u;
        // 0x400a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400a40) {
            ctx->pc = 0x400A54u;
            goto label_400a54;
        }
    }
    ctx->pc = 0x400A48u;
    // 0x400a48: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x400a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x400a4c: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x400A4Cu;
    SET_GPR_U32(ctx, 31, 0x400A54u);
    ctx->pc = 0x400A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400A4Cu;
    // 0x400a50: 0x24a5fe48  addiu       $a1, $a1, -0x1B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x400A4Cu, 0x400A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400A54u;
label_400a54:
    // 0x400a54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x400a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x400a58: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x400A58u;
    {
        const bool branch_taken_0x400a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x400A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A58u;
        // 0x400a5c: 0xa202020e  sb          $v0, 0x20E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 526), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400a58) {
            ctx->pc = 0x400B20u;
            goto label_400b20;
        }
    }
    ctx->pc = 0x400A60u;
label_400a60:
    // 0x400a60: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x400a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x400a64: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x400A64u;
    {
        const bool branch_taken_0x400a64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x400A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A64u;
        // 0x400a68: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x400a64) {
            ctx->pc = 0x400A98u;
            goto label_400a98;
        }
    }
    ctx->pc = 0x400A6Cu;
    // 0x400a6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x400A6Cu;
    {
        const bool branch_taken_0x400a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x400A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A6Cu;
        // 0x400a70: 0x2a220003  slti        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x400a6c) {
            ctx->pc = 0x400A8Cu;
            goto label_400a8c;
        }
    }
    ctx->pc = 0x400A74u;
    // 0x400a74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x400A74u;
    {
        const bool branch_taken_0x400a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x400A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A74u;
        // 0x400a78: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400a74) {
            ctx->pc = 0x400AA4u;
            goto label_400aa4;
        }
    }
    ctx->pc = 0x400A7Cu;
    // 0x400a7c: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x400A7Cu;
    {
        const bool branch_taken_0x400a7c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x400A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A7Cu;
        // 0x400a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400a7c) {
            ctx->pc = 0x400AA4u;
            goto label_400aa4;
        }
    }
    ctx->pc = 0x400A84u;
    // 0x400a84: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x400A84u;
    {
        const bool branch_taken_0x400a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x400A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A84u;
        // 0x400a88: 0xa202020e  sb          $v0, 0x20E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 526), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400a84) {
            ctx->pc = 0x400B20u;
            goto label_400b20;
        }
    }
    ctx->pc = 0x400A8Cu;
label_400a8c:
    // 0x400a8c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x400a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x400a90: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x400A90u;
    {
        const bool branch_taken_0x400a90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x400A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A90u;
        // 0x400a94: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400a90) {
            ctx->pc = 0x400AA4u;
            goto label_400aa4;
        }
    }
    ctx->pc = 0x400A98u;
label_400a98:
    // 0x400a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x400a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x400a9c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x400A9Cu;
    {
        const bool branch_taken_0x400a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x400AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400A9Cu;
        // 0x400aa0: 0xa202020e  sb          $v0, 0x20E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 526), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400a9c) {
            ctx->pc = 0x400B20u;
            goto label_400b20;
        }
    }
    ctx->pc = 0x400AA4u;
label_400aa4:
    // 0x400aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400aa8: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x400AA8u;
    SET_GPR_U32(ctx, 31, 0x400AB0u);
    ctx->pc = 0x400AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400AA8u;
    // 0x400aac: 0x24a5fe68  addiu       $a1, $a1, -0x198 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x400AA8u, 0x400AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400AB0u;
label_400ab0:
    // 0x400ab0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x400AB0u;
    {
        const bool branch_taken_0x400ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x400ab0) {
            ctx->pc = 0x400B20u;
            goto label_400b20;
        }
    }
    ctx->pc = 0x400AB8u;
label_400ab8:
    // 0x400ab8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x400ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x400abc: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x400ABCu;
    {
        const bool branch_taken_0x400abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x400AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400ABCu;
        // 0x400ac0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400abc) {
            ctx->pc = 0x400AD8u;
            goto label_400ad8;
        }
    }
    ctx->pc = 0x400AC4u;
    // 0x400ac4: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x400AC4u;
    {
        const bool branch_taken_0x400ac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x400AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400AC4u;
        // 0x400ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400ac4) {
            ctx->pc = 0x400AD8u;
            goto label_400ad8;
        }
    }
    ctx->pc = 0x400ACCu;
    // 0x400acc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x400accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x400ad0: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x400AD0u;
    SET_GPR_U32(ctx, 31, 0x400AD8u);
    ctx->pc = 0x400AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400AD0u;
    // 0x400ad4: 0x24a5fe90  addiu       $a1, $a1, -0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x400AD0u, 0x400AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400AD8u;
label_400ad8:
    // 0x400ad8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x400ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x400adc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x400ADCu;
    {
        const bool branch_taken_0x400adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x400AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400ADCu;
        // 0x400ae0: 0xa202020e  sb          $v0, 0x20E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 526), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400adc) {
            ctx->pc = 0x400B20u;
            goto label_400b20;
        }
    }
    ctx->pc = 0x400AE4u;
label_400ae4:
    // 0x400ae4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x400ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x400ae8: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x400AE8u;
    {
        const bool branch_taken_0x400ae8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x400AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400AE8u;
        // 0x400aec: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400ae8) {
            ctx->pc = 0x400B04u;
            goto label_400b04;
        }
    }
    ctx->pc = 0x400AF0u;
    // 0x400af0: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x400AF0u;
    {
        const bool branch_taken_0x400af0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x400AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400AF0u;
        // 0x400af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400af0) {
            ctx->pc = 0x400B04u;
            goto label_400b04;
        }
    }
    ctx->pc = 0x400AF8u;
    // 0x400af8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x400af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x400afc: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x400AFCu;
    SET_GPR_U32(ctx, 31, 0x400B04u);
    ctx->pc = 0x400B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400AFCu;
    // 0x400b00: 0x24a5fec0  addiu       $a1, $a1, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x400AFCu, 0x400B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400B04u;
label_400b04:
    // 0x400b04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x400b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x400b08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x400B08u;
    {
        const bool branch_taken_0x400b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x400B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400B08u;
        // 0x400b0c: 0xa202020e  sb          $v0, 0x20E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 526), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400b08) {
            ctx->pc = 0x400B20u;
            goto label_400b20;
        }
    }
    ctx->pc = 0x400B10u;
label_400b10:
    // 0x400b10: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x400b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x400b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400b18: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x400B18u;
    SET_GPR_U32(ctx, 31, 0x400B20u);
    ctx->pc = 0x400B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400B18u;
    // 0x400b1c: 0x24a5fee8  addiu       $a1, $a1, -0x118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x400B18u, 0x400B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400B20u;
label_400b20:
    // 0x400b20: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x400B20u;
    {
        const bool branch_taken_0x400b20 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x400B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400B20u;
        // 0x400b24: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400b20) {
            ctx->pc = 0x400B38u;
            goto label_400b38;
        }
    }
    ctx->pc = 0x400B28u;
    // 0x400b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400b2c: 0x24a5ff10  addiu       $a1, $a1, -0xF0
    ctx->pc = 0x400b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967056));
    // 0x400b30: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x400B30u;
    SET_GPR_U32(ctx, 31, 0x400B38u);
    ctx->pc = 0x400B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400B30u;
    // 0x400b34: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x400B30u, 0x400B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400B38u;
label_400b38:
    // 0x400b38: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x400B38u;
    {
        const bool branch_taken_0x400b38 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x400B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400B38u;
        // 0x400b3c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400b38) {
            ctx->pc = 0x400B50u;
            goto label_400b50;
        }
    }
    ctx->pc = 0x400B40u;
    // 0x400b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400b44: 0x24a5ff38  addiu       $a1, $a1, -0xC8
    ctx->pc = 0x400b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967096));
    // 0x400b48: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x400B48u;
    SET_GPR_U32(ctx, 31, 0x400B50u);
    ctx->pc = 0x400B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400B48u;
    // 0x400b4c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x400B48u, 0x400B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400B50u;
label_400b50:
    // 0x400b50: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x400b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x400b54: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x400B54u;
    {
        const bool branch_taken_0x400b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400b54) {
            ctx->pc = 0x400B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400B54u;
            // 0x400b58: 0x9202020e  lbu         $v0, 0x20E($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 526)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400B74u;
            goto label_400b74;
        }
    }
    ctx->pc = 0x400B5Cu;
    // 0x400b5c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x400b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x400b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400b64: 0x24a5ff58  addiu       $a1, $a1, -0xA8
    ctx->pc = 0x400b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967128));
    // 0x400b68: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x400B68u;
    SET_GPR_U32(ctx, 31, 0x400B70u);
    ctx->pc = 0x400B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400B68u;
    // 0x400b6c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x400B68u, 0x400B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400B70u;
label_400b70:
    // 0x400b70: 0x9202020e  lbu         $v0, 0x20E($s0)
    ctx->pc = 0x400b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 526)));
label_400b74:
    // 0x400b74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x400b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400b78: 0xa211020b  sb          $s1, 0x20B($s0)
    ctx->pc = 0x400b78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 523), (uint8_t)GPR_U32(ctx, 17));
    // 0x400b7c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x400b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x400b80: 0xa215020a  sb          $s5, 0x20A($s0)
    ctx->pc = 0x400b80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 522), (uint8_t)GPR_U32(ctx, 21));
    // 0x400b84: 0xa2140207  sb          $s4, 0x207($s0)
    ctx->pc = 0x400b84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 519), (uint8_t)GPR_U32(ctx, 20));
    // 0x400b88: 0xfe120178  sd          $s2, 0x178($s0)
    ctx->pc = 0x400b88u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 18));
    // 0x400b8c: 0xfe130180  sd          $s3, 0x180($s0)
    ctx->pc = 0x400b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 19));
    // 0x400b90: 0xa202020d  sb          $v0, 0x20D($s0)
    ctx->pc = 0x400b90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 525), (uint8_t)GPR_U32(ctx, 2));
    // 0x400b94: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x400B94u;
    SET_GPR_U32(ctx, 31, 0x400B9Cu);
    ctx->pc = 0x400B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400B94u;
    // 0x400b98: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x400B94u, 0x400B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400B9Cu;
label_400b9c:
    // 0x400b9c: 0x121e3a  dsrl        $v1, $s2, 24
    ctx->pc = 0x400b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) >> 24);
    // 0x400ba0: 0x12343a  dsrl        $a2, $s2, 16
    ctx->pc = 0x400ba0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) >> 16);
    // 0x400ba4: 0x123a3a  dsrl        $a3, $s2, 8
    ctx->pc = 0x400ba4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) >> 8);
    // 0x400ba8: 0x134e3a  dsrl        $t1, $s3, 24
    ctx->pc = 0x400ba8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 19) >> 24);
    // 0x400bac: 0x13543a  dsrl        $t2, $s3, 16
    ctx->pc = 0x400bacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) >> 16);
    // 0x400bb0: 0x135a3a  dsrl        $t3, $s3, 8
    ctx->pc = 0x400bb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) >> 8);
    // 0x400bb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x400bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x400bb8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x400bb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x400bbc: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x400bbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x400bc0: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x400bc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x400bc4: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x400bc4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x400bc8: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x400bc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x400bcc: 0x324800ff  andi        $t0, $s2, 0xFF
    ctx->pc = 0x400bccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x400bd0: 0x326c00ff  andi        $t4, $s3, 0xFF
    ctx->pc = 0x400bd0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x400bd4: 0x920d020e  lbu         $t5, 0x20E($s0)
    ctx->pc = 0x400bd4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 526)));
    // 0x400bd8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x400bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x400bdc: 0xfe120190  sd          $s2, 0x190($s0)
    ctx->pc = 0x400bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 400), GPR_U64(ctx, 18));
    // 0x400be0: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x400be0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x400be4: 0xa211020c  sb          $s1, 0x20C($s0)
    ctx->pc = 0x400be4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 524), (uint8_t)GPR_U32(ctx, 17));
    // 0x400be8: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x400be8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x400bec: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x400becu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x400bf0: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x400bf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x400bf4: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x400bf4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x400bf8: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x400bf8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x400bfc: 0x318c00ff  andi        $t4, $t4, 0xFF
    ctx->pc = 0x400bfcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x400c00: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x400c00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x400c04: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x400c04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x400c08: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x400c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x400c0c: 0xa3a60001  sb          $a2, 0x1($sp)
    ctx->pc = 0x400c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x400c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400c14: 0xa3a70002  sb          $a3, 0x2($sp)
    ctx->pc = 0x400c14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x400c18: 0x2785ac38  addiu       $a1, $gp, -0x53C8
    ctx->pc = 0x400c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945848));
    // 0x400c1c: 0xa3a80003  sb          $t0, 0x3($sp)
    ctx->pc = 0x400c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x400c20: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x400c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x400c24: 0xa3a90004  sb          $t1, 0x4($sp)
    ctx->pc = 0x400c24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 9));
    // 0x400c28: 0xa3aa0005  sb          $t2, 0x5($sp)
    ctx->pc = 0x400c28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 10));
    // 0x400c2c: 0xa3ab0006  sb          $t3, 0x6($sp)
    ctx->pc = 0x400c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 11));
    // 0x400c30: 0xa3ac0007  sb          $t4, 0x7($sp)
    ctx->pc = 0x400c30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 12));
    // 0x400c34: 0xa3b10008  sb          $s1, 0x8($sp)
    ctx->pc = 0x400c34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x400c38: 0xa3b50009  sb          $s5, 0x9($sp)
    ctx->pc = 0x400c38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 21));
    // 0x400c3c: 0xa3b6000a  sb          $s6, 0xA($sp)
    ctx->pc = 0x400c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 22));
    // 0x400c40: 0xa3b7000b  sb          $s7, 0xB($sp)
    ctx->pc = 0x400c40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 11), (uint8_t)GPR_U32(ctx, 23));
    // 0x400c44: 0xa3b4000c  sb          $s4, 0xC($sp)
    ctx->pc = 0x400c44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 20));
    // 0x400c48: 0xfe020198  sd          $v0, 0x198($s0)
    ctx->pc = 0x400c48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 408), GPR_U64(ctx, 2));
    // 0x400c4c: 0xc101b98  jal         func_406E60
    ctx->pc = 0x400C4Cu;
    SET_GPR_U32(ctx, 31, 0x400C54u);
    ctx->pc = 0x400C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400C4Cu;
    // 0x400c50: 0xa20d020f  sb          $t5, 0x20F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 527), (uint8_t)GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x400C4Cu, 0x400C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400C54u;
label_400c54:
    // 0x400c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400c58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x400c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400c5c: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x400C5Cu;
    SET_GPR_U32(ctx, 31, 0x400C64u);
    ctx->pc = 0x400C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400C5Cu;
    // 0x400c60: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x400C5Cu, 0x400C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400C64u;
label_400c64:
    // 0x400c64: 0xc101bda  jal         func_406F68
    ctx->pc = 0x400C64u;
    SET_GPR_U32(ctx, 31, 0x400C6Cu);
    ctx->pc = 0x400C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400C64u;
    // 0x400c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x400C64u, 0x400C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400C6Cu;
label_400c6c:
    // 0x400c6c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x400c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x400c70: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x400c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x400c74: 0x244216a8  addiu       $v0, $v0, 0x16A8
    ctx->pc = 0x400c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5800));
    // 0x400c78: 0x24631758  addiu       $v1, $v1, 0x1758
    ctx->pc = 0x400c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5976));
    // 0x400c7c: 0x92040209  lbu         $a0, 0x209($s0)
    ctx->pc = 0x400c7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
    // 0x400c80: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x400c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x400c84: 0xae03013c  sw          $v1, 0x13C($s0)
    ctx->pc = 0x400c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 3));
    // 0x400c88: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x400C88u;
    {
        const bool branch_taken_0x400c88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x400C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400C88u;
        // 0x400c8c: 0xae100140  sw          $s0, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400c88) {
            ctx->pc = 0x400CB8u;
            goto label_400cb8;
        }
    }
    ctx->pc = 0x400C90u;
    // 0x400c90: 0x9203020a  lbu         $v1, 0x20A($s0)
    ctx->pc = 0x400c90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
    // 0x400c94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x400c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x400c98: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x400C98u;
    {
        const bool branch_taken_0x400c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x400C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400C98u;
        // 0x400c9c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400c98) {
            ctx->pc = 0x400CB4u;
            goto label_400cb4;
        }
    }
    ctx->pc = 0x400CA0u;
    // 0x400ca0: 0x9202020b  lbu         $v0, 0x20B($s0)
    ctx->pc = 0x400ca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 523)));
    // 0x400ca4: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x400ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x400ca8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x400CA8u;
    {
        const bool branch_taken_0x400ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x400CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400CA8u;
        // 0x400cac: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400ca8) {
            ctx->pc = 0x400CB4u;
            goto label_400cb4;
        }
    }
    ctx->pc = 0x400CB0u;
    // 0x400cb0: 0x240200f8  addiu       $v0, $zero, 0xF8
    ctx->pc = 0x400cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_400cb4:
    // 0x400cb4: 0xa2020209  sb          $v0, 0x209($s0)
    ctx->pc = 0x400cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 521), (uint8_t)GPR_U32(ctx, 2));
label_400cb8:
    // 0x400cb8: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x400cb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x400cbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x400cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x400cc0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x400CC0u;
    {
        const bool branch_taken_0x400cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400cc0) {
            ctx->pc = 0x400CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400CC0u;
            // 0x400cc4: 0xde020100  ld          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400CE8u;
            goto label_400ce8;
        }
    }
    ctx->pc = 0x400CC8u;
    // 0x400cc8: 0x92030209  lbu         $v1, 0x209($s0)
    ctx->pc = 0x400cc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 521)));
    // 0x400ccc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x400cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x400cd0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x400CD0u;
    {
        const bool branch_taken_0x400cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x400CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400CD0u;
        // 0x400cd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400cd0) {
            ctx->pc = 0x400CE0u;
            goto label_400ce0;
        }
    }
    ctx->pc = 0x400CD8u;
    // 0x400cd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x400CD8u;
    {
        const bool branch_taken_0x400cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x400CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400CD8u;
        // 0x400cdc: 0xae020170  sw          $v0, 0x170($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400cd8) {
            ctx->pc = 0x400CE4u;
            goto label_400ce4;
        }
    }
    ctx->pc = 0x400CE0u;
label_400ce0:
    // 0x400ce0: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x400ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
label_400ce4:
    // 0x400ce4: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x400ce4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
label_400ce8:
    // 0x400ce8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x400ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x400cec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x400CECu;
    {
        const bool branch_taken_0x400cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400cec) {
            ctx->pc = 0x400CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400CECu;
            // 0x400cf0: 0xde020100  ld          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400D00u;
            goto label_400d00;
        }
    }
    ctx->pc = 0x400CF4u;
    // 0x400cf4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x400cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x400cf8: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x400cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x400cfc: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x400cfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
label_400d00:
    // 0x400d00: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x400d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x400d04: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x400D04u;
    {
        const bool branch_taken_0x400d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400d04) {
            ctx->pc = 0x400D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400D04u;
            // 0x400d08: 0xde020100  ld          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400D18u;
            goto label_400d18;
        }
    }
    ctx->pc = 0x400D0Cu;
    // 0x400d0c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x400d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x400d10: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x400d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x400d14: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x400d14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
label_400d18:
    // 0x400d18: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x400d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x400d1c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x400D1Cu;
    {
        const bool branch_taken_0x400d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400d1c) {
            ctx->pc = 0x400D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400D1Cu;
            // 0x400d20: 0xde020100  ld          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400D30u;
            goto label_400d30;
        }
    }
    ctx->pc = 0x400D24u;
    // 0x400d24: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x400d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x400d28: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x400d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x400d2c: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x400d2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
label_400d30:
    // 0x400d30: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x400d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x400d34: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x400D34u;
    {
        const bool branch_taken_0x400d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400d34) {
            ctx->pc = 0x400D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400D34u;
            // 0x400d38: 0x8e050160  lw          $a1, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400D48u;
            goto label_400d48;
        }
    }
    ctx->pc = 0x400D3Cu;
    // 0x400d3c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x400d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x400d40: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x400d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x400d44: 0x8e050160  lw          $a1, 0x160($s0)
    ctx->pc = 0x400d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_400d48:
    // 0x400d48: 0x3c0a0061  lui         $t2, 0x61
    ctx->pc = 0x400d48u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)97 << 16));
    // 0x400d4c: 0x8e060164  lw          $a2, 0x164($s0)
    ctx->pc = 0x400d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x400d50: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x400d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x400d54: 0x8e070168  lw          $a3, 0x168($s0)
    ctx->pc = 0x400d54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x400d58: 0x254a9c78  addiu       $t2, $t2, -0x6388
    ctx->pc = 0x400d58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941816));
    // 0x400d5c: 0x8e08016c  lw          $t0, 0x16C($s0)
    ctx->pc = 0x400d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x400d60: 0x240b0048  addiu       $t3, $zero, 0x48
    ctx->pc = 0x400d60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x400d64: 0xc0f5c22  jal         func_3D7088
    ctx->pc = 0x400D64u;
    SET_GPR_U32(ctx, 31, 0x400D6Cu);
    ctx->pc = 0x400D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400D64u;
    // 0x400d68: 0x8e090170  lw          $t1, 0x170($s0) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7088u, 0x400D64u, 0x400D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400D6Cu;
label_400d6c:
    // 0x400d6c: 0x8e040158  lw          $a0, 0x158($s0)
    ctx->pc = 0x400d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x400d70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x400d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x400d74: 0x8e03015c  lw          $v1, 0x15C($s0)
    ctx->pc = 0x400d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x400d78: 0xfe0200f8  sd          $v0, 0xF8($s0)
    ctx->pc = 0x400d78u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 248), GPR_U64(ctx, 2));
    // 0x400d7c: 0xae040120  sw          $a0, 0x120($s0)
    ctx->pc = 0x400d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 4));
    // 0x400d80: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x400d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    // 0x400d84: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x400d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x400d88: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x400d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x400d8c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x400d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x400d90: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x400d90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x400d94: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x400d94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x400d98: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x400d98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x400d9c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x400d9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x400da0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x400da0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x400da4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x400da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x400da8: 0x3e00008  jr          $ra
    ctx->pc = 0x400DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x400DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400DA8u;
        // 0x400dac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x400DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x400DB0u;
}
