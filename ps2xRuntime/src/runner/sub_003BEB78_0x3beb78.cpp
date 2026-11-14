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

// Function: sub_003BEB78
// Address: 0x3beb78 - 0x3befe0
void sub_003BEB78_0x3beb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BEB78_0x3beb78");
#endif

    switch (ctx->pc) {
        case 0x3bebf8u: goto label_3bebf8;
        case 0x3bec58u: goto label_3bec58;
        case 0x3bec88u: goto label_3bec88;
        case 0x3beca4u: goto label_3beca4;
        case 0x3becc8u: goto label_3becc8;
        case 0x3bedc8u: goto label_3bedc8;
        case 0x3bee1cu: goto label_3bee1c;
        case 0x3bee70u: goto label_3bee70;
        case 0x3beec0u: goto label_3beec0;
        case 0x3beed4u: goto label_3beed4;
        case 0x3bef08u: goto label_3bef08;
        case 0x3bef14u: goto label_3bef14;
        case 0x3bef1cu: goto label_3bef1c;
        case 0x3bef38u: goto label_3bef38;
        case 0x3bef44u: goto label_3bef44;
        case 0x3bef68u: goto label_3bef68;
        case 0x3bef84u: goto label_3bef84;
        case 0x3bef90u: goto label_3bef90;
        case 0x3befacu: goto label_3befac;
        case 0x3befb8u: goto label_3befb8;
        default: break;
    }

    ctx->pc = 0x3beb78u;

label_3beb78:
    // 0x3beb78: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3beb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3beb7c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3beb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3beb80: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x3beb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x3beb84: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3beb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3beb88: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3beb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x3beb8c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3beb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3beb90: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3beb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x3beb94: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3beb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3beb98: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3beb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x3beb9c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x3beb9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3beba0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3beba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x3beba4: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x3beba4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3beba8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3beba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x3bebac: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x3bebacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3bebb0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3bebb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x3bebb4: 0x2409000f  addiu       $t1, $zero, 0xF
    ctx->pc = 0x3bebb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3bebb8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3bebb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x3bebbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3bebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3bebc0: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x3bebc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x3bebc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3bebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3bebc8: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x3bebc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3bebcc: 0x8cc60014  lw          $a2, 0x14($a2)
    ctx->pc = 0x3bebccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x3bebd0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x3bebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x3bebd4: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x3bebd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3bebd8: 0x8cde0010  lw          $fp, 0x10($a2)
    ctx->pc = 0x3bebd8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3bebdc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3bebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3bebe0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3bebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3bebe4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3bebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3bebe8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3bebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x3bebec: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x3bebecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x3bebf0: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3bebf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3bebf4: 0x0  nop
    ctx->pc = 0x3bebf4u;
    // NOP
label_3bebf8:
    // 0x3bebf8: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3BEBF8u;
    {
        const bool branch_taken_0x3bebf8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bebf8) {
            ctx->pc = 0x3BEBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEBF8u;
            // 0x3bebfc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEC00u;
            goto label_3bec00;
        }
    }
    ctx->pc = 0x3BEC00u;
label_3bec00:
    // 0x3bec00: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x3bec00u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3bec04: 0x2012  mflo        $a0
    ctx->pc = 0x3bec04u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x3bec08: 0x2483005a  addiu       $v1, $a0, 0x5A
    ctx->pc = 0x3bec08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
    // 0x3bec0c: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x3bec0cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3bec10: 0x1812  mflo        $v1
    ctx->pc = 0x3bec10u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3bec14: 0x691018  mult        $v0, $v1, $t1
    ctx->pc = 0x3bec14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3bec18: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3bec18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3bec1c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3BEC1Cu;
    {
        const bool branch_taken_0x3bec1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bec1c) {
            ctx->pc = 0x3BEC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEC1Cu;
            // 0x3bec20: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bebf8;
        }
    }
    ctx->pc = 0x3BEC24u;
    // 0x3bec24: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x3bec24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x3bec28: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3bec28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3bec2c: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x3bec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x3bec30: 0xad040014  sw          $a0, 0x14($t0)
    ctx->pc = 0x3bec30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 4));
    // 0x3bec34: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x3bec34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x3bec38: 0x2445c1f0  addiu       $a1, $v0, -0x3E10
    ctx->pc = 0x3bec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951408));
    // 0x3bec3c: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x3bec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x3bec40: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3bec40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bec44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3bec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bec48: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3BEC48u;
    {
        const bool branch_taken_0x3bec48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEC48u;
        // 0x3bec4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bec48) {
            ctx->pc = 0x3BED20u;
            goto label_3bed20;
        }
    }
    ctx->pc = 0x3BEC50u;
    // 0x3bec50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bec50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bec54: 0x0  nop
    ctx->pc = 0x3bec54u;
    // NOP
label_3bec58:
    // 0x3bec58: 0x8fb50008  lw          $s5, 0x8($sp)
    ctx->pc = 0x3bec58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3bec5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3bec5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bec60: 0x8fb4000c  lw          $s4, 0xC($sp)
    ctx->pc = 0x3bec60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3bec64: 0x24960001  addiu       $s6, $a0, 0x1
    ctx->pc = 0x3bec64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3bec68: 0x951018  mult        $v0, $a0, $s5
    ctx->pc = 0x3bec68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3bec6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3bec6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bec70: 0xf41818  mult        $v1, $a3, $s4
    ctx->pc = 0x3bec70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3bec74: 0x25370001  addiu       $s7, $t1, 0x1
    ctx->pc = 0x3bec74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3bec78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bec7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3bec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3bec80: 0x1a80001c  blez        $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x3BEC80u;
    {
        const bool branch_taken_0x3bec80 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3BEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEC80u;
        // 0x3bec84: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bec80) {
            ctx->pc = 0x3BECF4u;
            goto label_3becf4;
        }
    }
    ctx->pc = 0x3BEC88u;
label_3bec88:
    // 0x3bec88: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3bec88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bec8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bec8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bec90: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3bec90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bec94: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x3bec94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x3bec98: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x3bec98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x3bec9c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3BEC9Cu;
    SET_GPR_U32(ctx, 31, 0x3BECA4u);
    ctx->pc = 0x3BECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEC9Cu;
    // 0x3beca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3BEC9Cu, 0x3BECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BECA4u;
label_3beca4:
    // 0x3beca4: 0x21e9821  addu        $s3, $s0, $fp
    ctx->pc = 0x3beca4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x3beca8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x3beca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3becac: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x3becacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3becb0: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x3becb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3becb4: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x3becb4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3becb8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3BECB8u;
    {
        const bool branch_taken_0x3becb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BECB8u;
        // 0x3becbc: 0x7ba90040  lq          $t1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3becb8) {
            ctx->pc = 0x3BECE4u;
            goto label_3bece4;
        }
    }
    ctx->pc = 0x3BECC0u;
    // 0x3becc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3becc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3becc4: 0x0  nop
    ctx->pc = 0x3becc4u;
    // NOP
label_3becc8:
    // 0x3becc8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3becc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3beccc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3becccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3becd0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3becd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3becd4: 0x0  nop
    ctx->pc = 0x3becd4u;
    // NOP
    // 0x3becd8: 0x0  nop
    ctx->pc = 0x3becd8u;
    // NOP
    // 0x3becdc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BECDCu;
    {
        const bool branch_taken_0x3becdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BECDCu;
        // 0x3bece0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3becdc) {
            ctx->pc = 0x3BECC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3becc8;
        }
    }
    ctx->pc = 0x3BECE4u;
label_3bece4:
    // 0x3bece4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3bece4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bece8: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x3bece8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3becec: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3BECECu;
    {
        const bool branch_taken_0x3becec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BECECu;
        // 0x3becf0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3becec) {
            ctx->pc = 0x3BEC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bec88;
        }
    }
    ctx->pc = 0x3BECF4u;
label_3becf4:
    // 0x3becf4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3becf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3becf8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3becf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3becfc: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BECFCu;
    {
        const bool branch_taken_0x3becfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BECFCu;
        // 0x3bed00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3becfc) {
            ctx->pc = 0x3BED0Cu;
            goto label_3bed0c;
        }
    }
    ctx->pc = 0x3BED04u;
    // 0x3bed04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3bed04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bed08: 0xfe3821  addu        $a3, $a3, $fp
    ctx->pc = 0x3bed08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 30)));
label_3bed0c:
    // 0x3bed0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3bed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bed10: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x3bed10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bed14: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3bed14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3bed18: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x3BED18u;
    {
        const bool branch_taken_0x3bed18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BED18u;
        // 0x3bed1c: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bed18) {
            ctx->pc = 0x3BEC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bec58;
        }
    }
    ctx->pc = 0x3BED20u;
label_3bed20:
    // 0x3bed20: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x3bed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3bed24: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3bed24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3bed28: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3bed28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3bed2c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3bed2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3bed30: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3bed30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3bed34: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3bed34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3bed38: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3bed38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3bed3c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3bed3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3bed40: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3bed40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3bed44: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x3bed44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3bed48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3bed48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3bed4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BED4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BED4Cu;
        // 0x3bed50: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BED4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BED54u;
    // 0x3bed54: 0x0  nop
    ctx->pc = 0x3bed54u;
    // NOP
    // 0x3bed58: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3bed58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3bed5c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3bed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x3bed60: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3bed60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x3bed64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3bed64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bed68: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3bed68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x3bed6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3bed6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bed70: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3bed70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x3bed74: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3bed74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bed78: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3bed78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x3bed7c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3bed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x3bed80: 0x12600085  beqz        $s3, . + 4 + (0x85 << 2)
    ctx->pc = 0x3BED80u;
    {
        const bool branch_taken_0x3bed80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BED80u;
        // 0x3bed84: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bed80) {
            ctx->pc = 0x3BEF98u;
            goto label_3bef98;
        }
    }
    ctx->pc = 0x3BED88u;
    // 0x3bed88: 0x12400083  beqz        $s2, . + 4 + (0x83 << 2)
    ctx->pc = 0x3BED88u;
    {
        const bool branch_taken_0x3bed88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BED88u;
        // 0x3bed8c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bed88) {
            ctx->pc = 0x3BEF98u;
            goto label_3bef98;
        }
    }
    ctx->pc = 0x3BED90u;
    // 0x3bed90: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3bed90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3bed94: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3bed94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3bed98: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3bed98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3bed9c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3bed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3beda0: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x3beda0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3beda4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3beda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3beda8: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x3beda8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3bedac: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3bedacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x3bedb0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3bedb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3bedb4: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x3bedb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x3bedb8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x3bedb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3bedbc: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x3bedbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3bedc0: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3bedc0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3bedc4: 0x0  nop
    ctx->pc = 0x3bedc4u;
    // NOP
label_3bedc8:
    // 0x3bedc8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3BEDC8u;
    {
        const bool branch_taken_0x3bedc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bedc8) {
            ctx->pc = 0x3BEDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEDC8u;
            // 0x3bedcc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEDD0u;
            goto label_3bedd0;
        }
    }
    ctx->pc = 0x3BEDD0u;
label_3bedd0:
    // 0x3bedd0: 0x106001a  div         $zero, $t0, $a2
    ctx->pc = 0x3bedd0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3bedd4: 0x2012  mflo        $a0
    ctx->pc = 0x3bedd4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x3bedd8: 0x2483005a  addiu       $v1, $a0, 0x5A
    ctx->pc = 0x3bedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
    // 0x3beddc: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x3beddcu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3bede0: 0x1812  mflo        $v1
    ctx->pc = 0x3bede0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3bede4: 0x671018  mult        $v0, $v1, $a3
    ctx->pc = 0x3bede4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3bede8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x3bede8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3bedec: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3BEDECu;
    {
        const bool branch_taken_0x3bedec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bedec) {
            ctx->pc = 0x3BEDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEDECu;
            // 0x3bedf0: 0x84040  sll         $t0, $t0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bedc8;
        }
    }
    ctx->pc = 0x3BEDF4u;
    // 0x3bedf4: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x3bedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x3bedf8: 0xad230018  sw          $v1, 0x18($t1)
    ctx->pc = 0x3bedf8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 3));
    // 0x3bedfc: 0xad220010  sw          $v0, 0x10($t1)
    ctx->pc = 0x3bedfcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
    // 0x3bee00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bee00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bee04: 0xad240014  sw          $a0, 0x14($t1)
    ctx->pc = 0x3bee04u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 4));
    // 0x3bee08: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3bee08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bee0c: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x3bee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x3bee10: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x3bee10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3bee14: 0xc10746c  jal         func_41D1B0
    ctx->pc = 0x3BEE14u;
    SET_GPR_U32(ctx, 31, 0x3BEE1Cu);
    ctx->pc = 0x3BEE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEE14u;
    // 0x3bee18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x3BEE14u, 0x3BEE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEE1Cu;
label_3bee1c:
    // 0x3bee1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3bee1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bee20: 0x12200065  beqz        $s1, . + 4 + (0x65 << 2)
    ctx->pc = 0x3BEE20u;
    {
        const bool branch_taken_0x3bee20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEE20u;
        // 0x3bee24: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bee20) {
            ctx->pc = 0x3BEFB8u;
            goto label_3befb8;
        }
    }
    ctx->pc = 0x3BEE28u;
    // 0x3bee28: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x3BEE28u;
    {
        const bool branch_taken_0x3bee28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEE28u;
        // 0x3bee2c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bee28) {
            ctx->pc = 0x3BEF24u;
            goto label_3bef24;
        }
    }
    ctx->pc = 0x3BEE30u;
    // 0x3bee30: 0x1240003c  beqz        $s2, . + 4 + (0x3C << 2)
    ctx->pc = 0x3BEE30u;
    {
        const bool branch_taken_0x3bee30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEE30u;
        // 0x3bee34: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bee30) {
            ctx->pc = 0x3BEF24u;
            goto label_3bef24;
        }
    }
    ctx->pc = 0x3BEE38u;
    // 0x3bee38: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3bee38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3bee3c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3bee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x3bee40: 0x27aa0074  addiu       $t2, $sp, 0x74
    ctx->pc = 0x3bee40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x3bee44: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x3bee44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x3bee48: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3bee48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3bee4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3bee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bee50: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x3bee50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3bee54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bee58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bee58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bee5c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3bee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x3bee60: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x3bee60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x3bee64: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x3bee64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3bee68: 0x8ce9000c  lw          $t1, 0xC($a3)
    ctx->pc = 0x3bee68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3bee6c: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3bee6cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3bee70:
    // 0x3bee70: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3BEE70u;
    {
        const bool branch_taken_0x3bee70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bee70) {
            ctx->pc = 0x3BEE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEE70u;
            // 0x3bee74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEE78u;
            goto label_3bee78;
        }
    }
    ctx->pc = 0x3BEE78u;
label_3bee78:
    // 0x3bee78: 0x106001a  div         $zero, $t0, $a2
    ctx->pc = 0x3bee78u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3bee7c: 0x2012  mflo        $a0
    ctx->pc = 0x3bee7cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x3bee80: 0x2483005a  addiu       $v1, $a0, 0x5A
    ctx->pc = 0x3bee80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
    // 0x3bee84: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x3bee84u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3bee88: 0x1812  mflo        $v1
    ctx->pc = 0x3bee88u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3bee8c: 0x691018  mult        $v0, $v1, $t1
    ctx->pc = 0x3bee8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3bee90: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x3bee90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3bee94: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3BEE94u;
    {
        const bool branch_taken_0x3bee94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bee94) {
            ctx->pc = 0x3BEE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEE94u;
            // 0x3bee98: 0x84040  sll         $t0, $t0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bee70;
        }
    }
    ctx->pc = 0x3BEE9Cu;
    // 0x3bee9c: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x3bee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x3beea0: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x3beea0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x3beea4: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x3beea4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x3beea8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3beea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3beeac: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x3beeacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x3beeb0: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x3beeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x3beeb4: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x3beeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x3beeb8: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x3BEEB8u;
    SET_GPR_U32(ctx, 31, 0x3BEEC0u);
    ctx->pc = 0x3BEEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEEB8u;
    // 0x3beebc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3BEEB8u, 0x3BEEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEEC0u;
label_3beec0:
    // 0x3beec0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3beec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3beec4: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3BEEC4u;
    {
        const bool branch_taken_0x3beec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3beec4) {
            ctx->pc = 0x3BEF48u;
            goto label_3bef48;
        }
    }
    ctx->pc = 0x3BEECCu;
    // 0x3beecc: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x3BEECCu;
    SET_GPR_U32(ctx, 31, 0x3BEED4u);
    ctx->pc = 0x3BEED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEECCu;
    // 0x3beed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3BEECCu, 0x3BEED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEED4u;
label_3beed4:
    // 0x3beed4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3BEED4u;
    {
        const bool branch_taken_0x3beed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEED4u;
        // 0x3beed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beed4) {
            ctx->pc = 0x3BEF14u;
            goto label_3bef14;
        }
    }
    ctx->pc = 0x3BEEDCu;
    // 0x3beedc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3beedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3beee0: 0x8a430003  lwl         $v1, 0x3($s2)
    ctx->pc = 0x3beee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3beee4: 0x9a430000  lwr         $v1, 0x0($s2)
    ctx->pc = 0x3beee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3beee8: 0xa8430003  swl         $v1, 0x3($v0)
    ctx->pc = 0x3beee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3beeec: 0xb8430000  swr         $v1, 0x0($v0)
    ctx->pc = 0x3beeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3beef0: 0x8a630003  lwl         $v1, 0x3($s3)
    ctx->pc = 0x3beef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3beef4: 0x9a630000  lwr         $v1, 0x0($s3)
    ctx->pc = 0x3beef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3beef8: 0xa8430007  swl         $v1, 0x7($v0)
    ctx->pc = 0x3beef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3beefc: 0xb8430004  swr         $v1, 0x4($v0)
    ctx->pc = 0x3beefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3bef00: 0xc0efade  jal         func_3BEB78
    ctx->pc = 0x3BEF00u;
    SET_GPR_U32(ctx, 31, 0x3BEF08u);
    ctx->pc = 0x3BEF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEF00u;
    // 0x3bef04: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB78u;
    goto label_3beb78;
    ctx->pc = 0x3BEF08u;
label_3bef08:
    // 0x3bef08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bef08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bef0c: 0xc1073c2  jal         func_41CF08
    ctx->pc = 0x3BEF0Cu;
    SET_GPR_U32(ctx, 31, 0x3BEF14u);
    ctx->pc = 0x3BEF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEF0Cu;
    // 0x3bef10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3BEF0Cu, 0x3BEF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEF14u;
label_3bef14:
    // 0x3bef14: 0xc10705c  jal         func_41C170
    ctx->pc = 0x3BEF14u;
    SET_GPR_U32(ctx, 31, 0x3BEF1Cu);
    ctx->pc = 0x3BEF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEF14u;
    // 0x3bef18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3BEF14u, 0x3BEF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEF1Cu;
label_3bef1c:
    // 0x3bef1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3BEF1Cu;
    {
        const bool branch_taken_0x3bef1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bef1c) {
            ctx->pc = 0x3BEF48u;
            goto label_3bef48;
        }
    }
    ctx->pc = 0x3BEF24u;
label_3bef24:
    // 0x3bef24: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x3bef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x3bef28: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3bef28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3bef2c: 0x34840016  ori         $a0, $a0, 0x16
    ctx->pc = 0x3bef2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    // 0x3bef30: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3BEF30u;
    SET_GPR_U32(ctx, 31, 0x3BEF38u);
    ctx->pc = 0x3BEF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEF30u;
    // 0x3bef34: 0xace20020  sw          $v0, 0x20($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BEF30u, 0x3BEF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEF38u;
label_3bef38:
    // 0x3bef38: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x3bef38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x3bef3c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3BEF3Cu;
    SET_GPR_U32(ctx, 31, 0x3BEF44u);
    ctx->pc = 0x3BEF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEF3Cu;
    // 0x3bef40: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BEF3Cu, 0x3BEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEF44u;
label_3bef44:
    // 0x3bef44: 0x0  nop
    ctx->pc = 0x3bef44u;
    // NOP
label_3bef48:
    // 0x3bef48: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BEF48u;
    {
        const bool branch_taken_0x3bef48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bef48) {
            ctx->pc = 0x3BEF58u;
            goto label_3bef58;
        }
    }
    ctx->pc = 0x3BEF50u;
    // 0x3bef50: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3BEF50u;
    {
        const bool branch_taken_0x3bef50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEF50u;
        // 0x3bef54: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bef50) {
            ctx->pc = 0x3BEFB8u;
            goto label_3befb8;
        }
    }
    ctx->pc = 0x3BEF58u;
label_3bef58:
    // 0x3bef58: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BEF58u;
    {
        const bool branch_taken_0x3bef58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEF58u;
        // 0x3bef5c: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bef58) {
            ctx->pc = 0x3BEF70u;
            goto label_3bef70;
        }
    }
    ctx->pc = 0x3BEF60u;
    // 0x3bef60: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x3BEF60u;
    SET_GPR_U32(ctx, 31, 0x3BEF68u);
    ctx->pc = 0x3BEF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEF60u;
    // 0x3bef64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x3BEF60u, 0x3BEF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEF68u;
label_3bef68:
    // 0x3bef68: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3BEF68u;
    {
        const bool branch_taken_0x3bef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEF68u;
        // 0x3bef6c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bef68) {
            ctx->pc = 0x3BEFBCu;
            goto label_3befbc;
        }
    }
    ctx->pc = 0x3BEF70u;
label_3bef70:
    // 0x3bef70: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x3bef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x3bef74: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3bef74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3bef78: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x3bef78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x3bef7c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3BEF7Cu;
    SET_GPR_U32(ctx, 31, 0x3BEF84u);
    ctx->pc = 0x3BEF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEF7Cu;
    // 0x3bef80: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BEF7Cu, 0x3BEF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEF84u;
label_3bef84:
    // 0x3bef84: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x3bef84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x3bef88: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3BEF88u;
    SET_GPR_U32(ctx, 31, 0x3BEF90u);
    ctx->pc = 0x3BEF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEF88u;
    // 0x3bef8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BEF88u, 0x3BEF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEF90u;
label_3bef90:
    // 0x3bef90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3BEF90u;
    {
        const bool branch_taken_0x3bef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEF90u;
        // 0x3bef94: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bef90) {
            ctx->pc = 0x3BEFBCu;
            goto label_3befbc;
        }
    }
    ctx->pc = 0x3BEF98u;
label_3bef98:
    // 0x3bef98: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x3bef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x3bef9c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3bef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3befa0: 0x34840016  ori         $a0, $a0, 0x16
    ctx->pc = 0x3befa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    // 0x3befa4: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3BEFA4u;
    SET_GPR_U32(ctx, 31, 0x3BEFACu);
    ctx->pc = 0x3BEFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEFA4u;
    // 0x3befa8: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BEFA4u, 0x3BEFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEFACu;
label_3befac:
    // 0x3befac: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3befacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x3befb0: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3BEFB0u;
    SET_GPR_U32(ctx, 31, 0x3BEFB8u);
    ctx->pc = 0x3BEFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEFB0u;
    // 0x3befb4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BEFB0u, 0x3BEFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEFB8u;
label_3befb8:
    // 0x3befb8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3befb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3befbc:
    // 0x3befbc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3befbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3befc0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3befc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3befc4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3befc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3befc8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3befc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3befcc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3befccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3befd0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3befd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3befd4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3befd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3befd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BEFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BEFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEFD8u;
        // 0x3befdc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BEFE0u;
}
