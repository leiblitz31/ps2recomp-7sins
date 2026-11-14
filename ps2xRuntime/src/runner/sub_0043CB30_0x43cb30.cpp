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

// Function: sub_0043CB30
// Address: 0x43cb30 - 0x43cfa8
void sub_0043CB30_0x43cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043CB30_0x43cb30");
#endif

    switch (ctx->pc) {
        case 0x43cb88u: goto label_43cb88;
        case 0x43cca4u: goto label_43cca4;
        case 0x43ccd0u: goto label_43ccd0;
        case 0x43cdbcu: goto label_43cdbc;
        case 0x43cdd8u: goto label_43cdd8;
        case 0x43ceb0u: goto label_43ceb0;
        case 0x43ced8u: goto label_43ced8;
        case 0x43cf98u: goto label_43cf98;
        default: break;
    }

    ctx->pc = 0x43cb30u;

    // 0x43cb30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x43cb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x43cb34: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x43cb34u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43cb38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43cb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43cb3c: 0x91e20023  lbu         $v0, 0x23($t7)
    ctx->pc = 0x43cb3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 35)));
    // 0x43cb40: 0x3042006f  andi        $v0, $v0, 0x6F
    ctx->pc = 0x43cb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)111);
    // 0x43cb44: 0x2444ffe0  addiu       $a0, $v0, -0x20
    ctx->pc = 0x43cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x43cb48: 0x2c830026  sltiu       $v1, $a0, 0x26
    ctx->pc = 0x43cb48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)38) ? 1 : 0);
    // 0x43cb4c: 0x10600112  beqz        $v1, . + 4 + (0x112 << 2)
    ctx->pc = 0x43CB4Cu;
    {
        const bool branch_taken_0x43cb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CB4Cu;
        // 0x43cb50: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cb4c) {
            ctx->pc = 0x43CF98u;
            goto label_43cf98;
        }
    }
    ctx->pc = 0x43CB54u;
    // 0x43cb54: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x43cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x43cb58: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x43cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43cb5c: 0x244215c0  addiu       $v0, $v0, 0x15C0
    ctx->pc = 0x43cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5568));
    // 0x43cb60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x43cb64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x43cb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43cb68: 0x800008  jr          $a0
    ctx->pc = 0x43CB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x43CB70u: goto label_43cb70;
            case 0x43CCACu: goto label_43ccac;
            case 0x43CDC4u: goto label_43cdc4;
            case 0x43CEB8u: goto label_43ceb8;
            case 0x43CF98u: goto label_43cf98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CB68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x43CB70u;
label_43cb70:
    // 0x43cb70: 0x8deb0008  lw          $t3, 0x8($t7)
    ctx->pc = 0x43cb70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x43cb74: 0x258d0040  addiu       $t5, $t4, 0x40
    ctx->pc = 0x43cb74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x43cb78: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x43cb78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43cb7c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x43cb7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43cb80: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x43cb80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43cb84: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x43cb84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_43cb88:
    // 0x43cb88: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x43cb88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x43cb8c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x43cb8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x43cb90: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x43cb90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x43cb94: 0x18d302a  slt         $a2, $t4, $t5
    ctx->pc = 0x43cb94u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x43cb98: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x43cb98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x43cb9c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x43cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x43cba0: 0x91450003  lbu         $a1, 0x3($t2)
    ctx->pc = 0x43cba0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x43cba4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43cba8: 0x308403e0  andi        $a0, $a0, 0x3E0
    ctx->pc = 0x43cba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x43cbac: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x43cbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x43cbb0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43cbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43cbb4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x43cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x43cbb8: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x43cbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x43cbbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43cbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43cbc0: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43cbc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43cbc4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43cbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43cbc8: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x43cbc8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x43cbcc: 0x90e30006  lbu         $v1, 0x6($a3)
    ctx->pc = 0x43cbccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x43cbd0: 0x91040005  lbu         $a0, 0x5($t0)
    ctx->pc = 0x43cbd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x43cbd4: 0x91220004  lbu         $v0, 0x4($t1)
    ctx->pc = 0x43cbd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x43cbd8: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x43cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x43cbdc: 0x91450007  lbu         $a1, 0x7($t2)
    ctx->pc = 0x43cbdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 7)));
    // 0x43cbe0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43cbe4: 0x308403e0  andi        $a0, $a0, 0x3E0
    ctx->pc = 0x43cbe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x43cbe8: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x43cbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x43cbec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43cbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43cbf0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x43cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x43cbf4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x43cbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x43cbf8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43cbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43cbfc: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43cbfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43cc00: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43cc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43cc04: 0xa5620002  sh          $v0, 0x2($t3)
    ctx->pc = 0x43cc04u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x43cc08: 0x90e3000a  lbu         $v1, 0xA($a3)
    ctx->pc = 0x43cc08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x43cc0c: 0x91040009  lbu         $a0, 0x9($t0)
    ctx->pc = 0x43cc0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x43cc10: 0x91220008  lbu         $v0, 0x8($t1)
    ctx->pc = 0x43cc10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x43cc14: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x43cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x43cc18: 0x9145000b  lbu         $a1, 0xB($t2)
    ctx->pc = 0x43cc18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 11)));
    // 0x43cc1c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43cc20: 0x308403e0  andi        $a0, $a0, 0x3E0
    ctx->pc = 0x43cc20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x43cc24: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x43cc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x43cc28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43cc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43cc2c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x43cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x43cc30: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x43cc30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x43cc34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43cc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43cc38: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43cc38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43cc3c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43cc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43cc40: 0xa5620004  sh          $v0, 0x4($t3)
    ctx->pc = 0x43cc40u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x43cc44: 0x90e3000e  lbu         $v1, 0xE($a3)
    ctx->pc = 0x43cc44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x43cc48: 0x9104000d  lbu         $a0, 0xD($t0)
    ctx->pc = 0x43cc48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x43cc4c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x43cc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x43cc50: 0x9122000c  lbu         $v0, 0xC($t1)
    ctx->pc = 0x43cc50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x43cc54: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x43cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x43cc58: 0x9145000f  lbu         $a1, 0xF($t2)
    ctx->pc = 0x43cc58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 15)));
    // 0x43cc5c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43cc60: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x43cc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x43cc64: 0x308403e0  andi        $a0, $a0, 0x3E0
    ctx->pc = 0x43cc64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x43cc68: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43cc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43cc6c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x43cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x43cc70: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x43cc70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x43cc74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43cc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43cc78: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43cc78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43cc7c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x43cc7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x43cc80: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43cc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43cc84: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x43cc84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x43cc88: 0xa5620006  sh          $v0, 0x6($t3)
    ctx->pc = 0x43cc88u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x43cc8c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43cc8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43cc90: 0x14c0ffbd  bnez        $a2, . + 4 + (-0x43 << 2)
    ctx->pc = 0x43CC90u;
    {
        const bool branch_taken_0x43cc90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CC90u;
        // 0x43cc94: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cc90) {
            ctx->pc = 0x43CB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43cb88;
        }
    }
    ctx->pc = 0x43CC98u;
    // 0x43cc98: 0x8de40008  lw          $a0, 0x8($t7)
    ctx->pc = 0x43cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x43cc9c: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x43CC9Cu;
    SET_GPR_U32(ctx, 31, 0x43CCA4u);
    ctx->pc = 0x43CCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43CC9Cu;
    // 0x43cca0: 0x2485009f  addiu       $a1, $a0, 0x9F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 159));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x43CC9Cu, 0x43CCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43CCA4u;
label_43cca4:
    // 0x43cca4: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x43CCA4u;
    {
        const bool branch_taken_0x43cca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CCA4u;
        // 0x43cca8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cca4) {
            ctx->pc = 0x43CF9Cu;
            goto label_43cf9c;
        }
    }
    ctx->pc = 0x43CCACu;
label_43ccac:
    // 0x43ccac: 0x3c0d0080  lui         $t5, 0x80
    ctx->pc = 0x43ccacu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)128 << 16));
    // 0x43ccb0: 0x8deb0008  lw          $t3, 0x8($t7)
    ctx->pc = 0x43ccb0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x43ccb4: 0x25980040  addiu       $t8, $t4, 0x40
    ctx->pc = 0x43ccb4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x43ccb8: 0x35ad8081  ori         $t5, $t5, 0x8081
    ctx->pc = 0x43ccb8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32897);
    // 0x43ccbc: 0x3c0eff00  lui         $t6, 0xFF00
    ctx->pc = 0x43ccbcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65280 << 16));
    // 0x43ccc0: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x43ccc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ccc4: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x43ccc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ccc8: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x43ccc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43cccc: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x43ccccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_43ccd0:
    // 0x43ccd0: 0x91440003  lbu         $a0, 0x3($t2)
    ctx->pc = 0x43ccd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x43ccd4: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x43ccd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x43ccd8: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x43ccd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x43ccdc: 0x198302a  slt         $a2, $t4, $t8
    ctx->pc = 0x43ccdcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x43cce0: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x43cce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x43cce4: 0x8d2018  mult        $a0, $a0, $t5
    ctx->pc = 0x43cce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x43cce8: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x43cce8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x43ccec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x43ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x43ccf0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x43ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x43ccf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43ccf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43ccf8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43ccf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43ccfc: 0x8e2024  and         $a0, $a0, $t6
    ctx->pc = 0x43ccfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 14));
    // 0x43cd00: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43cd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43cd04: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x43cd04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x43cd08: 0x91440007  lbu         $a0, 0x7($t2)
    ctx->pc = 0x43cd08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 7)));
    // 0x43cd0c: 0x90e20006  lbu         $v0, 0x6($a3)
    ctx->pc = 0x43cd0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x43cd10: 0x91030005  lbu         $v1, 0x5($t0)
    ctx->pc = 0x43cd10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x43cd14: 0x8d2018  mult        $a0, $a0, $t5
    ctx->pc = 0x43cd14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x43cd18: 0x91250004  lbu         $a1, 0x4($t1)
    ctx->pc = 0x43cd18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x43cd1c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x43cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x43cd20: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x43cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x43cd24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43cd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43cd28: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43cd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43cd2c: 0x8e2024  and         $a0, $a0, $t6
    ctx->pc = 0x43cd2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 14));
    // 0x43cd30: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43cd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43cd34: 0xad620004  sw          $v0, 0x4($t3)
    ctx->pc = 0x43cd34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 2));
    // 0x43cd38: 0x9144000b  lbu         $a0, 0xB($t2)
    ctx->pc = 0x43cd38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 11)));
    // 0x43cd3c: 0x90e2000a  lbu         $v0, 0xA($a3)
    ctx->pc = 0x43cd3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x43cd40: 0x91030009  lbu         $v1, 0x9($t0)
    ctx->pc = 0x43cd40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x43cd44: 0x8d2018  mult        $a0, $a0, $t5
    ctx->pc = 0x43cd44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x43cd48: 0x91250008  lbu         $a1, 0x8($t1)
    ctx->pc = 0x43cd48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x43cd4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x43cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x43cd50: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x43cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x43cd54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43cd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43cd58: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43cd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43cd5c: 0x8e2024  and         $a0, $a0, $t6
    ctx->pc = 0x43cd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 14));
    // 0x43cd60: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43cd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43cd64: 0xad620008  sw          $v0, 0x8($t3)
    ctx->pc = 0x43cd64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 2));
    // 0x43cd68: 0x9144000f  lbu         $a0, 0xF($t2)
    ctx->pc = 0x43cd68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 15)));
    // 0x43cd6c: 0x90e2000e  lbu         $v0, 0xE($a3)
    ctx->pc = 0x43cd6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x43cd70: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x43cd70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x43cd74: 0x9103000d  lbu         $v1, 0xD($t0)
    ctx->pc = 0x43cd74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x43cd78: 0x8d2018  mult        $a0, $a0, $t5
    ctx->pc = 0x43cd78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x43cd7c: 0x9125000c  lbu         $a1, 0xC($t1)
    ctx->pc = 0x43cd7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x43cd80: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x43cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x43cd84: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x43cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x43cd88: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x43cd88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x43cd8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43cd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43cd90: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x43cd90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x43cd94: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43cd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43cd98: 0x8e2024  and         $a0, $a0, $t6
    ctx->pc = 0x43cd98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 14));
    // 0x43cd9c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43cd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43cda0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x43cda0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x43cda4: 0xad62000c  sw          $v0, 0xC($t3)
    ctx->pc = 0x43cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 2));
    // 0x43cda8: 0x14c0ffc9  bnez        $a2, . + 4 + (-0x37 << 2)
    ctx->pc = 0x43CDA8u;
    {
        const bool branch_taken_0x43cda8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CDA8u;
        // 0x43cdac: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cda8) {
            ctx->pc = 0x43CCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ccd0;
        }
    }
    ctx->pc = 0x43CDB0u;
    // 0x43cdb0: 0x8de40008  lw          $a0, 0x8($t7)
    ctx->pc = 0x43cdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x43cdb4: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x43CDB4u;
    SET_GPR_U32(ctx, 31, 0x43CDBCu);
    ctx->pc = 0x43CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43CDB4u;
    // 0x43cdb8: 0x248500bf  addiu       $a1, $a0, 0xBF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 191));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x43CDB4u, 0x43CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43CDBCu;
label_43cdbc:
    // 0x43cdbc: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x43CDBCu;
    {
        const bool branch_taken_0x43cdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CDBCu;
        // 0x43cdc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cdbc) {
            ctx->pc = 0x43CF9Cu;
            goto label_43cf9c;
        }
    }
    ctx->pc = 0x43CDC4u;
label_43cdc4:
    // 0x43cdc4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x43cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x43cdc8: 0x8de90008  lw          $t1, 0x8($t7)
    ctx->pc = 0x43cdc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x43cdcc: 0x244b1470  addiu       $t3, $v0, 0x1470
    ctx->pc = 0x43cdccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 5232));
    // 0x43cdd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x43cdd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43cdd4: 0x0  nop
    ctx->pc = 0x43cdd4u;
    // NOP
label_43cdd8:
    // 0x43cdd8: 0xa1043  sra         $v0, $t2, 1
    ctx->pc = 0x43cdd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), 1));
    // 0x43cddc: 0x25460001  addiu       $a2, $t2, 0x1
    ctx->pc = 0x43cddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x43cde0: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x43cde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x43cde4: 0x314500e7  andi        $a1, $t2, 0xE7
    ctx->pc = 0x43cde4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)231);
    // 0x43cde8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x43cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x43cdec: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x43cdecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x43cdf0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x43cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43cdf4: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x43cdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x43cdf8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x43cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x43cdfc: 0x30c600e7  andi        $a2, $a2, 0xE7
    ctx->pc = 0x43cdfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)231);
    // 0x43ce00: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x43ce00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x43ce04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x43ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43ce08: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x43ce08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x43ce0c: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x43ce0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x43ce10: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x43ce10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x43ce14: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x43ce14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x43ce18: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x43ce18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x43ce1c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x43ce1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x43ce20: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x43ce20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x43ce24: 0x1863021  addu        $a2, $t4, $a2
    ctx->pc = 0x43ce24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x43ce28: 0x90a70003  lbu         $a3, 0x3($a1)
    ctx->pc = 0x43ce28u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x43ce2c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x43ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x43ce30: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x43ce30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43ce34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43ce38: 0x308403e0  andi        $a0, $a0, 0x3E0
    ctx->pc = 0x43ce38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x43ce3c: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x43ce3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x43ce40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43ce40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43ce44: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x43ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x43ce48: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x43ce48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x43ce4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43ce4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43ce50: 0x30e78000  andi        $a3, $a3, 0x8000
    ctx->pc = 0x43ce50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x43ce54: 0x29480100  slti        $t0, $t2, 0x100
    ctx->pc = 0x43ce54u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x43ce58: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x43ce58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x43ce5c: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x43ce5cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x43ce60: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x43ce60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x43ce64: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x43ce64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x43ce68: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x43ce68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x43ce6c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x43ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x43ce70: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x43ce70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x43ce74: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43ce74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43ce78: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x43ce78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x43ce7c: 0x308403e0  andi        $a0, $a0, 0x3E0
    ctx->pc = 0x43ce7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x43ce80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x43ce80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x43ce84: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x43ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x43ce88: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x43ce88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x43ce8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43ce8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43ce90: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x43ce90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x43ce94: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x43ce94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43ce98: 0xa5220002  sh          $v0, 0x2($t1)
    ctx->pc = 0x43ce98u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x43ce9c: 0x1500ffce  bnez        $t0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x43CE9Cu;
    {
        const bool branch_taken_0x43ce9c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CE9Cu;
        // 0x43cea0: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ce9c) {
            ctx->pc = 0x43CDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43cdd8;
        }
    }
    ctx->pc = 0x43CEA4u;
    // 0x43cea4: 0x8de40008  lw          $a0, 0x8($t7)
    ctx->pc = 0x43cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x43cea8: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x43CEA8u;
    SET_GPR_U32(ctx, 31, 0x43CEB0u);
    ctx->pc = 0x43CEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43CEA8u;
    // 0x43ceac: 0x2485027f  addiu       $a1, $a0, 0x27F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 639));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x43CEA8u, 0x43CEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43CEB0u;
label_43ceb0:
    // 0x43ceb0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x43CEB0u;
    {
        const bool branch_taken_0x43ceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CEB0u;
        // 0x43ceb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ceb0) {
            ctx->pc = 0x43CF9Cu;
            goto label_43cf9c;
        }
    }
    ctx->pc = 0x43CEB8u;
label_43ceb8:
    // 0x43ceb8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x43ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x43cebc: 0x3c0b0080  lui         $t3, 0x80
    ctx->pc = 0x43cebcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)128 << 16));
    // 0x43cec0: 0x8de90008  lw          $t1, 0x8($t7)
    ctx->pc = 0x43cec0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x43cec4: 0x244e1470  addiu       $t6, $v0, 0x1470
    ctx->pc = 0x43cec4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 5232));
    // 0x43cec8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x43cec8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43cecc: 0x356b8081  ori         $t3, $t3, 0x8081
    ctx->pc = 0x43ceccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32897);
    // 0x43ced0: 0x3c0dff00  lui         $t5, 0xFF00
    ctx->pc = 0x43ced0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65280 << 16));
    // 0x43ced4: 0x0  nop
    ctx->pc = 0x43ced4u;
    // NOP
label_43ced8:
    // 0x43ced8: 0xa1043  sra         $v0, $t2, 1
    ctx->pc = 0x43ced8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), 1));
    // 0x43cedc: 0x25450001  addiu       $a1, $t2, 0x1
    ctx->pc = 0x43cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x43cee0: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x43cee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x43cee4: 0x314400e7  andi        $a0, $t2, 0xE7
    ctx->pc = 0x43cee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)231);
    // 0x43cee8: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x43cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x43ceec: 0x51843  sra         $v1, $a1, 1
    ctx->pc = 0x43ceecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 1));
    // 0x43cef0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x43cef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43cef4: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x43cef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x43cef8: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x43cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x43cefc: 0x30a500e7  andi        $a1, $a1, 0xE7
    ctx->pc = 0x43cefcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)231);
    // 0x43cf00: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x43cf00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x43cf04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x43cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43cf08: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43cf08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43cf0c: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x43cf0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x43cf10: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x43cf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x43cf14: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x43cf14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43cf18: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x43cf18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x43cf1c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x43cf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x43cf20: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x43cf20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x43cf24: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x43cf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x43cf28: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x43cf28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x43cf2c: 0xcb3018  mult        $a2, $a2, $t3
    ctx->pc = 0x43cf2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x43cf30: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x43cf30u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x43cf34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x43cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x43cf38: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x43cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x43cf3c: 0x29480100  slti        $t0, $t2, 0x100
    ctx->pc = 0x43cf3cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x43cf40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43cf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43cf44: 0xcd3024  and         $a2, $a2, $t5
    ctx->pc = 0x43cf44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 13));
    // 0x43cf48: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x43cf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x43cf4c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x43cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x43cf50: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x43cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x43cf54: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x43cf54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x43cf58: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x43cf58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x43cf5c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x43cf5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x43cf60: 0x8b2018  mult        $a0, $a0, $t3
    ctx->pc = 0x43cf60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x43cf64: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x43cf64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43cf68: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x43cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x43cf6c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x43cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x43cf70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43cf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43cf74: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x43cf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x43cf78: 0x8d2024  and         $a0, $a0, $t5
    ctx->pc = 0x43cf78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
    // 0x43cf7c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x43cf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43cf80: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x43cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x43cf84: 0x1500ffd4  bnez        $t0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x43CF84u;
    {
        const bool branch_taken_0x43cf84 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x43CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CF84u;
        // 0x43cf88: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cf84) {
            ctx->pc = 0x43CED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ced8;
        }
    }
    ctx->pc = 0x43CF8Cu;
    // 0x43cf8c: 0x8de40008  lw          $a0, 0x8($t7)
    ctx->pc = 0x43cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x43cf90: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x43CF90u;
    SET_GPR_U32(ctx, 31, 0x43CF98u);
    ctx->pc = 0x43CF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43CF90u;
    // 0x43cf94: 0x2485047f  addiu       $a1, $a0, 0x47F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1151));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x43CF90u, 0x43CF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43CF98u;
label_43cf98:
    // 0x43cf98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43cf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_43cf9c:
    // 0x43cf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x43CF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CF9Cu;
        // 0x43cfa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CFA4u;
    // 0x43cfa4: 0x0  nop
    ctx->pc = 0x43cfa4u;
    // NOP
    ctx->pc = 0x43cfa8u;
}
