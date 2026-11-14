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

// Function: sub_004A3DC0
// Address: 0x4a3dc0 - 0x4a4358
void sub_004A3DC0_0x4a3dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3DC0_0x4a3dc0");
#endif

    switch (ctx->pc) {
        case 0x4a3e20u: goto label_4a3e20;
        case 0x4a3ed0u: goto label_4a3ed0;
        case 0x4a3f18u: goto label_4a3f18;
        case 0x4a4040u: goto label_4a4040;
        case 0x4a405cu: goto label_4a405c;
        case 0x4a4100u: goto label_4a4100;
        case 0x4a4130u: goto label_4a4130;
        case 0x4a4148u: goto label_4a4148;
        case 0x4a41a0u: goto label_4a41a0;
        case 0x4a41ccu: goto label_4a41cc;
        case 0x4a41f4u: goto label_4a41f4;
        case 0x4a4230u: goto label_4a4230;
        case 0x4a4248u: goto label_4a4248;
        case 0x4a42b4u: goto label_4a42b4;
        case 0x4a42bcu: goto label_4a42bc;
        case 0x4a4304u: goto label_4a4304;
        case 0x4a4320u: goto label_4a4320;
        default: break;
    }

    ctx->pc = 0x4a3dc0u;

    // 0x4a3dc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4a3dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4a3dc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4a3dc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3dc8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4a3dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x4a3dcc: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x4a3dccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3dd0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4a3dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x4a3dd4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4a3dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x4a3dd8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4a3dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x4a3ddc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a3ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4a3de0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4a3de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x4a3de4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4a3de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x4a3de8: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x4a3de8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a3dec: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x4a3decu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4a3df0: 0x2568001c  addiu       $t0, $t3, 0x1C
    ctx->pc = 0x4a3df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 28));
    // 0x4a3df4: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x4a3df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x4a3df8: 0x72602  srl         $a0, $a3, 24
    ctx->pc = 0x4a3df8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x4a3dfc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x4a3dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x4a3e00: 0x30e2ff00  andi        $v0, $a3, 0xFF00
    ctx->pc = 0x4a3e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x4a3e04: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4a3e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4a3e08: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4a3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4a3e0c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4a3e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4a3e10: 0x71e00  sll         $v1, $a3, 24
    ctx->pc = 0x4a3e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x4a3e14: 0x833825  or          $a3, $a0, $v1
    ctx->pc = 0x4a3e14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4a3e18: 0x24f2fffe  addiu       $s2, $a3, -0x2
    ctx->pc = 0x4a3e18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x4a3e1c: 0x0  nop
    ctx->pc = 0x4a3e1cu;
    // NOP
label_4a3e20:
    // 0x4a3e20: 0x85070000  lh          $a3, 0x0($t0)
    ctx->pc = 0x4a3e20u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a3e24: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4a3e24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4a3e28: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4a3e28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x4a3e2c: 0x2d440010  sltiu       $a0, $t2, 0x10
    ctx->pc = 0x4a3e2cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4a3e30: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x4a3e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4a3e34: 0x30e2ff00  andi        $v0, $a3, 0xFF00
    ctx->pc = 0x4a3e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x4a3e38: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4a3e38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4a3e3c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x4a3e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x4a3e40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a3e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a3e44: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4a3e44u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a3e48: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4A3E48u;
    {
        const bool branch_taken_0x4a3e48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3E48u;
        // 0x4a3e4c: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3e48) {
            ctx->pc = 0x4A3E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3e20;
        }
    }
    ctx->pc = 0x4A3E50u;
    // 0x4a3e50: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x4a3e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a3e54: 0x2642000d  addiu       $v0, $s2, 0xD
    ctx->pc = 0x4a3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 13));
    // 0x4a3e58: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4a3e58u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4a3e5c: 0x85670040  lh          $a3, 0x40($t3)
    ctx->pc = 0x4a3e5cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 64)));
    // 0x4a3e60: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A3E60u;
    {
        const bool branch_taken_0x4a3e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3e60) {
            ctx->pc = 0x4A3E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3E60u;
            // 0x4a3e64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3E68u;
            goto label_4a3e68;
        }
    }
    ctx->pc = 0x4A3E68u;
label_4a3e68:
    // 0x4a3e68: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x4a3e68u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3e6c: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x4a3e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4a3e70: 0x30e3ff00  andi        $v1, $a3, 0xFF00
    ctx->pc = 0x4a3e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x4a3e74: 0x85670042  lh          $a3, 0x42($t3)
    ctx->pc = 0x4a3e74u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 66)));
    // 0x4a3e78: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4a3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4a3e7c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x4a3e7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x4a3e80: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x4a3e80u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3e84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a3e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a3e88: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x4a3e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4a3e8c: 0x30e2ff00  andi        $v0, $a3, 0xFF00
    ctx->pc = 0x4a3e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x4a3e90: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a3e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a3e94: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4a3e94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4a3e98: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4a3e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x4a3e9c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4a3e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4a3ea0: 0x37c03  sra         $t7, $v1, 16
    ctx->pc = 0x4a3ea0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a3ea4: 0xa58f0000  sh          $t7, 0x0($t4)
    ctx->pc = 0x4a3ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 15));
    // 0x4a3ea8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a3eac: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x4a3eacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x4a3eb0: 0x25c03  sra         $t3, $v0, 16
    ctx->pc = 0x4a3eb0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a3eb4: 0xa58b0000  sh          $t3, 0x0($t4)
    ctx->pc = 0x4a3eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x4a3eb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4a3eb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3ebc: 0xa812  mflo        $s5
    ctx->pc = 0x4a3ebcu;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x4a3ec0: 0x12a00040  beqz        $s5, . + 4 + (0x40 << 2)
    ctx->pc = 0x4A3EC0u;
    {
        const bool branch_taken_0x4a3ec0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3EC0u;
        // 0x4a3ec4: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3ec0) {
            ctx->pc = 0x4A3FC4u;
            goto label_4a3fc4;
        }
    }
    ctx->pc = 0x4A3EC8u;
    // 0x4a3ec8: 0x2416000d  addiu       $s6, $zero, 0xD
    ctx->pc = 0x4a3ec8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4a3ecc: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x4a3eccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_4a3ed0:
    // 0x4a3ed0: 0x2d2302b  sltu        $a2, $s6, $s2
    ctx->pc = 0x4a3ed0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4a3ed4: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x4a3ed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a3ed8: 0x25540001  addiu       $s4, $t2, 0x1
    ctx->pc = 0x4a3ed8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4a3edc: 0x3050000f  andi        $s0, $v0, 0xF
    ctx->pc = 0x4a3edcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4a3ee0: 0x246880a  movz        $s1, $s2, $a2
    ctx->pc = 0x4a3ee0u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
    // 0x4a3ee4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x4a3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x4a3ee8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x4a3ee8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x4a3eec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4a3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a3ef0: 0x2519023  subu        $s2, $s2, $s1
    ctx->pc = 0x4a3ef0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x4a3ef4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4a3ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3ef8: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x4a3ef8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3efc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4a3efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4a3f00: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x4a3f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x4a3f04: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x4a3f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x4a3f08: 0x84990000  lh          $t9, 0x0($a0)
    ctx->pc = 0x4a3f08u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a3f0c: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x4A3F0Cu;
    {
        const bool branch_taken_0x4a3f0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3F0Cu;
        // 0x4a3f10: 0x84b80000  lh          $t8, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3f0c) {
            ctx->pc = 0x4A3FB4u;
            goto label_4a3fb4;
        }
    }
    ctx->pc = 0x4A3F14u;
    // 0x4a3f14: 0x24137fff  addiu       $s3, $zero, 0x7FFF
    ctx->pc = 0x4a3f14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_4a3f18:
    // 0x4a3f18: 0x31c20001  andi        $v0, $t6, 0x1
    ctx->pc = 0x4a3f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x4a3f1c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A3F1Cu;
    {
        const bool branch_taken_0x4a3f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3F1Cu;
        // 0x4a3f20: 0x91a20000  lbu         $v0, 0x0($t5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3f1c) {
            ctx->pc = 0x4A3F60u;
            goto label_4a3f60;
        }
    }
    ctx->pc = 0x4A3F24u;
    // 0x4a3f24: 0x32b1818  mult        $v1, $t9, $t3
    ctx->pc = 0x4a3f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a3f28: 0x30f2018  mult        $a0, $t8, $t7
    ctx->pc = 0x4a3f28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4a3f2c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x4a3f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4a3f30: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4a3f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4a3f34: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x4a3f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a3f38: 0x23f03  sra         $a3, $v0, 28
    ctx->pc = 0x4a3f38u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 28));
    // 0x4a3f3c: 0x160782d  daddu       $t7, $t3, $zero
    ctx->pc = 0x4a3f3cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3f40: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x4a3f40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x4a3f44: 0x2071004  sllv        $v0, $a3, $s0
    ctx->pc = 0x4a3f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 16) & 0x1F));
    // 0x4a3f48: 0x422c3  sra         $a0, $a0, 11
    ctx->pc = 0x4a3f48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 11));
    // 0x4a3f4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a3f50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a3f54: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x4a3f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4a3f58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4A3F58u;
    {
        const bool branch_taken_0x4a3f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3F58u;
        // 0x4a3f5c: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3f58) {
            ctx->pc = 0x4A3F9Cu;
            goto label_4a3f9c;
        }
    }
    ctx->pc = 0x4A3F60u;
label_4a3f60:
    // 0x4a3f60: 0x32b1818  mult        $v1, $t9, $t3
    ctx->pc = 0x4a3f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a3f64: 0x30f5018  mult        $t2, $t8, $t7
    ctx->pc = 0x4a3f64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4a3f68: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x4a3f68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4a3f6c: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x4a3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x4a3f70: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x4a3f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a3f74: 0x23f03  sra         $a3, $v0, 28
    ctx->pc = 0x4a3f74u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 28));
    // 0x4a3f78: 0x160782d  daddu       $t7, $t3, $zero
    ctx->pc = 0x4a3f78u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3f7c: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x4a3f7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x4a3f80: 0x2071004  sllv        $v0, $a3, $s0
    ctx->pc = 0x4a3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 16) & 0x1F));
    // 0x4a3f84: 0xa52c3  sra         $t2, $t2, 11
    ctx->pc = 0x4a3f84u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 11));
    // 0x4a3f88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a3f8c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4a3f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4a3f90: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x4a3f90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x4a3f94: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x4a3f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4a3f98: 0x82300b  movn        $a2, $a0, $v0
    ctx->pc = 0x4a3f98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
label_4a3f9c:
    // 0x4a3f9c: 0xa5860000  sh          $a2, 0x0($t4)
    ctx->pc = 0x4a3f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a3fa0: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x4a3fa0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3fa4: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x4a3fa4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x4a3fa8: 0x1d1102b  sltu        $v0, $t6, $s1
    ctx->pc = 0x4a3fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4a3fac: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x4A3FACu;
    {
        const bool branch_taken_0x4a3fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3FACu;
        // 0x4a3fb0: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3fac) {
            ctx->pc = 0x4A3F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3f18;
        }
    }
    ctx->pc = 0x4A3FB4u;
label_4a3fb4:
    // 0x4a3fb4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x4a3fb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3fb8: 0x155102b  sltu        $v0, $t2, $s5
    ctx->pc = 0x4a3fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x4a3fbc: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x4A3FBCu;
    {
        const bool branch_taken_0x4a3fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3fbc) {
            ctx->pc = 0x4A3FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3FBCu;
            // 0x4a3fc0: 0x91a20000  lbu         $v0, 0x0($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3ed0;
        }
    }
    ctx->pc = 0x4A3FC4u;
label_4a3fc4:
    // 0x4a3fc4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4a3fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a3fc8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4a3fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a3fcc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4a3fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a3fd0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4a3fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a3fd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a3fd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a3fd8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4a3fd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a3fdc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4a3fdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a3fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A3FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3FE0u;
        // 0x4a3fe4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A3FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A3FE8u;
    // 0x4a3fe8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4a3fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4a3fec: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4a3fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x4a3ff0: 0x3a9480a  movz        $t1, $sp, $t1
    ctx->pc = 0x4a3ff0u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 29));
    // 0x4a3ff4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x4a3ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x4a3ff8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a3ff8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3ffc: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x4a3ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x4a4000: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4a4000u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4004: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4a4004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x4a4008: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a4008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a400c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4a400cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x4a4010: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x4a4010u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4014: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4a4014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x4a4018: 0x24a52610  addiu       $a1, $a1, 0x2610
    ctx->pc = 0x4a4018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9744));
    // 0x4a401c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4a401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x4a4020: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4a4020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4a4024: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x4a4024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x4a4028: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a4028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a402c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x4a402cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4a4030: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4a4030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4a4034: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x4a4034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x4a4038: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A4038u;
    SET_GPR_U32(ctx, 31, 0x4A4040u);
    ctx->pc = 0x4A403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4038u;
    // 0x4a403c: 0xafa9000c  sw          $t1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A4038u, 0x4A4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4040u;
label_4a4040:
    // 0x4a4040: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x4A4040u;
    {
        const bool branch_taken_0x4a4040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4040u;
        // 0x4a4044: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4040) {
            ctx->pc = 0x4A42C4u;
            goto label_4a42c4;
        }
    }
    ctx->pc = 0x4A4048u;
    // 0x4a4048: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4a4048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a404c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a404cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a4050: 0x24a52600  addiu       $a1, $a1, 0x2600
    ctx->pc = 0x4a4050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    // 0x4a4054: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A4054u;
    SET_GPR_U32(ctx, 31, 0x4A405Cu);
    ctx->pc = 0x4A4058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4054u;
    // 0x4a4058: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A4054u, 0x4A405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A405Cu;
label_4a405c:
    // 0x4a405c: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x4A405Cu;
    {
        const bool branch_taken_0x4a405c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A405Cu;
        // 0x4a4060: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a405c) {
            ctx->pc = 0x4A42C4u;
            goto label_4a42c4;
        }
    }
    ctx->pc = 0x4A4064u;
    // 0x4a4064: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4a4064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a4068: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4a4068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a406c: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x4a406cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a4070: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x4a4070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4a4074: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x4a4074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4a4078: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x4a4078u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x4a407c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A407Cu;
    {
        const bool branch_taken_0x4a407c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a407c) {
            ctx->pc = 0x4A4080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A407Cu;
            // 0x4a4080: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4084u;
            goto label_4a4084;
        }
    }
    ctx->pc = 0x4A4084u;
label_4a4084:
    // 0x4a4084: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a4084u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4088: 0x34c6fff0  ori         $a2, $a2, 0xFFF0
    ctx->pc = 0x4a4088u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65520);
    // 0x4a408c: 0x1812  mflo        $v1
    ctx->pc = 0x4a408cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x4a4090: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x4a4090u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x4a4094: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x4a4094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x4a4098: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4a4098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a409c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4a409cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a40a0: 0x2012  mflo        $a0
    ctx->pc = 0x4a40a0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x4a40a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a40a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a40a8: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x4a40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x4a40ac: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x4a40acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a40b0: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x4a40b0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4a40b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a40b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a40b8: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x4a40b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a40bc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4a40bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a40c0: 0x1012  mflo        $v0
    ctx->pc = 0x4a40c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4a40c4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x4a40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x4a40c8: 0x46a824  and         $s5, $v0, $a2
    ctx->pc = 0x4a40c8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a40cc: 0x2a31018  mult        $v0, $s5, $v1
    ctx->pc = 0x4a40ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a40d0: 0x13c00093  beqz        $fp, . + 4 + (0x93 << 2)
    ctx->pc = 0x4A40D0u;
    {
        const bool branch_taken_0x4a40d0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A40D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A40D0u;
        // 0x4a40d4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a40d0) {
            ctx->pc = 0x4A4320u;
            goto label_4a4320;
        }
    }
    ctx->pc = 0x4A40D8u;
    // 0x4a40d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4a40d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a40dc: 0x9062000d  lbu         $v0, 0xD($v1)
    ctx->pc = 0x4a40dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x4a40e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4a40e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a40e4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x4A40E4u;
    {
        const bool branch_taken_0x4a40e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A40E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A40E4u;
        // 0x4a40e8: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a40e4) {
            ctx->pc = 0x4A4188u;
            goto label_4a4188;
        }
    }
    ctx->pc = 0x4A40ECu;
    // 0x4a40ec: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x4a40ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4a40f0: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x4a40f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x4a40f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a40f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a40f8: 0xc127cc2  jal         func_49F308
    ctx->pc = 0x4A40F8u;
    SET_GPR_U32(ctx, 31, 0x4A4100u);
    ctx->pc = 0x4A40FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A40F8u;
    // 0x4a40fc: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F308u, 0x4A40F8u, 0x4A4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4100u;
label_4a4100:
    // 0x4a4100: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4a4100u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4104: 0x12c00087  beqz        $s6, . + 4 + (0x87 << 2)
    ctx->pc = 0x4A4104u;
    {
        const bool branch_taken_0x4a4104 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4104u;
        // 0x4a4108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4104) {
            ctx->pc = 0x4A4324u;
            goto label_4a4324;
        }
    }
    ctx->pc = 0x4A410Cu;
    // 0x4a410c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a410cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4110: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x4a4110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a4114: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4a4114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x4a4118: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a4118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a411c: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x4a411cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x4a4120: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4A4120u;
    {
        const bool branch_taken_0x4a4120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4120u;
        // 0x4a4124: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4120) {
            ctx->pc = 0x4A418Cu;
            goto label_4a418c;
        }
    }
    ctx->pc = 0x4A4128u;
    // 0x4a4128: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x4a4128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x4a412c: 0x0  nop
    ctx->pc = 0x4a412cu;
    // NOP
label_4a4130:
    // 0x4a4130: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x4a4130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4a4134: 0x2e28821  addu        $s1, $s7, $v0
    ctx->pc = 0x4a4134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x4a4138: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x4a4138u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a413c: 0x2721018  mult        $v0, $s3, $s2
    ctx->pc = 0x4a413cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a4140: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A4140u;
    {
        const bool branch_taken_0x4a4140 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4140u;
        // 0x4a4144: 0x568021  addu        $s0, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4140) {
            ctx->pc = 0x4A4168u;
            goto label_4a4168;
        }
    }
    ctx->pc = 0x4A4148u;
label_4a4148:
    // 0x4a4148: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a4148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a414c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x4a414cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x4a4150: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a4150u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4154: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a4154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a4158: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x4a4158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a415c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a415cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a4160: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4A4160u;
    {
        const bool branch_taken_0x4a4160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4160u;
        // 0x4a4164: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4160) {
            ctx->pc = 0x4A4148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4148;
        }
    }
    ctx->pc = 0x4A4168u;
label_4a4168:
    // 0x4a4168: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x4a4168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a416c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a416cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4170: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a4170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4174: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4a4174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a4178: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4A4178u;
    {
        const bool branch_taken_0x4a4178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4178u;
        // 0x4a417c: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4178) {
            ctx->pc = 0x4A4130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4130;
        }
    }
    ctx->pc = 0x4A4180u;
    // 0x4a4180: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A4180u;
    {
        const bool branch_taken_0x4a4180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4180u;
        // 0x4a4184: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4180) {
            ctx->pc = 0x4A418Cu;
            goto label_4a418c;
        }
    }
    ctx->pc = 0x4A4188u;
label_4a4188:
    // 0x4a4188: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a4188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a418c:
    // 0x4a418c: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4A418Cu;
    {
        const bool branch_taken_0x4a418c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A418Cu;
        // 0x4a4190: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a418c) {
            ctx->pc = 0x4A4204u;
            goto label_4a4204;
        }
    }
    ctx->pc = 0x4A4194u;
    // 0x4a4194: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4a4194u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4198: 0x2c32021  addu        $a0, $s6, $v1
    ctx->pc = 0x4a4198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x4a419c: 0x0  nop
    ctx->pc = 0x4a419cu;
    // NOP
label_4a41a0:
    // 0x4a41a0: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x4a41a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a41a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a41a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a41a8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4a41a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a41ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4a41acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4a41b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a41b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a41b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a41b8: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x4a41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x4a41bc: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x4a41bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x4a41c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a41c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a41c4: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A41C4u;
    SET_GPR_U32(ctx, 31, 0x4A41CCu);
    ctx->pc = 0x4A41C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A41C4u;
    // 0x4a41c8: 0x2f5b821  addu        $s7, $s7, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A41C4u, 0x4A41CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A41CCu;
label_4a41cc:
    // 0x4a41cc: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x4a41ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a41d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a41d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a41d4: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4a41d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a41d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a41d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a41dc: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x4a41dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a41e0: 0x2672823  subu        $a1, $s3, $a3
    ctx->pc = 0x4a41e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x4a41e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a41e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a41e8: 0x2a94823  subu        $t1, $s5, $t1
    ctx->pc = 0x4a41e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
    // 0x4a41ec: 0xc129370  jal         func_4A4DC0
    ctx->pc = 0x4A41ECu;
    SET_GPR_U32(ctx, 31, 0x4A41F4u);
    ctx->pc = 0x4A41F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A41ECu;
    // 0x4a41f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4DC0u, 0x4A41ECu, 0x4A41F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A41F4u;
label_4a41f4:
    // 0x4a41f4: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x4a41f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x4a41f8: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x4a41f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a41fc: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x4A41FCu;
    {
        const bool branch_taken_0x4a41fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A41FCu;
        // 0x4a4200: 0x2332021  addu        $a0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a41fc) {
            ctx->pc = 0x4A41A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a41a0;
        }
    }
    ctx->pc = 0x4A4204u;
label_4a4204:
    // 0x4a4204: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4a4204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a4208: 0x9062000d  lbu         $v0, 0xD($v1)
    ctx->pc = 0x4a4208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x4a420c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4a420cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a4210: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x4A4210u;
    {
        const bool branch_taken_0x4a4210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4210u;
        // 0x4a4214: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4210) {
            ctx->pc = 0x4A4324u;
            goto label_4a4324;
        }
    }
    ctx->pc = 0x4A4218u;
    // 0x4a4218: 0x9062000d  lbu         $v0, 0xD($v1)
    ctx->pc = 0x4a4218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x4a421c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a421cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4220: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4A4220u;
    {
        const bool branch_taken_0x4a4220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4220u;
        // 0x4a4224: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4220) {
            ctx->pc = 0x4A42A0u;
            goto label_4a42a0;
        }
    }
    ctx->pc = 0x4A4228u;
    // 0x4a4228: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x4a4228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x4a422c: 0x0  nop
    ctx->pc = 0x4a422cu;
    // NOP
label_4a4230:
    // 0x4a4230: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x4a4230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4a4234: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x4a4234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x4a4238: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x4a4238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a423c: 0x2b21018  mult        $v0, $s5, $s2
    ctx->pc = 0x4a423cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a4240: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A4240u;
    {
        const bool branch_taken_0x4a4240 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4240u;
        // 0x4a4244: 0x5e8821  addu        $s1, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4240) {
            ctx->pc = 0x4A4284u;
            goto label_4a4284;
        }
    }
    ctx->pc = 0x4A4248u;
label_4a4248:
    // 0x4a4248: 0x6a250007  ldl         $a1, 0x7($s1)
    ctx->pc = 0x4a4248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4a424c: 0x6e250000  ldr         $a1, 0x0($s1)
    ctx->pc = 0x4a424cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4a4250: 0x6a26000f  ldl         $a2, 0xF($s1)
    ctx->pc = 0x4a4250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4a4254: 0x6e260008  ldr         $a2, 0x8($s1)
    ctx->pc = 0x4a4254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4a4258: 0xb2050007  sdl         $a1, 0x7($s0)
    ctx->pc = 0x4a4258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a425c: 0xb6050000  sdr         $a1, 0x0($s0)
    ctx->pc = 0x4a425cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a4260: 0xb206000f  sdl         $a2, 0xF($s0)
    ctx->pc = 0x4a4260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a4264: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x4a4264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x4a4268: 0xb6060008  sdr         $a2, 0x8($s0)
    ctx->pc = 0x4a4268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a426c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4a426cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a4270: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x4a4270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4a4274: 0x90a2000d  lbu         $v0, 0xD($a1)
    ctx->pc = 0x4a4274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
    // 0x4a4278: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4a4278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4a427c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x4A427Cu;
    {
        const bool branch_taken_0x4a427c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A427Cu;
        // 0x4a4280: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a427c) {
            ctx->pc = 0x4A4248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4248;
        }
    }
    ctx->pc = 0x4A4284u;
label_4a4284:
    // 0x4a4284: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x4a4284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a4288: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a4288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a428c: 0x90c2000d  lbu         $v0, 0xD($a2)
    ctx->pc = 0x4a428cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13)));
    // 0x4a4290: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a4290u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4294: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4a4294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a4298: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x4A4298u;
    {
        const bool branch_taken_0x4a4298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4298u;
        // 0x4a429c: 0x121100  sll         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4298) {
            ctx->pc = 0x4A4230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4230;
        }
    }
    ctx->pc = 0x4A42A0u;
label_4a42a0:
    // 0x4a42a0: 0x2a30018  mult        $zero, $s5, $v1
    ctx->pc = 0x4a42a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4a42a4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4a42a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a42a8: 0x3012  mflo        $a2
    ctx->pc = 0x4a42a8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4a42ac: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4A42ACu;
    SET_GPR_U32(ctx, 31, 0x4A42B4u);
    ctx->pc = 0x4A42B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A42ACu;
    // 0x4a42b0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A42ACu, 0x4A42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A42B4u;
label_4a42b4:
    // 0x4a42b4: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4A42B4u;
    SET_GPR_U32(ctx, 31, 0x4A42BCu);
    ctx->pc = 0x4A42B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A42B4u;
    // 0x4a42b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A42B4u, 0x4A42BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A42BCu;
label_4a42bc:
    // 0x4a42bc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4A42BCu;
    {
        const bool branch_taken_0x4a42bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A42C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A42BCu;
        // 0x4a42c0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a42bc) {
            ctx->pc = 0x4A4324u;
            goto label_4a4324;
        }
    }
    ctx->pc = 0x4A42C4u;
label_4a42c4:
    // 0x4a42c4: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x4a42c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a42c8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4a42cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4a42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a42d0: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x4a42d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4a42d4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4a42d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4a42d8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x4a42d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4a42dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4a42e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4a42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a42e4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4a42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4a42e8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4a42e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x4a42ec: 0x13c0000c  beqz        $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x4A42ECu;
    {
        const bool branch_taken_0x4a42ec = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A42ECu;
        // 0x4a42f0: 0x443023  subu        $a2, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a42ec) {
            ctx->pc = 0x4A4320u;
            goto label_4a4320;
        }
    }
    ctx->pc = 0x4A42F4u;
    // 0x4a42f4: 0x3c4f021  addu        $fp, $fp, $a0
    ctx->pc = 0x4a42f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x4a42f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a42f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a42fc: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A42FCu;
    SET_GPR_U32(ctx, 31, 0x4A4304u);
    ctx->pc = 0x4A4300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A42FCu;
    // 0x4a4300: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A42FCu, 0x4A4304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4304u;
label_4a4304:
    // 0x4a4304: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4a4304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a4308: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4a4308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a430c: 0x2e6b821  addu        $s7, $s7, $a2
    ctx->pc = 0x4a430cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x4a4310: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x4a4310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4a4314: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4a4314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4318: 0xc1293e2  jal         func_4A4F88
    ctx->pc = 0x4A4318u;
    SET_GPR_U32(ctx, 31, 0x4A4320u);
    ctx->pc = 0x4A431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4318u;
    // 0x4a431c: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4F88u, 0x4A4318u, 0x4A4320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4320u;
label_4a4320:
    // 0x4a4320: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4a4320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4a4324:
    // 0x4a4324: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4a4324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4a4328: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4a4328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a432c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4a432cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a4330: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4a4330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a4334: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4a4334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a4338: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4a4338u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a433c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4a433cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a4340: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x4a4340u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a4344: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x4a4344u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a4348: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a4348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a434c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A434Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A434Cu;
        // 0x4a4350: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A434Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4354u;
    // 0x4a4354: 0x0  nop
    ctx->pc = 0x4a4354u;
    // NOP
    ctx->pc = 0x4a4358u;
}
