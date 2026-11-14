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

// Function: sub_00353760
// Address: 0x353760 - 0x353cc8
void sub_00353760_0x353760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353760_0x353760");
#endif

    switch (ctx->pc) {
        case 0x353798u: goto label_353798;
        case 0x3537c4u: goto label_3537c4;
        case 0x3537e8u: goto label_3537e8;
        case 0x353830u: goto label_353830;
        case 0x353860u: goto label_353860;
        case 0x35397cu: goto label_35397c;
        case 0x3539dcu: goto label_3539dc;
        case 0x353a3cu: goto label_353a3c;
        case 0x353a88u: goto label_353a88;
        case 0x353aa4u: goto label_353aa4;
        case 0x353b00u: goto label_353b00;
        case 0x353b64u: goto label_353b64;
        case 0x353bc4u: goto label_353bc4;
        case 0x353c48u: goto label_353c48;
        default: break;
    }

    ctx->pc = 0x353760u;

    // 0x353760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x353760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x353764: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x353764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x353768: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x353768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35376c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x35376cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x353770: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x353770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x353774: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x353774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x353778: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x353778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35377c: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x35377cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x353780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x353780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x353784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x353788: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x353788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35378c: 0x39103  sra         $s2, $v1, 4
    ctx->pc = 0x35378cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 4));
    // 0x353790: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x353790u;
    SET_GPR_U32(ctx, 31, 0x353798u);
    ctx->pc = 0x353794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353790u;
    // 0x353794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x353790u, 0x353798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353798u;
label_353798:
    // 0x353798: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x353798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35379c: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x35379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x3537a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3537a0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x3537a4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3537a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3537a8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3537A8u;
    {
        const bool branch_taken_0x3537a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3537ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3537A8u;
        // 0x3537ac: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3537a8) {
            ctx->pc = 0x353804u;
            goto label_353804;
        }
    }
    ctx->pc = 0x3537B0u;
    // 0x3537b0: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3537b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3537b4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x3537b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x3537b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3537b8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x3537bc: 0xf  sync
    ctx->pc = 0x3537bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3537c0: 0x40f  sync.p
    ctx->pc = 0x3537c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3537c4:
    // 0x3537c4: 0x0  nop
    ctx->pc = 0x3537c4u;
    // NOP
    // 0x3537c8: 0x0  nop
    ctx->pc = 0x3537c8u;
    // NOP
    // 0x3537cc: 0x0  nop
    ctx->pc = 0x3537ccu;
    // NOP
    // 0x3537d0: 0x0  nop
    ctx->pc = 0x3537d0u;
    // NOP
    // 0x3537d4: 0x0  nop
    ctx->pc = 0x3537d4u;
    // NOP
    // 0x3537d8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3537D8u;
    {
        const bool branch_taken_0x3537d8 = (false);
        if (branch_taken_0x3537d8) {
            ctx->pc = 0x3537C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3537c4;
        }
    }
    ctx->pc = 0x3537E0u;
    // 0x3537e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3537e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3537e4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x3537e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_3537e8:
    // 0x3537e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3537e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x3537ec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3537ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3537f0: 0x0  nop
    ctx->pc = 0x3537f0u;
    // NOP
    // 0x3537f4: 0x0  nop
    ctx->pc = 0x3537f4u;
    // NOP
    // 0x3537f8: 0x0  nop
    ctx->pc = 0x3537f8u;
    // NOP
    // 0x3537fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3537FCu;
    {
        const bool branch_taken_0x3537fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3537fc) {
            ctx->pc = 0x3537E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3537e8;
        }
    }
    ctx->pc = 0x353804u;
label_353804:
    // 0x353804: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x353804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x353808: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x353808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35380c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35380cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x353810: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x353810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x353814: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x353814u;
    {
        const bool branch_taken_0x353814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x353818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353814u;
        // 0x353818: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353814) {
            ctx->pc = 0x353850u;
            goto label_353850;
        }
    }
    ctx->pc = 0x35381Cu;
    // 0x35381c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x35381cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x353820: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x353820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x353824: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x353824u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x353828: 0xf  sync
    ctx->pc = 0x353828u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35382c: 0x40f  sync.p
    ctx->pc = 0x35382cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353830:
    // 0x353830: 0x0  nop
    ctx->pc = 0x353830u;
    // NOP
    // 0x353834: 0x0  nop
    ctx->pc = 0x353834u;
    // NOP
    // 0x353838: 0x0  nop
    ctx->pc = 0x353838u;
    // NOP
    // 0x35383c: 0x0  nop
    ctx->pc = 0x35383cu;
    // NOP
    // 0x353840: 0x0  nop
    ctx->pc = 0x353840u;
    // NOP
    // 0x353844: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353844u;
    {
        const bool branch_taken_0x353844 = (false);
        if (branch_taken_0x353844) {
            ctx->pc = 0x353830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353830;
        }
    }
    ctx->pc = 0x35384Cu;
    // 0x35384c: 0x0  nop
    ctx->pc = 0x35384cu;
    // NOP
label_353850:
    // 0x353850: 0x2a460401  slti        $a2, $s2, 0x401
    ctx->pc = 0x353850u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x353854: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x353854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x353858: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x353858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x35385c: 0x0  nop
    ctx->pc = 0x35385cu;
    // NOP
label_353860:
    // 0x353860: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x353860u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353864: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x353864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x353868: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x353868u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x35386c: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x35386cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x353870: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x353870u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x353874: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x353874u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353878: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x353878u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x35387c: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x35387cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x353880: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x353880u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x353884: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x353884u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353888: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x353888u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x35388c: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x35388cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x353890: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x353890u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x353894: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x353894u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353898: 0x7c830060  sq          $v1, 0x60($a0)
    ctx->pc = 0x353898u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 3));
    // 0x35389c: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x35389cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3538a0: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x3538a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x3538a4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3538a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3538a8: 0x7c830080  sq          $v1, 0x80($a0)
    ctx->pc = 0x3538a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 3));
    // 0x3538ac: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3538acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3538b0: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x3538b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x3538b4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3538b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3538b8: 0x7c8300a0  sq          $v1, 0xA0($a0)
    ctx->pc = 0x3538b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 3));
    // 0x3538bc: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3538bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3538c0: 0x7c8200b0  sq          $v0, 0xB0($a0)
    ctx->pc = 0x3538c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 2));
    // 0x3538c4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3538c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3538c8: 0x7c8300c0  sq          $v1, 0xC0($a0)
    ctx->pc = 0x3538c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 3));
    // 0x3538cc: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3538ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3538d0: 0x7c8200d0  sq          $v0, 0xD0($a0)
    ctx->pc = 0x3538d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 2));
    // 0x3538d4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3538d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3538d8: 0x7c8300e0  sq          $v1, 0xE0($a0)
    ctx->pc = 0x3538d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), GPR_VEC(ctx, 3));
    // 0x3538dc: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x3538dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x3538e0: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3538e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3538e4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3538e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3538e8: 0x4a1ffdd  bgez        $a1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x3538E8u;
    {
        const bool branch_taken_0x3538e8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x3538ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3538E8u;
        // 0x3538ec: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3538e8) {
            ctx->pc = 0x353860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353860;
        }
    }
    ctx->pc = 0x3538F0u;
    // 0x3538f0: 0x14c000c9  bnez        $a2, . + 4 + (0xC9 << 2)
    ctx->pc = 0x3538F0u;
    {
        const bool branch_taken_0x3538f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3538f0) {
            ctx->pc = 0x353C18u;
            goto label_353c18;
        }
    }
    ctx->pc = 0x3538F8u;
    // 0x3538f8: 0x240b0400  addiu       $t3, $zero, 0x400
    ctx->pc = 0x3538f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3538fc: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x3538fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x353900: 0x1721023  subu        $v0, $t3, $s2
    ctx->pc = 0x353900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
    // 0x353904: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x353904u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x353908: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x353908u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x35390c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x35390cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x353910: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x353910u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x353914: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x353914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x353918: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x353918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x35391c: 0x354ad000  ori         $t2, $t2, 0xD000
    ctx->pc = 0x35391cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)53248);
    // 0x353920: 0x3529e020  ori         $t1, $t1, 0xE020
    ctx->pc = 0x353920u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)57376);
    // 0x353924: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x353924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x353928: 0x3508e010  ori         $t0, $t0, 0xE010
    ctx->pc = 0x353928u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57360);
    // 0x35392c: 0x34e7d080  ori         $a3, $a3, 0xD080
    ctx->pc = 0x35392cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)53376);
    // 0x353930: 0x34c6d010  ori         $a2, $a2, 0xD010
    ctx->pc = 0x353930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53264);
    // 0x353934: 0x2a420401  slti        $v0, $s2, 0x401
    ctx->pc = 0x353934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x353938: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x353938u;
    {
        const bool branch_taken_0x353938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353938u;
        // 0x35393c: 0x34a5d020  ori         $a1, $a1, 0xD020 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x353938) {
            ctx->pc = 0x353A20u;
            goto label_353a20;
        }
    }
    ctx->pc = 0x353940u;
    // 0x353940: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x353940u;
    {
        const bool branch_taken_0x353940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x353944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353940u;
        // 0x353944: 0x28620c00  slti        $v0, $v1, 0xC00 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3072) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x353940) {
            ctx->pc = 0x353A88u;
            goto label_353a88;
        }
    }
    ctx->pc = 0x353948u;
    // 0x353948: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x353948u;
    {
        const bool branch_taken_0x353948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353948u;
        // 0x35394c: 0x28620800  slti        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x353948) {
            ctx->pc = 0x353A20u;
            goto label_353a20;
        }
    }
    ctx->pc = 0x353950u;
    // 0x353950: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x353950u;
    {
        const bool branch_taken_0x353950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353950u;
        // 0x353954: 0x28620400  slti        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x353950) {
            ctx->pc = 0x3539C0u;
            goto label_3539c0;
        }
    }
    ctx->pc = 0x353958u;
    // 0x353958: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x353958u;
    {
        const bool branch_taken_0x353958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353958) {
            ctx->pc = 0x353A88u;
            goto label_353a88;
        }
    }
    ctx->pc = 0x353960u;
    // 0x353960: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x353960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x353964: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353968: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x353968u;
    {
        const bool branch_taken_0x353968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353968) {
            ctx->pc = 0x353998u;
            goto label_353998;
        }
    }
    ctx->pc = 0x353970u;
    // 0x353970: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x353970u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x353974: 0xf  sync
    ctx->pc = 0x353974u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353978: 0x40f  sync.p
    ctx->pc = 0x353978u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35397c:
    // 0x35397c: 0x0  nop
    ctx->pc = 0x35397cu;
    // NOP
    // 0x353980: 0x0  nop
    ctx->pc = 0x353980u;
    // NOP
    // 0x353984: 0x0  nop
    ctx->pc = 0x353984u;
    // NOP
    // 0x353988: 0x0  nop
    ctx->pc = 0x353988u;
    // NOP
    // 0x35398c: 0x0  nop
    ctx->pc = 0x35398cu;
    // NOP
    // 0x353990: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353990u;
    {
        const bool branch_taken_0x353990 = (false);
        if (branch_taken_0x353990) {
            ctx->pc = 0x35397Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35397c;
        }
    }
    ctx->pc = 0x353998u;
label_353998:
    // 0x353998: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x353998u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x35399c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x35399cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x3539a0: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x3539a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
    // 0x3539a4: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x3539a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x3539a8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3539a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3539ac: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x3539acu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x3539b0: 0xf  sync
    ctx->pc = 0x3539b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3539b4: 0x40f  sync.p
    ctx->pc = 0x3539b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3539b8: 0x26314000  addiu       $s1, $s1, 0x4000
    ctx->pc = 0x3539b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
    // 0x3539bc: 0x2652fc00  addiu       $s2, $s2, -0x400
    ctx->pc = 0x3539bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966272));
label_3539c0:
    // 0x3539c0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3539c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3539c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3539c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3539c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3539C8u;
    {
        const bool branch_taken_0x3539c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3539c8) {
            ctx->pc = 0x3539F8u;
            goto label_3539f8;
        }
    }
    ctx->pc = 0x3539D0u;
    // 0x3539d0: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x3539d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x3539d4: 0xf  sync
    ctx->pc = 0x3539d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3539d8: 0x40f  sync.p
    ctx->pc = 0x3539d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3539dc:
    // 0x3539dc: 0x0  nop
    ctx->pc = 0x3539dcu;
    // NOP
    // 0x3539e0: 0x0  nop
    ctx->pc = 0x3539e0u;
    // NOP
    // 0x3539e4: 0x0  nop
    ctx->pc = 0x3539e4u;
    // NOP
    // 0x3539e8: 0x0  nop
    ctx->pc = 0x3539e8u;
    // NOP
    // 0x3539ec: 0x0  nop
    ctx->pc = 0x3539ecu;
    // NOP
    // 0x3539f0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3539F0u;
    {
        const bool branch_taken_0x3539f0 = (false);
        if (branch_taken_0x3539f0) {
            ctx->pc = 0x3539DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3539dc;
        }
    }
    ctx->pc = 0x3539F8u;
label_3539f8:
    // 0x3539f8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x3539f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x3539fc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3539fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x353a00: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x353a00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
    // 0x353a04: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x353a04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x353a08: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x353a0c: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x353a0cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x353a10: 0xf  sync
    ctx->pc = 0x353a10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353a14: 0x40f  sync.p
    ctx->pc = 0x353a14u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353a18: 0x26314000  addiu       $s1, $s1, 0x4000
    ctx->pc = 0x353a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
    // 0x353a1c: 0x2652fc00  addiu       $s2, $s2, -0x400
    ctx->pc = 0x353a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966272));
label_353a20:
    // 0x353a20: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x353a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x353a24: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353a28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x353A28u;
    {
        const bool branch_taken_0x353a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353a28) {
            ctx->pc = 0x353A58u;
            goto label_353a58;
        }
    }
    ctx->pc = 0x353A30u;
    // 0x353a30: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x353a30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x353a34: 0xf  sync
    ctx->pc = 0x353a34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353a38: 0x40f  sync.p
    ctx->pc = 0x353a38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353a3c:
    // 0x353a3c: 0x0  nop
    ctx->pc = 0x353a3cu;
    // NOP
    // 0x353a40: 0x0  nop
    ctx->pc = 0x353a40u;
    // NOP
    // 0x353a44: 0x0  nop
    ctx->pc = 0x353a44u;
    // NOP
    // 0x353a48: 0x0  nop
    ctx->pc = 0x353a48u;
    // NOP
    // 0x353a4c: 0x0  nop
    ctx->pc = 0x353a4cu;
    // NOP
    // 0x353a50: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353A50u;
    {
        const bool branch_taken_0x353a50 = (false);
        if (branch_taken_0x353a50) {
            ctx->pc = 0x353A3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353a3c;
        }
    }
    ctx->pc = 0x353A58u;
label_353a58:
    // 0x353a58: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x353a58u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x353a5c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x353a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x353a60: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x353a60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
    // 0x353a64: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x353a64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x353a68: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x353a6c: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x353a6cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x353a70: 0xf  sync
    ctx->pc = 0x353a70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353a74: 0x40f  sync.p
    ctx->pc = 0x353a74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353a78: 0x2652fc00  addiu       $s2, $s2, -0x400
    ctx->pc = 0x353a78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966272));
    // 0x353a7c: 0x2a420401  slti        $v0, $s2, 0x401
    ctx->pc = 0x353a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x353a80: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x353A80u;
    {
        const bool branch_taken_0x353a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353A80u;
        // 0x353a84: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353a80) {
            ctx->pc = 0x353C18u;
            goto label_353c18;
        }
    }
    ctx->pc = 0x353A88u;
label_353a88:
    // 0x353a88: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x353a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x353a8c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353a90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x353A90u;
    {
        const bool branch_taken_0x353a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353a90) {
            ctx->pc = 0x353AC0u;
            goto label_353ac0;
        }
    }
    ctx->pc = 0x353A98u;
    // 0x353a98: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x353a98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x353a9c: 0xf  sync
    ctx->pc = 0x353a9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353aa0: 0x40f  sync.p
    ctx->pc = 0x353aa0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353aa4:
    // 0x353aa4: 0x0  nop
    ctx->pc = 0x353aa4u;
    // NOP
    // 0x353aa8: 0x0  nop
    ctx->pc = 0x353aa8u;
    // NOP
    // 0x353aac: 0x0  nop
    ctx->pc = 0x353aacu;
    // NOP
    // 0x353ab0: 0x0  nop
    ctx->pc = 0x353ab0u;
    // NOP
    // 0x353ab4: 0x0  nop
    ctx->pc = 0x353ab4u;
    // NOP
    // 0x353ab8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353AB8u;
    {
        const bool branch_taken_0x353ab8 = (false);
        if (branch_taken_0x353ab8) {
            ctx->pc = 0x353AA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353aa4;
        }
    }
    ctx->pc = 0x353AC0u;
label_353ac0:
    // 0x353ac0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x353ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x353ac4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x353ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x353ac8: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x353ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
    // 0x353acc: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x353accu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x353ad0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x353ad4: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x353ad4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x353ad8: 0xf  sync
    ctx->pc = 0x353ad8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353adc: 0x40f  sync.p
    ctx->pc = 0x353adcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353ae0: 0x26234000  addiu       $v1, $s1, 0x4000
    ctx->pc = 0x353ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
    // 0x353ae4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x353ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x353ae8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353aec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x353AECu;
    {
        const bool branch_taken_0x353aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353aec) {
            ctx->pc = 0x353B20u;
            goto label_353b20;
        }
    }
    ctx->pc = 0x353AF4u;
    // 0x353af4: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x353af4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x353af8: 0xf  sync
    ctx->pc = 0x353af8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353afc: 0x40f  sync.p
    ctx->pc = 0x353afcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353b00:
    // 0x353b00: 0x0  nop
    ctx->pc = 0x353b00u;
    // NOP
    // 0x353b04: 0x0  nop
    ctx->pc = 0x353b04u;
    // NOP
    // 0x353b08: 0x0  nop
    ctx->pc = 0x353b08u;
    // NOP
    // 0x353b0c: 0x0  nop
    ctx->pc = 0x353b0cu;
    // NOP
    // 0x353b10: 0x0  nop
    ctx->pc = 0x353b10u;
    // NOP
    // 0x353b14: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353B14u;
    {
        const bool branch_taken_0x353b14 = (false);
        if (branch_taken_0x353b14) {
            ctx->pc = 0x353B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353b00;
        }
    }
    ctx->pc = 0x353B1Cu;
    // 0x353b1c: 0x0  nop
    ctx->pc = 0x353b1cu;
    // NOP
label_353b20:
    // 0x353b20: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x353b20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x353b24: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x353b24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x353b28: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x353b28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x353b2c: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x353b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x353b30: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x353b34: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x353b34u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x353b38: 0xf  sync
    ctx->pc = 0x353b38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353b3c: 0x40f  sync.p
    ctx->pc = 0x353b3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353b40: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x353b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x353b44: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x353b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x353b48: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x353b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x353b4c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353b50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x353B50u;
    {
        const bool branch_taken_0x353b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353b50) {
            ctx->pc = 0x353B80u;
            goto label_353b80;
        }
    }
    ctx->pc = 0x353B58u;
    // 0x353b58: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x353b58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x353b5c: 0xf  sync
    ctx->pc = 0x353b5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353b60: 0x40f  sync.p
    ctx->pc = 0x353b60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353b64:
    // 0x353b64: 0x0  nop
    ctx->pc = 0x353b64u;
    // NOP
    // 0x353b68: 0x0  nop
    ctx->pc = 0x353b68u;
    // NOP
    // 0x353b6c: 0x0  nop
    ctx->pc = 0x353b6cu;
    // NOP
    // 0x353b70: 0x0  nop
    ctx->pc = 0x353b70u;
    // NOP
    // 0x353b74: 0x0  nop
    ctx->pc = 0x353b74u;
    // NOP
    // 0x353b78: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353B78u;
    {
        const bool branch_taken_0x353b78 = (false);
        if (branch_taken_0x353b78) {
            ctx->pc = 0x353B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353b64;
        }
    }
    ctx->pc = 0x353B80u;
label_353b80:
    // 0x353b80: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x353b80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x353b84: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x353b84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x353b88: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x353b88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x353b8c: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x353b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x353b90: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x353b94: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x353b94u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x353b98: 0xf  sync
    ctx->pc = 0x353b98u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353b9c: 0x40f  sync.p
    ctx->pc = 0x353b9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353ba0: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x353ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x353ba4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x353ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x353ba8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x353ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x353bac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353bb0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x353BB0u;
    {
        const bool branch_taken_0x353bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353bb0) {
            ctx->pc = 0x353BE0u;
            goto label_353be0;
        }
    }
    ctx->pc = 0x353BB8u;
    // 0x353bb8: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x353bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x353bbc: 0xf  sync
    ctx->pc = 0x353bbcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353bc0: 0x40f  sync.p
    ctx->pc = 0x353bc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353bc4:
    // 0x353bc4: 0x0  nop
    ctx->pc = 0x353bc4u;
    // NOP
    // 0x353bc8: 0x0  nop
    ctx->pc = 0x353bc8u;
    // NOP
    // 0x353bcc: 0x0  nop
    ctx->pc = 0x353bccu;
    // NOP
    // 0x353bd0: 0x0  nop
    ctx->pc = 0x353bd0u;
    // NOP
    // 0x353bd4: 0x0  nop
    ctx->pc = 0x353bd4u;
    // NOP
    // 0x353bd8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353BD8u;
    {
        const bool branch_taken_0x353bd8 = (false);
        if (branch_taken_0x353bd8) {
            ctx->pc = 0x353BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353bc4;
        }
    }
    ctx->pc = 0x353BE0u;
label_353be0:
    // 0x353be0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x353be0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x353be4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x353be4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x353be8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x353be8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x353bec: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x353becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x353bf0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x353bf4: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x353bf4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x353bf8: 0xf  sync
    ctx->pc = 0x353bf8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353bfc: 0x40f  sync.p
    ctx->pc = 0x353bfcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353c00: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x353c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x353c04: 0x2652f000  addiu       $s2, $s2, -0x1000
    ctx->pc = 0x353c04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963200));
    // 0x353c08: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x353c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x353c0c: 0x2a420401  slti        $v0, $s2, 0x401
    ctx->pc = 0x353c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x353c10: 0x1040ff9d  beqz        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x353C10u;
    {
        const bool branch_taken_0x353c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353c10) {
            ctx->pc = 0x353A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353a88;
        }
    }
    ctx->pc = 0x353C18u;
label_353c18:
    // 0x353c18: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x353C18u;
    {
        const bool branch_taken_0x353c18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x353C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353C18u;
        // 0x353c1c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c18) {
            ctx->pc = 0x353CB0u;
            goto label_353cb0;
        }
    }
    ctx->pc = 0x353C20u;
    // 0x353c20: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x353c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x353c24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x353c24u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x353c28: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x353c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x353c2c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x353C2Cu;
    {
        const bool branch_taken_0x353c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x353C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353C2Cu;
        // 0x353c30: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c2c) {
            ctx->pc = 0x353C68u;
            goto label_353c68;
        }
    }
    ctx->pc = 0x353C34u;
    // 0x353c34: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x353c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x353c38: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x353c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x353c3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x353c3cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x353c40: 0xf  sync
    ctx->pc = 0x353c40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353c44: 0x40f  sync.p
    ctx->pc = 0x353c44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353c48:
    // 0x353c48: 0x0  nop
    ctx->pc = 0x353c48u;
    // NOP
    // 0x353c4c: 0x0  nop
    ctx->pc = 0x353c4cu;
    // NOP
    // 0x353c50: 0x0  nop
    ctx->pc = 0x353c50u;
    // NOP
    // 0x353c54: 0x0  nop
    ctx->pc = 0x353c54u;
    // NOP
    // 0x353c58: 0x0  nop
    ctx->pc = 0x353c58u;
    // NOP
    // 0x353c5c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353C5Cu;
    {
        const bool branch_taken_0x353c5c = (false);
        if (branch_taken_0x353c5c) {
            ctx->pc = 0x353C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353c48;
        }
    }
    ctx->pc = 0x353C64u;
    // 0x353c64: 0x0  nop
    ctx->pc = 0x353c64u;
    // NOP
label_353c68:
    // 0x353c68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x353c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x353c6c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x353c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x353c70: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x353c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x353c74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x353c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x353c78: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x353c78u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x353c7c: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x353c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x353c80: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x353c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x353c84: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x353c84u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x1000d080
    // 0x353c88: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x353c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x353c8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x353c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x353c90: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x353c90u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x1000d010
    // 0x353c94: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x353c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x353c98: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x353c98u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 18)); // MMIO: 0x1000d020
    // 0x353c9c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x353ca0: 0xac25d000  sw          $a1, -0x3000($at)
    ctx->pc = 0x353ca0u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x353ca4: 0xf  sync
    ctx->pc = 0x353ca4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353ca8: 0x40f  sync.p
    ctx->pc = 0x353ca8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353cac: 0x0  nop
    ctx->pc = 0x353cacu;
    // NOP
label_353cb0:
    // 0x353cb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x353cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x353cb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x353cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353cb8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x353cb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x353CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353CC0u;
        // 0x353cc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353CC8u;
}
