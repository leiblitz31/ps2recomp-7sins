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

// Function: sub_003E8558
// Address: 0x3e8558 - 0x3e8d30
void sub_003E8558_0x3e8558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8558_0x3e8558");
#endif

    switch (ctx->pc) {
        case 0x3e8698u: goto label_3e8698;
        case 0x3e87b8u: goto label_3e87b8;
        case 0x3e88c0u: goto label_3e88c0;
        case 0x3e8928u: goto label_3e8928;
        case 0x3e8984u: goto label_3e8984;
        case 0x3e89b8u: goto label_3e89b8;
        case 0x3e89e8u: goto label_3e89e8;
        case 0x3e89f8u: goto label_3e89f8;
        case 0x3e8a24u: goto label_3e8a24;
        case 0x3e8a50u: goto label_3e8a50;
        case 0x3e8a80u: goto label_3e8a80;
        case 0x3e8ac0u: goto label_3e8ac0;
        case 0x3e8b48u: goto label_3e8b48;
        case 0x3e8b98u: goto label_3e8b98;
        case 0x3e8bd8u: goto label_3e8bd8;
        case 0x3e8bf4u: goto label_3e8bf4;
        case 0x3e8c38u: goto label_3e8c38;
        case 0x3e8c7cu: goto label_3e8c7c;
        case 0x3e8cc8u: goto label_3e8cc8;
        default: break;
    }

    ctx->pc = 0x3e8558u;

    // 0x3e8558: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3e8558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3e855c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3e855cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8560: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3e8560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3e8564: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3e8564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8568: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3e8568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3e856c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3e856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3e8570: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e8570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e8574: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3e8574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3e8578: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3e8578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3e857c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3e857cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3e8580: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3e8580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3e8584: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3e8584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3e8588: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e8588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e858c: 0x91030010  lbu         $v1, 0x10($t0)
    ctx->pc = 0x3e858cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3e8590: 0x106201db  beq         $v1, $v0, . + 4 + (0x1DB << 2)
    ctx->pc = 0x3E8590u;
    {
        const bool branch_taken_0x3e8590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8590u;
        // 0x3e8594: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8590) {
            ctx->pc = 0x3E8D00u;
            goto label_3e8d00;
        }
    }
    ctx->pc = 0x3E8598u;
    // 0x3e8598: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3e8598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3e859c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e859cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e85a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3E85A0u;
    {
        const bool branch_taken_0x3e85a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E85A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E85A0u;
        // 0x3e85a4: 0xdd090000  ld          $t1, 0x0($t0) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e85a0) {
            ctx->pc = 0x3E85E0u;
            goto label_3e85e0;
        }
    }
    ctx->pc = 0x3E85A8u;
    // 0x3e85a8: 0x91040011  lbu         $a0, 0x11($t0)
    ctx->pc = 0x3e85a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 17)));
    // 0x3e85ac: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3e85acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e85b0: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x3e85b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e85b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3e85b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e85b8: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x3e85b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3e85bc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3e85bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e85c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3e85c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e85c4: 0x90e50002  lbu         $a1, 0x2($a3)
    ctx->pc = 0x3e85c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3e85c8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3e85c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3e85cc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3e85ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3e85d0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3e85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3e85d4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3e85d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3e85d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3E85D8u;
    {
        const bool branch_taken_0x3e85d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E85D8u;
        // 0x3e85dc: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e85d8) {
            ctx->pc = 0x3E85F4u;
            goto label_3e85f4;
        }
    }
    ctx->pc = 0x3E85E0u;
label_3e85e0:
    // 0x3e85e0: 0x91020011  lbu         $v0, 0x11($t0)
    ctx->pc = 0x3e85e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 17)));
    // 0x3e85e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3e85e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e85e8: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x3e85e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3e85ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3e85ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e85f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3e85f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3e85f4:
    // 0x3e85f4: 0x91020010  lbu         $v0, 0x10($t0)
    ctx->pc = 0x3e85f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3e85f8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3e85f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3e85fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E85FCu;
    {
        const bool branch_taken_0x3e85fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E85FCu;
        // 0x3e8600: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e85fc) {
            ctx->pc = 0x3E861Cu;
            goto label_3e861c;
        }
    }
    ctx->pc = 0x3E8604u;
    // 0x3e8604: 0x90e50004  lbu         $a1, 0x4($a3)
    ctx->pc = 0x3e8604u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3e8608: 0x91020011  lbu         $v0, 0x11($t0)
    ctx->pc = 0x3e8608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 17)));
    // 0x3e860c: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x3e860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3e8610: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e8610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3e8614: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3e8614u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3e8618: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3e8618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3e861c:
    // 0x3e861c: 0x1a000031  blez        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3E861Cu;
    {
        const bool branch_taken_0x3e861c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3E8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E861Cu;
        // 0x3e8620: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e861c) {
            ctx->pc = 0x3E86E4u;
            goto label_3e86e4;
        }
    }
    ctx->pc = 0x3E8624u;
    // 0x3e8624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e8624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8628: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3e8628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e862c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E862Cu;
    {
        const bool branch_taken_0x3e862c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E862Cu;
        // 0x3e8630: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e862c) {
            ctx->pc = 0x3E8690u;
            goto label_3e8690;
        }
    }
    ctx->pc = 0x3E8634u;
    // 0x3e8634: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e8634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e8638: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E8638u;
    {
        const bool branch_taken_0x3e8638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8638u;
        // 0x3e863c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8638) {
            ctx->pc = 0x3E8674u;
            goto label_3e8674;
        }
    }
    ctx->pc = 0x3E8640u;
    // 0x3e8640: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E8640u;
    {
        const bool branch_taken_0x3e8640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8640u;
        // 0x3e8644: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8640) {
            ctx->pc = 0x3E865Cu;
            goto label_3e865c;
        }
    }
    ctx->pc = 0x3E8648u;
    // 0x3e8648: 0x5c400002  bgtzl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8648u;
    {
        const bool branch_taken_0x3e8648 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3e8648) {
            ctx->pc = 0x3E864Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8648u;
            // 0x3e864c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8654u;
            goto label_3e8654;
        }
    }
    ctx->pc = 0x3E8650u;
    // 0x3e8650: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e8650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3e8654:
    // 0x3e8654: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3e8654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3e8658: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e8658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3e865c:
    // 0x3e865c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3e865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e8660: 0x5c400002  bgtzl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8660u;
    {
        const bool branch_taken_0x3e8660 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3e8660) {
            ctx->pc = 0x3E8664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8660u;
            // 0x3e8664: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E866Cu;
            goto label_3e866c;
        }
    }
    ctx->pc = 0x3E8668u;
    // 0x3e8668: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3e8668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3e866c:
    // 0x3e866c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3e866cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3e8670: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e8670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3e8674:
    // 0x3e8674: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3e8674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e8678: 0x5c400002  bgtzl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8678u;
    {
        const bool branch_taken_0x3e8678 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3e8678) {
            ctx->pc = 0x3E867Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8678u;
            // 0x3e867c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8684u;
            goto label_3e8684;
        }
    }
    ctx->pc = 0x3E8680u;
    // 0x3e8680: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3e8680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3e8684:
    // 0x3e8684: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e8684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e8688: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E8688u;
    {
        const bool branch_taken_0x3e8688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8688u;
        // 0x3e868c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8688) {
            ctx->pc = 0x3E86E4u;
            goto label_3e86e4;
        }
    }
    ctx->pc = 0x3E8690u;
label_3e8690:
    // 0x3e8690: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3e8690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8694: 0x0  nop
    ctx->pc = 0x3e8694u;
    // NOP
label_3e8698:
    // 0x3e8698: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e8698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e869c: 0x5c400002  bgtzl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E869Cu;
    {
        const bool branch_taken_0x3e869c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3e869c) {
            ctx->pc = 0x3E86A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E869Cu;
            // 0x3e86a0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E86A8u;
            goto label_3e86a8;
        }
    }
    ctx->pc = 0x3E86A4u;
    // 0x3e86a4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3e86a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3e86a8:
    // 0x3e86a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3e86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3e86ac: 0x5c400002  bgtzl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E86ACu;
    {
        const bool branch_taken_0x3e86ac = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3e86ac) {
            ctx->pc = 0x3E86B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E86ACu;
            // 0x3e86b0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E86B8u;
            goto label_3e86b8;
        }
    }
    ctx->pc = 0x3E86B4u;
    // 0x3e86b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3e86b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3e86b8:
    // 0x3e86b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3e86bc: 0x5c400002  bgtzl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E86BCu;
    {
        const bool branch_taken_0x3e86bc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3e86bc) {
            ctx->pc = 0x3E86C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E86BCu;
            // 0x3e86c0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E86C8u;
            goto label_3e86c8;
        }
    }
    ctx->pc = 0x3E86C4u;
    // 0x3e86c4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3e86c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_3e86c8:
    // 0x3e86c8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3e86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3e86cc: 0x5c400002  bgtzl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E86CCu;
    {
        const bool branch_taken_0x3e86cc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3e86cc) {
            ctx->pc = 0x3E86D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E86CCu;
            // 0x3e86d0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E86D8u;
            goto label_3e86d8;
        }
    }
    ctx->pc = 0x3E86D4u;
    // 0x3e86d4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3e86d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_3e86d8:
    // 0x3e86d8: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3e86d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3e86dc: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3E86DCu;
    {
        const bool branch_taken_0x3e86dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86DCu;
        // 0x3e86e0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e86dc) {
            ctx->pc = 0x3E8698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e8698;
        }
    }
    ctx->pc = 0x3E86E4u;
label_3e86e4:
    // 0x3e86e4: 0x12400186  beqz        $s2, . + 4 + (0x186 << 2)
    ctx->pc = 0x3E86E4u;
    {
        const bool branch_taken_0x3e86e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86E4u;
        // 0x3e86e8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e86e4) {
            ctx->pc = 0x3E8D00u;
            goto label_3e8d00;
        }
    }
    ctx->pc = 0x3E86ECu;
    // 0x3e86ec: 0x91030011  lbu         $v1, 0x11($t0)
    ctx->pc = 0x3e86ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 17)));
    // 0x3e86f0: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x3E86F0u;
    {
        const bool branch_taken_0x3e86f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E86F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86F0u;
        // 0x3e86f4: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e86f0) {
            ctx->pc = 0x3E8810u;
            goto label_3e8810;
        }
    }
    ctx->pc = 0x3E86F8u;
    // 0x3e86f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E86F8u;
    {
        const bool branch_taken_0x3e86f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86F8u;
        // 0x3e86fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e86f8) {
            ctx->pc = 0x3E8710u;
            goto label_3e8710;
        }
    }
    ctx->pc = 0x3E8700u;
    // 0x3e8700: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E8700u;
    {
        const bool branch_taken_0x3e8700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8700u;
        // 0x3e8704: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8700) {
            ctx->pc = 0x3E872Cu;
            goto label_3e872c;
        }
    }
    ctx->pc = 0x3E8708u;
    // 0x3e8708: 0x1000017f  b           . + 4 + (0x17F << 2)
    ctx->pc = 0x3E8708u;
    {
        const bool branch_taken_0x3e8708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8708u;
        // 0x3e870c: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8708) {
            ctx->pc = 0x3E8D08u;
            goto label_3e8d08;
        }
    }
    ctx->pc = 0x3E8710u;
label_3e8710:
    // 0x3e8710: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e8710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e8714: 0x10620080  beq         $v1, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x3E8714u;
    {
        const bool branch_taken_0x3e8714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E8718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8714u;
        // 0x3e8718: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8714) {
            ctx->pc = 0x3E8918u;
            goto label_3e8918;
        }
    }
    ctx->pc = 0x3E871Cu;
    // 0x3e871c: 0x106200e4  beq         $v1, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x3E871Cu;
    {
        const bool branch_taken_0x3e871c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E871Cu;
        // 0x3e8720: 0x200802d  daddu       $s0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e871c) {
            ctx->pc = 0x3E8AB0u;
            goto label_3e8ab0;
        }
    }
    ctx->pc = 0x3E8724u;
    // 0x3e8724: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x3E8724u;
    {
        const bool branch_taken_0x3e8724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8724u;
        // 0x3e8728: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8724) {
            ctx->pc = 0x3E8D04u;
            goto label_3e8d04;
        }
    }
    ctx->pc = 0x3E872Cu;
label_3e872c:
    // 0x3e872c: 0xdd090008  ld          $t1, 0x8($t0)
    ctx->pc = 0x3e872cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3e8730: 0x11200173  beqz        $t1, . + 4 + (0x173 << 2)
    ctx->pc = 0x3E8730u;
    {
        const bool branch_taken_0x3e8730 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8730u;
        // 0x3e8734: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8730) {
            ctx->pc = 0x3E8D00u;
            goto label_3e8d00;
        }
    }
    ctx->pc = 0x3E8738u;
    // 0x3e8738: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3e8738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e873c: 0x19200014  blez        $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E873Cu;
    {
        const bool branch_taken_0x3e873c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3E8740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E873Cu;
        // 0x3e8740: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e873c) {
            ctx->pc = 0x3E8790u;
            goto label_3e8790;
        }
    }
    ctx->pc = 0x3E8744u;
    // 0x3e8744: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E8744u;
    {
        const bool branch_taken_0x3e8744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8744u;
        // 0x3e8748: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8744) {
            ctx->pc = 0x3E87B0u;
            goto label_3e87b0;
        }
    }
    ctx->pc = 0x3E874Cu;
    // 0x3e874c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E874Cu;
    {
        const bool branch_taken_0x3e874c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e874c) {
            ctx->pc = 0x3E8750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E874Cu;
            // 0x3e8750: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8794u;
            goto label_3e8794;
        }
    }
    ctx->pc = 0x3E8754u;
    // 0x3e8754: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e8754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e8758: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E8758u;
    {
        const bool branch_taken_0x3e8758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8758) {
            ctx->pc = 0x3E875Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8758u;
            // 0x3e875c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E877Cu;
            goto label_3e877c;
        }
    }
    ctx->pc = 0x3E8760u;
    // 0x3e8760: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x3e8760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3e8764: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x3e8764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3e8768: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3e8768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e876c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3e876cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3e8770: 0x30420055  andi        $v0, $v0, 0x55
    ctx->pc = 0x3e8770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)85);
    // 0x3e8774: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x3e8774u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8778: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e8778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e877c:
    // 0x3e877c: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e877cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3e8780: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3e8780u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3e8784: 0x30420055  andi        $v0, $v0, 0x55
    ctx->pc = 0x3e8784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)85);
    // 0x3e8788: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e8788u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e878c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e878cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3e8790:
    // 0x3e8790: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e8790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e8794:
    // 0x3e8794: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e8794u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3e8798: 0xe9402b  sltu        $t0, $a3, $t1
    ctx->pc = 0x3e8798u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3e879c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3e879cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3e87a0: 0x30420055  andi        $v0, $v0, 0x55
    ctx->pc = 0x3e87a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)85);
    // 0x3e87a4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e87a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e87a8: 0x11000155  beqz        $t0, . + 4 + (0x155 << 2)
    ctx->pc = 0x3E87A8u;
    {
        const bool branch_taken_0x3e87a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E87A8u;
        // 0x3e87ac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e87a8) {
            ctx->pc = 0x3E8D00u;
            goto label_3e8d00;
        }
    }
    ctx->pc = 0x3E87B0u;
label_3e87b0:
    // 0x3e87b0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3e87b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e87b4: 0x0  nop
    ctx->pc = 0x3e87b4u;
    // NOP
label_3e87b8:
    // 0x3e87b8: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x3e87b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e87bc: 0x64e70004  daddiu      $a3, $a3, 0x4
    ctx->pc = 0x3e87bcu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4);
    // 0x3e87c0: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x3e87c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3e87c4: 0xe9402b  sltu        $t0, $a3, $t1
    ctx->pc = 0x3e87c4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3e87c8: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x3e87c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3e87cc: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x3e87ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x3e87d0: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x3e87d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x3e87d4: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x3e87d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3e87d8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3e87d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3e87dc: 0x30a50055  andi        $a1, $a1, 0x55
    ctx->pc = 0x3e87dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)85);
    // 0x3e87e0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3e87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3e87e4: 0x30840055  andi        $a0, $a0, 0x55
    ctx->pc = 0x3e87e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)85);
    // 0x3e87e8: 0x30630055  andi        $v1, $v1, 0x55
    ctx->pc = 0x3e87e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)85);
    // 0x3e87ec: 0x30420055  andi        $v0, $v0, 0x55
    ctx->pc = 0x3e87ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)85);
    // 0x3e87f0: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x3e87f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e87f4: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x3e87f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e87f8: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3e87f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e87fc: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3e87fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8800: 0x1500ffed  bnez        $t0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3E8800u;
    {
        const bool branch_taken_0x3e8800 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8800u;
        // 0x3e8804: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8800) {
            ctx->pc = 0x3E87B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e87b8;
        }
    }
    ctx->pc = 0x3E8808u;
    // 0x3e8808: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x3E8808u;
    {
        const bool branch_taken_0x3e8808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8808u;
        // 0x3e880c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8808) {
            ctx->pc = 0x3E8D04u;
            goto label_3e8d04;
        }
    }
    ctx->pc = 0x3E8810u;
label_3e8810:
    // 0x3e8810: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3e8810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8814: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x3e8814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x3e8818: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x3e8818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3e881c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3e881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3e8820: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x3e8820u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3e8824: 0xa31807  srav        $v1, $v1, $a1
    ctx->pc = 0x3e8824u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x3e8828: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3e8828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3e882c: 0xdd0b0008  ld          $t3, 0x8($t0)
    ctx->pc = 0x3e882cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3e8830: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e8830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3e8834: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e8834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8838: 0x11600131  beqz        $t3, . + 4 + (0x131 << 2)
    ctx->pc = 0x3E8838u;
    {
        const bool branch_taken_0x3e8838 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8838u;
        // 0x3e883c: 0x304900ff  andi        $t1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8838) {
            ctx->pc = 0x3E8D00u;
            goto label_3e8d00;
        }
    }
    ctx->pc = 0x3E8840u;
    // 0x3e8840: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3e8840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8844: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3e8844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8848: 0x19600014  blez        $t3, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E8848u;
    {
        const bool branch_taken_0x3e8848 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3E884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8848u;
        // 0x3e884c: 0x31630003  andi        $v1, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8848) {
            ctx->pc = 0x3E889Cu;
            goto label_3e889c;
        }
    }
    ctx->pc = 0x3E8850u;
    // 0x3e8850: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E8850u;
    {
        const bool branch_taken_0x3e8850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8850u;
        // 0x3e8854: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8850) {
            ctx->pc = 0x3E88BCu;
            goto label_3e88bc;
        }
    }
    ctx->pc = 0x3E8858u;
    // 0x3e8858: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E8858u;
    {
        const bool branch_taken_0x3e8858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8858) {
            ctx->pc = 0x3E885Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8858u;
            // 0x3e885c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E88A0u;
            goto label_3e88a0;
        }
    }
    ctx->pc = 0x3E8860u;
    // 0x3e8860: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e8860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e8864: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E8864u;
    {
        const bool branch_taken_0x3e8864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8864) {
            ctx->pc = 0x3E8868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8864u;
            // 0x3e8868: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8888u;
            goto label_3e8888;
        }
    }
    ctx->pc = 0x3E886Cu;
    // 0x3e886c: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x3e886cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3e8870: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x3e8870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3e8874: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3e8874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e8878: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x3e8878u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x3e887c: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x3e887cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x3e8880: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x3e8880u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8884: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e8884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e8888:
    // 0x3e8888: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e8888u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3e888c: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x3e888cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x3e8890: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x3e8890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x3e8894: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e8894u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8898: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e8898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3e889c:
    // 0x3e889c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e889cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e88a0:
    // 0x3e88a0: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e88a0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3e88a4: 0xeb502b  sltu        $t2, $a3, $t3
    ctx->pc = 0x3e88a4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3e88a8: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x3e88a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x3e88ac: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x3e88acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x3e88b0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e88b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e88b4: 0x11400112  beqz        $t2, . + 4 + (0x112 << 2)
    ctx->pc = 0x3E88B4u;
    {
        const bool branch_taken_0x3e88b4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E88B4u;
        // 0x3e88b8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e88b4) {
            ctx->pc = 0x3E8D00u;
            goto label_3e8d00;
        }
    }
    ctx->pc = 0x3E88BCu;
label_3e88bc:
    // 0x3e88bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3e88bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e88c0:
    // 0x3e88c0: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x3e88c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e88c4: 0x64e70004  daddiu      $a3, $a3, 0x4
    ctx->pc = 0x3e88c4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4);
    // 0x3e88c8: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x3e88c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3e88cc: 0xeb502b  sltu        $t2, $a3, $t3
    ctx->pc = 0x3e88ccu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3e88d0: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x3e88d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3e88d4: 0x1052807  srav        $a1, $a1, $t0
    ctx->pc = 0x3e88d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
    // 0x3e88d8: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x3e88d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x3e88dc: 0x1042007  srav        $a0, $a0, $t0
    ctx->pc = 0x3e88dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
    // 0x3e88e0: 0x1031807  srav        $v1, $v1, $t0
    ctx->pc = 0x3e88e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
    // 0x3e88e4: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x3e88e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x3e88e8: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x3e88e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x3e88ec: 0x1242024  and         $a0, $t1, $a0
    ctx->pc = 0x3e88ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x3e88f0: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x3e88f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x3e88f4: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x3e88f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x3e88f8: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x3e88f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e88fc: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x3e88fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e8900: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3e8900u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8904: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3e8904u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e8908: 0x1540ffed  bnez        $t2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3E8908u;
    {
        const bool branch_taken_0x3e8908 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8908u;
        // 0x3e890c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8908) {
            ctx->pc = 0x3E88C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e88c0;
        }
    }
    ctx->pc = 0x3E8910u;
    // 0x3e8910: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x3E8910u;
    {
        const bool branch_taken_0x3e8910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8910u;
        // 0x3e8914: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8910) {
            ctx->pc = 0x3E8D04u;
            goto label_3e8d04;
        }
    }
    ctx->pc = 0x3E8918u;
label_3e8918:
    // 0x3e8918: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x3e8918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e891c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e891cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8920: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3E8920u;
    SET_GPR_U32(ctx, 31, 0x3E8928u);
    ctx->pc = 0x3E8924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8920u;
    // 0x3e8924: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3E8920u, 0x3E8928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8928u;
label_3e8928:
    // 0x3e8928: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3e8928u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e892c: 0x12e000f4  beqz        $s7, . + 4 + (0xF4 << 2)
    ctx->pc = 0x3E892Cu;
    {
        const bool branch_taken_0x3e892c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E892Cu;
        // 0x3e8930: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e892c) {
            ctx->pc = 0x3E8D00u;
            goto label_3e8d00;
        }
    }
    ctx->pc = 0x3E8934u;
    // 0x3e8934: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x3e8934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8938: 0x1ae0001a  blez        $s7, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E8938u;
    {
        const bool branch_taken_0x3e8938 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3E893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8938u;
        // 0x3e893c: 0x32e30003  andi        $v1, $s7, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8938) {
            ctx->pc = 0x3E89A4u;
            goto label_3e89a4;
        }
    }
    ctx->pc = 0x3E8940u;
    // 0x3e8940: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3E8940u;
    {
        const bool branch_taken_0x3e8940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8940u;
        // 0x3e8944: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8940) {
            ctx->pc = 0x3E89E0u;
            goto label_3e89e0;
        }
    }
    ctx->pc = 0x3E8948u;
    // 0x3e8948: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E8948u;
    {
        const bool branch_taken_0x3e8948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8948) {
            ctx->pc = 0x3E894Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8948u;
            // 0x3e894c: 0x92300000  lbu         $s0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E89A8u;
            goto label_3e89a8;
        }
    }
    ctx->pc = 0x3E8950u;
    // 0x3e8950: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e8950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e8954: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E8954u;
    {
        const bool branch_taken_0x3e8954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8954u;
        // 0x3e8958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8954) {
            ctx->pc = 0x3E8974u;
            goto label_3e8974;
        }
    }
    ctx->pc = 0x3E895Cu;
    // 0x3e895c: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x3e895cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3e8960: 0x26d10001  addiu       $s1, $s6, 0x1
    ctx->pc = 0x3e8960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3e8964: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3e8964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8968: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3e8968u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e896c: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e896cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e8970: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x3e8970u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e8974:
    // 0x3e8974: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e8974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8978: 0x92300000  lbu         $s0, 0x0($s1)
    ctx->pc = 0x3e8978u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e897c: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3E897Cu;
    SET_GPR_U32(ctx, 31, 0x3E8984u);
    ctx->pc = 0x3E8980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E897Cu;
    // 0x3e8980: 0x66940001  daddiu      $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3E897Cu, 0x3E8984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8984u;
label_3e8984:
    // 0x3e8984: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e8984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e8988: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e8988u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e898c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e898cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e8990: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3e8990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3e8994: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e8994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8998: 0x508007  srav        $s0, $s0, $v0
    ctx->pc = 0x3e8998u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e899c: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x3e899cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x3e89a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e89a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3e89a4:
    // 0x3e89a4: 0x92300000  lbu         $s0, 0x0($s1)
    ctx->pc = 0x3e89a4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3e89a8:
    // 0x3e89a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e89a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e89ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e89acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e89b0: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3E89B0u;
    SET_GPR_U32(ctx, 31, 0x3E89B8u);
    ctx->pc = 0x3E89B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E89B0u;
    // 0x3e89b4: 0x66940001  daddiu      $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3E89B0u, 0x3E89B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E89B8u;
label_3e89b8:
    // 0x3e89b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e89b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e89bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e89bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e89c0: 0x297202b  sltu        $a0, $s4, $s7
    ctx->pc = 0x3e89c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x3e89c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e89c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e89c8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3e89c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3e89cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e89d0: 0x508007  srav        $s0, $s0, $v0
    ctx->pc = 0x3e89d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e89d4: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x3e89d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x3e89d8: 0x108000c9  beqz        $a0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x3E89D8u;
    {
        const bool branch_taken_0x3e89d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E89D8u;
        // 0x3e89dc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e89d8) {
            ctx->pc = 0x3E8D00u;
            goto label_3e8d00;
        }
    }
    ctx->pc = 0x3E89E0u;
label_3e89e0:
    // 0x3e89e0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x3e89e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e89e4: 0x0  nop
    ctx->pc = 0x3e89e4u;
    // NOP
label_3e89e8:
    // 0x3e89e8: 0x92700000  lbu         $s0, 0x0($s3)
    ctx->pc = 0x3e89e8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e89ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e89ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e89f0: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3E89F0u;
    SET_GPR_U32(ctx, 31, 0x3E89F8u);
    ctx->pc = 0x3E89F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E89F0u;
    // 0x3e89f4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3E89F0u, 0x3E89F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E89F8u;
label_3e89f8:
    // 0x3e89f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e89f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e89fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e89fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e8a00: 0x92710001  lbu         $s1, 0x1($s3)
    ctx->pc = 0x3e8a00u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x3e8a04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e8a08: 0x66840001  daddiu      $a0, $s4, 0x1
    ctx->pc = 0x3e8a08u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x3e8a0c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3e8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3e8a10: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e8a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8a14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8a18: 0x508007  srav        $s0, $s0, $v0
    ctx->pc = 0x3e8a18u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e8a1c: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3E8A1Cu;
    SET_GPR_U32(ctx, 31, 0x3E8A24u);
    ctx->pc = 0x3E8A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8A1Cu;
    // 0x3e8a20: 0xa2700000  sb          $s0, 0x0($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3E8A1Cu, 0x3E8A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8A24u;
label_3e8a24:
    // 0x3e8a24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e8a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e8a28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e8a28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e8a2c: 0x92720002  lbu         $s2, 0x2($s3)
    ctx->pc = 0x3e8a2cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3e8a30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e8a34: 0x66840002  daddiu      $a0, $s4, 0x2
    ctx->pc = 0x3e8a34u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)2);
    // 0x3e8a38: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3e8a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3e8a3c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e8a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8a40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8a44: 0x518807  srav        $s1, $s1, $v0
    ctx->pc = 0x3e8a44u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e8a48: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3E8A48u;
    SET_GPR_U32(ctx, 31, 0x3E8A50u);
    ctx->pc = 0x3E8A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8A48u;
    // 0x3e8a4c: 0xa2710001  sb          $s1, 0x1($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3E8A48u, 0x3E8A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8A50u;
label_3e8a50:
    // 0x3e8a50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e8a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e8a54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e8a54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e8a58: 0x92700003  lbu         $s0, 0x3($s3)
    ctx->pc = 0x3e8a58u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x3e8a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e8a60: 0x66840003  daddiu      $a0, $s4, 0x3
    ctx->pc = 0x3e8a60u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)3);
    // 0x3e8a64: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3e8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3e8a68: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e8a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8a6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8a70: 0x66940004  daddiu      $s4, $s4, 0x4
    ctx->pc = 0x3e8a70u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)4);
    // 0x3e8a74: 0x529007  srav        $s2, $s2, $v0
    ctx->pc = 0x3e8a74u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e8a78: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3E8A78u;
    SET_GPR_U32(ctx, 31, 0x3E8A80u);
    ctx->pc = 0x3E8A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8A78u;
    // 0x3e8a7c: 0xa2720002  sb          $s2, 0x2($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3E8A78u, 0x3E8A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8A80u;
label_3e8a80:
    // 0x3e8a80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e8a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e8a84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e8a84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e8a88: 0x297202b  sltu        $a0, $s4, $s7
    ctx->pc = 0x3e8a88u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x3e8a8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e8a90: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3e8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3e8a94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8a98: 0x508007  srav        $s0, $s0, $v0
    ctx->pc = 0x3e8a98u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e8a9c: 0xa2700003  sb          $s0, 0x3($s3)
    ctx->pc = 0x3e8a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x3e8aa0: 0x1480ffd1  bnez        $a0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3E8AA0u;
    {
        const bool branch_taken_0x3e8aa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8AA0u;
        // 0x3e8aa4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8aa0) {
            ctx->pc = 0x3E89E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e89e8;
        }
    }
    ctx->pc = 0x3E8AA8u;
    // 0x3e8aa8: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x3E8AA8u;
    {
        const bool branch_taken_0x3e8aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8AA8u;
        // 0x3e8aac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8aa8) {
            ctx->pc = 0x3E8D04u;
            goto label_3e8d04;
        }
    }
    ctx->pc = 0x3E8AB0u;
label_3e8ab0:
    // 0x3e8ab0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3e8ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8ab8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3E8AB8u;
    SET_GPR_U32(ctx, 31, 0x3E8AC0u);
    ctx->pc = 0x3E8ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8AB8u;
    // 0x3e8abc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3E8AB8u, 0x3E8AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8AC0u;
label_3e8ac0:
    // 0x3e8ac0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e8ac0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8ac4: 0x12a0008e  beqz        $s5, . + 4 + (0x8E << 2)
    ctx->pc = 0x3E8AC4u;
    {
        const bool branch_taken_0x3e8ac4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8AC4u;
        // 0x3e8ac8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8ac4) {
            ctx->pc = 0x3E8D00u;
            goto label_3e8d00;
        }
    }
    ctx->pc = 0x3E8ACCu;
    // 0x3e8acc: 0x32a30003  andi        $v1, $s5, 0x3
    ctx->pc = 0x3e8accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
    // 0x3e8ad0: 0x1aa00029  blez        $s5, . + 4 + (0x29 << 2)
    ctx->pc = 0x3E8AD0u;
    {
        const bool branch_taken_0x3e8ad0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x3E8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8AD0u;
        // 0x3e8ad4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8ad0) {
            ctx->pc = 0x3E8B78u;
            goto label_3e8b78;
        }
    }
    ctx->pc = 0x3E8AD8u;
    // 0x3e8ad8: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3E8AD8u;
    {
        const bool branch_taken_0x3e8ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8AD8u;
        // 0x3e8adc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8ad8) {
            ctx->pc = 0x3E8BD0u;
            goto label_3e8bd0;
        }
    }
    ctx->pc = 0x3E8AE0u;
    // 0x3e8ae0: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x3E8AE0u;
    {
        const bool branch_taken_0x3e8ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8ae0) {
            ctx->pc = 0x3E8AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8AE0u;
            // 0x3e8ae4: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8B7Cu;
            goto label_3e8b7c;
        }
    }
    ctx->pc = 0x3E8AE8u;
    // 0x3e8ae8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e8ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e8aec: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E8AECu;
    {
        const bool branch_taken_0x3e8aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8aec) {
            ctx->pc = 0x3E8AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8AECu;
            // 0x3e8af0: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8B2Cu;
            goto label_3e8b2c;
        }
    }
    ctx->pc = 0x3E8AF4u;
    // 0x3e8af4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e8af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e8af8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3e8af8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e8afc: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3e8afcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3e8b00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3e8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8b04: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3e8b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3e8b08: 0x839025  or          $s2, $a0, $v1
    ctx->pc = 0x3e8b08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e8b0c: 0x521007  srav        $v0, $s2, $v0
    ctx->pc = 0x3e8b0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e8b10: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x3e8b10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e8b14: 0x121a02  srl         $v1, $s2, 8
    ctx->pc = 0x3e8b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x3e8b18: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3e8b18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8b1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e8b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e8b20: 0xa0b20000  sb          $s2, 0x0($a1)
    ctx->pc = 0x3e8b20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x3e8b24: 0x24b10001  addiu       $s1, $a1, 0x1
    ctx->pc = 0x3e8b24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e8b28: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3e8b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3e8b2c:
    // 0x3e8b2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e8b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8b30: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3e8b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3e8b34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e8b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8b38: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3e8b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3e8b3c: 0x66730001  daddiu      $s3, $s3, 0x1
    ctx->pc = 0x3e8b3cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)1);
    // 0x3e8b40: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3E8B40u;
    SET_GPR_U32(ctx, 31, 0x3E8B48u);
    ctx->pc = 0x3E8B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8B40u;
    // 0x3e8b44: 0x629025  or          $s2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3E8B40u, 0x3E8B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8B48u;
label_3e8b48:
    // 0x3e8b48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e8b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e8b4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e8b4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e8b50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e8b54: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3e8b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3e8b58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e8b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8b5c: 0x521007  srav        $v0, $s2, $v0
    ctx->pc = 0x3e8b5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e8b60: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x3e8b60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e8b64: 0x121a02  srl         $v1, $s2, 8
    ctx->pc = 0x3e8b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x3e8b68: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3e8b68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8b6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e8b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3e8b70: 0xa2320000  sb          $s2, 0x0($s1)
    ctx->pc = 0x3e8b70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x3e8b74: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e8b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3e8b78:
    // 0x3e8b78: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3e8b78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3e8b7c:
    // 0x3e8b7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e8b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8b80: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3e8b80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3e8b84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e8b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8b88: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3e8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3e8b8c: 0x66730001  daddiu      $s3, $s3, 0x1
    ctx->pc = 0x3e8b8cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)1);
    // 0x3e8b90: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3E8B90u;
    SET_GPR_U32(ctx, 31, 0x3E8B98u);
    ctx->pc = 0x3E8B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8B90u;
    // 0x3e8b94: 0x629025  or          $s2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3E8B90u, 0x3E8B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8B98u;
label_3e8b98:
    // 0x3e8b98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e8b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e8b9c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e8b9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e8ba0: 0x275202b  sltu        $a0, $s3, $s5
    ctx->pc = 0x3e8ba0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x3e8ba4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e8ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e8ba8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3e8ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3e8bac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e8bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8bb0: 0x521007  srav        $v0, $s2, $v0
    ctx->pc = 0x3e8bb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e8bb4: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x3e8bb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e8bb8: 0x121a02  srl         $v1, $s2, 8
    ctx->pc = 0x3e8bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x3e8bbc: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3e8bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8bc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e8bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3e8bc4: 0xa2320000  sb          $s2, 0x0($s1)
    ctx->pc = 0x3e8bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x3e8bc8: 0x1080004d  beqz        $a0, . + 4 + (0x4D << 2)
    ctx->pc = 0x3E8BC8u;
    {
        const bool branch_taken_0x3e8bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8BC8u;
        // 0x3e8bcc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8bc8) {
            ctx->pc = 0x3E8D00u;
            goto label_3e8d00;
        }
    }
    ctx->pc = 0x3E8BD0u;
label_3e8bd0:
    // 0x3e8bd0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x3e8bd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8bd4: 0x0  nop
    ctx->pc = 0x3e8bd4u;
    // NOP
label_3e8bd8:
    // 0x3e8bd8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3e8bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e8bdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e8bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8be0: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x3e8be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3e8be4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e8be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8be8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3e8be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3e8bec: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3E8BECu;
    SET_GPR_U32(ctx, 31, 0x3E8BF4u);
    ctx->pc = 0x3E8BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8BECu;
    // 0x3e8bf0: 0x629025  or          $s2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3E8BECu, 0x3E8BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8BF4u;
label_3e8bf4:
    // 0x3e8bf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e8bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e8bf8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e8bf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e8bfc: 0x92260002  lbu         $a2, 0x2($s1)
    ctx->pc = 0x3e8bfcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3e8c00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e8c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e8c04: 0x66640001  daddiu      $a0, $s3, 0x1
    ctx->pc = 0x3e8c04u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)1);
    // 0x3e8c08: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3e8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3e8c0c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x3e8c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x3e8c10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8c14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e8c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8c18: 0x521007  srav        $v0, $s2, $v0
    ctx->pc = 0x3e8c18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e8c1c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x3e8c1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e8c20: 0x121a02  srl         $v1, $s2, 8
    ctx->pc = 0x3e8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x3e8c24: 0xa2320001  sb          $s2, 0x1($s1)
    ctx->pc = 0x3e8c24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x3e8c28: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3e8c28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8c2c: 0x92820003  lbu         $v0, 0x3($s4)
    ctx->pc = 0x3e8c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x3e8c30: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3E8C30u;
    SET_GPR_U32(ctx, 31, 0x3E8C38u);
    ctx->pc = 0x3E8C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8C30u;
    // 0x3e8c34: 0x469025  or          $s2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3E8C30u, 0x3E8C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8C38u;
label_3e8c38:
    // 0x3e8c38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e8c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e8c3c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e8c3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e8c40: 0x92260004  lbu         $a2, 0x4($s1)
    ctx->pc = 0x3e8c40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e8c44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e8c48: 0x66640002  daddiu      $a0, $s3, 0x2
    ctx->pc = 0x3e8c48u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)2);
    // 0x3e8c4c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3e8c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3e8c50: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x3e8c50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x3e8c54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e8c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8c58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e8c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8c5c: 0x521007  srav        $v0, $s2, $v0
    ctx->pc = 0x3e8c5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e8c60: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x3e8c60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e8c64: 0x121a02  srl         $v1, $s2, 8
    ctx->pc = 0x3e8c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x3e8c68: 0xa2320003  sb          $s2, 0x3($s1)
    ctx->pc = 0x3e8c68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x3e8c6c: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x3e8c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8c70: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x3e8c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x3e8c74: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3E8C74u;
    SET_GPR_U32(ctx, 31, 0x3E8C7Cu);
    ctx->pc = 0x3E8C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8C74u;
    // 0x3e8c78: 0x469025  or          $s2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3E8C74u, 0x3E8C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8C7Cu;
label_3e8c7c:
    // 0x3e8c7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e8c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e8c80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e8c80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e8c84: 0x92260006  lbu         $a2, 0x6($s1)
    ctx->pc = 0x3e8c84u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3e8c88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e8c8c: 0x66640003  daddiu      $a0, $s3, 0x3
    ctx->pc = 0x3e8c8cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)3);
    // 0x3e8c90: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3e8c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3e8c94: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x3e8c94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x3e8c98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8c9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e8c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8ca0: 0x66730004  daddiu      $s3, $s3, 0x4
    ctx->pc = 0x3e8ca0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)4);
    // 0x3e8ca4: 0x521007  srav        $v0, $s2, $v0
    ctx->pc = 0x3e8ca4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e8ca8: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x3e8ca8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e8cac: 0x121a02  srl         $v1, $s2, 8
    ctx->pc = 0x3e8cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x3e8cb0: 0xa2320005  sb          $s2, 0x5($s1)
    ctx->pc = 0x3e8cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 18));
    // 0x3e8cb4: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x3e8cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8cb8: 0x92820007  lbu         $v0, 0x7($s4)
    ctx->pc = 0x3e8cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7)));
    // 0x3e8cbc: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x3e8cbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x3e8cc0: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x3E8CC0u;
    SET_GPR_U32(ctx, 31, 0x3E8CC8u);
    ctx->pc = 0x3E8CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8CC0u;
    // 0x3e8cc4: 0x469025  or          $s2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x3E8CC0u, 0x3E8CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8CC8u;
label_3e8cc8:
    // 0x3e8cc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e8cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e8ccc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e8cccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e8cd0: 0x275202b  sltu        $a0, $s3, $s5
    ctx->pc = 0x3e8cd0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x3e8cd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e8cd8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3e8cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3e8cdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8ce0: 0x521007  srav        $v0, $s2, $v0
    ctx->pc = 0x3e8ce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e8ce4: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x3e8ce4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e8ce8: 0x121a02  srl         $v1, $s2, 8
    ctx->pc = 0x3e8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x3e8cec: 0xa2230006  sb          $v1, 0x6($s1)
    ctx->pc = 0x3e8cecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8cf0: 0x26310007  addiu       $s1, $s1, 0x7
    ctx->pc = 0x3e8cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x3e8cf4: 0xa2320000  sb          $s2, 0x0($s1)
    ctx->pc = 0x3e8cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x3e8cf8: 0x1480ffb7  bnez        $a0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x3E8CF8u;
    {
        const bool branch_taken_0x3e8cf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8CF8u;
        // 0x3e8cfc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8cf8) {
            ctx->pc = 0x3E8BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e8bd8;
        }
    }
    ctx->pc = 0x3E8D00u;
label_3e8d00:
    // 0x3e8d00: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3e8d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3e8d04:
    // 0x3e8d04: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3e8d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e8d08:
    // 0x3e8d08: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3e8d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e8d0c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3e8d0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e8d10: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3e8d10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e8d14: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3e8d14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e8d18: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3e8d18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e8d1c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3e8d1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e8d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e8d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8d24: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D24u;
        // 0x3e8d28: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8D2Cu;
    // 0x3e8d2c: 0x0  nop
    ctx->pc = 0x3e8d2cu;
    // NOP
    ctx->pc = 0x3e8d30u;
}
