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

// Function: sub_00352628
// Address: 0x352628 - 0x352c58
void sub_00352628_0x352628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352628_0x352628");
#endif

    switch (ctx->pc) {
        case 0x35266cu: goto label_35266c;
        case 0x352698u: goto label_352698;
        case 0x3526e8u: goto label_3526e8;
        case 0x352710u: goto label_352710;
        case 0x352748u: goto label_352748;
        case 0x352860u: goto label_352860;
        case 0x3528c4u: goto label_3528c4;
        case 0x352924u: goto label_352924;
        case 0x352970u: goto label_352970;
        case 0x35298cu: goto label_35298c;
        case 0x3529e8u: goto label_3529e8;
        case 0x352a4cu: goto label_352a4c;
        case 0x352aacu: goto label_352aac;
        case 0x352b30u: goto label_352b30;
        case 0x352c10u: goto label_352c10;
        default: break;
    }

    ctx->pc = 0x352628u;

    // 0x352628: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35262c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35262cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x352630: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x352630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x352634: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x352634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x352638: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x352638u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x35263c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x35263cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x352640: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x352640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x352644: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x352644u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
    // 0x352648: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x352648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x35264c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x35264cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x352650: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x352650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x352654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x352654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x352658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35265c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35265cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352660: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x352660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352664: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x352664u;
    SET_GPR_U32(ctx, 31, 0x35266Cu);
    ctx->pc = 0x352668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352664u;
    // 0x352668: 0xa29823  subu        $s3, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x352664u, 0x35266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35266Cu;
label_35266c:
    // 0x35266c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35266cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x352670: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x352670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x352674: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x352674u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x352678: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x352678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35267c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35267Cu;
    {
        const bool branch_taken_0x35267c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35267Cu;
        // 0x352680: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35267c) {
            ctx->pc = 0x3526B8u;
            goto label_3526b8;
        }
    }
    ctx->pc = 0x352684u;
    // 0x352684: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x352684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x352688: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x352688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35268c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35268cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x352690: 0xf  sync
    ctx->pc = 0x352690u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352694: 0x40f  sync.p
    ctx->pc = 0x352694u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_352698:
    // 0x352698: 0x0  nop
    ctx->pc = 0x352698u;
    // NOP
    // 0x35269c: 0x0  nop
    ctx->pc = 0x35269cu;
    // NOP
    // 0x3526a0: 0x0  nop
    ctx->pc = 0x3526a0u;
    // NOP
    // 0x3526a4: 0x0  nop
    ctx->pc = 0x3526a4u;
    // NOP
    // 0x3526a8: 0x0  nop
    ctx->pc = 0x3526a8u;
    // NOP
    // 0x3526ac: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3526ACu;
    {
        const bool branch_taken_0x3526ac = (false);
        if (branch_taken_0x3526ac) {
            ctx->pc = 0x352698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352698;
        }
    }
    ctx->pc = 0x3526B4u;
    // 0x3526b4: 0x0  nop
    ctx->pc = 0x3526b4u;
    // NOP
label_3526b8:
    // 0x3526b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3526b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3526bc: 0x2a250401  slti        $a1, $s1, 0x401
    ctx->pc = 0x3526bcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x3526c0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x3526c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x3526c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3526c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3526c8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3526c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3526cc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3526CCu;
    {
        const bool branch_taken_0x3526cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3526D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526CCu;
        // 0x3526d0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3526cc) {
            ctx->pc = 0x35272Cu;
            goto label_35272c;
        }
    }
    ctx->pc = 0x3526D4u;
    // 0x3526d4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3526d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3526d8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x3526d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x3526dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3526dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x3526e0: 0xf  sync
    ctx->pc = 0x3526e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3526e4: 0x40f  sync.p
    ctx->pc = 0x3526e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3526e8:
    // 0x3526e8: 0x0  nop
    ctx->pc = 0x3526e8u;
    // NOP
    // 0x3526ec: 0x0  nop
    ctx->pc = 0x3526ecu;
    // NOP
    // 0x3526f0: 0x0  nop
    ctx->pc = 0x3526f0u;
    // NOP
    // 0x3526f4: 0x0  nop
    ctx->pc = 0x3526f4u;
    // NOP
    // 0x3526f8: 0x0  nop
    ctx->pc = 0x3526f8u;
    // NOP
    // 0x3526fc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3526FCu;
    {
        const bool branch_taken_0x3526fc = (false);
        if (branch_taken_0x3526fc) {
            ctx->pc = 0x3526E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3526e8;
        }
    }
    ctx->pc = 0x352704u;
    // 0x352704: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x352704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x352708: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x352708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35270c: 0x0  nop
    ctx->pc = 0x35270cu;
    // NOP
label_352710:
    // 0x352710: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x352710u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x352714: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x352714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x352718: 0x0  nop
    ctx->pc = 0x352718u;
    // NOP
    // 0x35271c: 0x0  nop
    ctx->pc = 0x35271cu;
    // NOP
    // 0x352720: 0x0  nop
    ctx->pc = 0x352720u;
    // NOP
    // 0x352724: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x352724u;
    {
        const bool branch_taken_0x352724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x352724) {
            ctx->pc = 0x352710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352710;
        }
    }
    ctx->pc = 0x35272Cu;
label_35272c:
    // 0x35272c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x35272cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x352730: 0x240b03ff  addiu       $t3, $zero, 0x3FF
    ctx->pc = 0x352730u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x352734: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x352734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x352738: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x352738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x35273c: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x35273cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x352740: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x352740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x352744: 0x0  nop
    ctx->pc = 0x352744u;
    // NOP
label_352748:
    // 0x352748: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x352748u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35274c: 0x256bfff0  addiu       $t3, $t3, -0x10
    ctx->pc = 0x35274cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967280));
    // 0x352750: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x352750u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x352754: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x352754u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352758: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x352758u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x35275c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x35275cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352760: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x352760u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x352764: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x352764u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352768: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x352768u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x35276c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x35276cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352770: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x352770u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x352774: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x352774u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352778: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x352778u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x35277c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x35277cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352780: 0x7c830060  sq          $v1, 0x60($a0)
    ctx->pc = 0x352780u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 3));
    // 0x352784: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x352784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352788: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x352788u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x35278c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x35278cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352790: 0x7c830080  sq          $v1, 0x80($a0)
    ctx->pc = 0x352790u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 3));
    // 0x352794: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x352794u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352798: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x352798u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x35279c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x35279cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3527a0: 0x7c8300a0  sq          $v1, 0xA0($a0)
    ctx->pc = 0x3527a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 3));
    // 0x3527a4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3527a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3527a8: 0x7c8200b0  sq          $v0, 0xB0($a0)
    ctx->pc = 0x3527a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 2));
    // 0x3527ac: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3527acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3527b0: 0x7c8300c0  sq          $v1, 0xC0($a0)
    ctx->pc = 0x3527b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 3));
    // 0x3527b4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3527b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3527b8: 0x7c8200d0  sq          $v0, 0xD0($a0)
    ctx->pc = 0x3527b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 2));
    // 0x3527bc: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3527bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3527c0: 0x7c8300e0  sq          $v1, 0xE0($a0)
    ctx->pc = 0x3527c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), GPR_VEC(ctx, 3));
    // 0x3527c4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3527c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3527c8: 0x7c8200f0  sq          $v0, 0xF0($a0)
    ctx->pc = 0x3527c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), GPR_VEC(ctx, 2));
    // 0x3527cc: 0x561ffde  bgez        $t3, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3527CCu;
    {
        const bool branch_taken_0x3527cc = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x3527D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3527CCu;
        // 0x3527d0: 0x24840100  addiu       $a0, $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3527cc) {
            ctx->pc = 0x352748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352748;
        }
    }
    ctx->pc = 0x3527D4u;
    // 0x3527d4: 0x14a000ca  bnez        $a1, . + 4 + (0xCA << 2)
    ctx->pc = 0x3527D4u;
    {
        const bool branch_taken_0x3527d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3527D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3527D4u;
        // 0x3527d8: 0x240b0400  addiu       $t3, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3527d4) {
            ctx->pc = 0x352B00u;
            goto label_352b00;
        }
    }
    ctx->pc = 0x3527DCu;
    // 0x3527dc: 0x1711023  subu        $v0, $t3, $s1
    ctx->pc = 0x3527dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x3527e0: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x3527e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x3527e4: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x3527e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x3527e8: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x3527e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x3527ec: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3527ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3527f0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3527f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3527f4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3527f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3527f8: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x3527f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3527fc: 0x354ad000  ori         $t2, $t2, 0xD000
    ctx->pc = 0x3527fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)53248);
    // 0x352800: 0x3529e020  ori         $t1, $t1, 0xE020
    ctx->pc = 0x352800u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)57376);
    // 0x352804: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x352804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x352808: 0x3508e010  ori         $t0, $t0, 0xE010
    ctx->pc = 0x352808u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57360);
    // 0x35280c: 0x34e7d080  ori         $a3, $a3, 0xD080
    ctx->pc = 0x35280cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)53376);
    // 0x352810: 0x34c6d010  ori         $a2, $a2, 0xD010
    ctx->pc = 0x352810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53264);
    // 0x352814: 0x34a5d020  ori         $a1, $a1, 0xD020
    ctx->pc = 0x352814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53280);
    // 0x352818: 0x2a220401  slti        $v0, $s1, 0x401
    ctx->pc = 0x352818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x35281c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x35281Cu;
    {
        const bool branch_taken_0x35281c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35281Cu;
        // 0x352820: 0x240c0400  addiu       $t4, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35281c) {
            ctx->pc = 0x352908u;
            goto label_352908;
        }
    }
    ctx->pc = 0x352824u;
    // 0x352824: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x352824u;
    {
        const bool branch_taken_0x352824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352824u;
        // 0x352828: 0x28620c00  slti        $v0, $v1, 0xC00 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3072) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352824) {
            ctx->pc = 0x352970u;
            goto label_352970;
        }
    }
    ctx->pc = 0x35282Cu;
    // 0x35282c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x35282Cu;
    {
        const bool branch_taken_0x35282c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35282Cu;
        // 0x352830: 0x28620800  slti        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35282c) {
            ctx->pc = 0x352908u;
            goto label_352908;
        }
    }
    ctx->pc = 0x352834u;
    // 0x352834: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x352834u;
    {
        const bool branch_taken_0x352834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352834u;
        // 0x352838: 0x28620400  slti        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352834) {
            ctx->pc = 0x3528A8u;
            goto label_3528a8;
        }
    }
    ctx->pc = 0x35283Cu;
    // 0x35283c: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x35283Cu;
    {
        const bool branch_taken_0x35283c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35283c) {
            ctx->pc = 0x352970u;
            goto label_352970;
        }
    }
    ctx->pc = 0x352844u;
    // 0x352844: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x352844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x352848: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x352848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35284c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35284Cu;
    {
        const bool branch_taken_0x35284c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35284c) {
            ctx->pc = 0x352880u;
            goto label_352880;
        }
    }
    ctx->pc = 0x352854u;
    // 0x352854: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x352854u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x352858: 0xf  sync
    ctx->pc = 0x352858u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35285c: 0x40f  sync.p
    ctx->pc = 0x35285cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_352860:
    // 0x352860: 0x0  nop
    ctx->pc = 0x352860u;
    // NOP
    // 0x352864: 0x0  nop
    ctx->pc = 0x352864u;
    // NOP
    // 0x352868: 0x0  nop
    ctx->pc = 0x352868u;
    // NOP
    // 0x35286c: 0x0  nop
    ctx->pc = 0x35286cu;
    // NOP
    // 0x352870: 0x0  nop
    ctx->pc = 0x352870u;
    // NOP
    // 0x352874: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x352874u;
    {
        const bool branch_taken_0x352874 = (false);
        if (branch_taken_0x352874) {
            ctx->pc = 0x352860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352860;
        }
    }
    ctx->pc = 0x35287Cu;
    // 0x35287c: 0x0  nop
    ctx->pc = 0x35287cu;
    // NOP
label_352880:
    // 0x352880: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x352880u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x352884: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x352884u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x352888: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x352888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x35288c: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x35288cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x352890: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x352890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x352894: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x352894u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x352898: 0xf  sync
    ctx->pc = 0x352898u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35289c: 0x40f  sync.p
    ctx->pc = 0x35289cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3528a0: 0x26104000  addiu       $s0, $s0, 0x4000
    ctx->pc = 0x3528a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16384));
    // 0x3528a4: 0x2631fc00  addiu       $s1, $s1, -0x400
    ctx->pc = 0x3528a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966272));
label_3528a8:
    // 0x3528a8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3528a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3528ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3528acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3528b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3528B0u;
    {
        const bool branch_taken_0x3528b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3528b0) {
            ctx->pc = 0x3528E0u;
            goto label_3528e0;
        }
    }
    ctx->pc = 0x3528B8u;
    // 0x3528b8: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x3528b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x3528bc: 0xf  sync
    ctx->pc = 0x3528bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3528c0: 0x40f  sync.p
    ctx->pc = 0x3528c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3528c4:
    // 0x3528c4: 0x0  nop
    ctx->pc = 0x3528c4u;
    // NOP
    // 0x3528c8: 0x0  nop
    ctx->pc = 0x3528c8u;
    // NOP
    // 0x3528cc: 0x0  nop
    ctx->pc = 0x3528ccu;
    // NOP
    // 0x3528d0: 0x0  nop
    ctx->pc = 0x3528d0u;
    // NOP
    // 0x3528d4: 0x0  nop
    ctx->pc = 0x3528d4u;
    // NOP
    // 0x3528d8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3528D8u;
    {
        const bool branch_taken_0x3528d8 = (false);
        if (branch_taken_0x3528d8) {
            ctx->pc = 0x3528C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3528c4;
        }
    }
    ctx->pc = 0x3528E0u;
label_3528e0:
    // 0x3528e0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x3528e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x3528e4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3528e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x3528e8: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x3528e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x3528ec: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x3528ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x3528f0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3528f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3528f4: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x3528f4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x3528f8: 0xf  sync
    ctx->pc = 0x3528f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3528fc: 0x40f  sync.p
    ctx->pc = 0x3528fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352900: 0x26104000  addiu       $s0, $s0, 0x4000
    ctx->pc = 0x352900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16384));
    // 0x352904: 0x2631fc00  addiu       $s1, $s1, -0x400
    ctx->pc = 0x352904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966272));
label_352908:
    // 0x352908: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x352908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x35290c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35290cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x352910: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x352910u;
    {
        const bool branch_taken_0x352910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352910) {
            ctx->pc = 0x352940u;
            goto label_352940;
        }
    }
    ctx->pc = 0x352918u;
    // 0x352918: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x352918u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x35291c: 0xf  sync
    ctx->pc = 0x35291cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352920: 0x40f  sync.p
    ctx->pc = 0x352920u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_352924:
    // 0x352924: 0x0  nop
    ctx->pc = 0x352924u;
    // NOP
    // 0x352928: 0x0  nop
    ctx->pc = 0x352928u;
    // NOP
    // 0x35292c: 0x0  nop
    ctx->pc = 0x35292cu;
    // NOP
    // 0x352930: 0x0  nop
    ctx->pc = 0x352930u;
    // NOP
    // 0x352934: 0x0  nop
    ctx->pc = 0x352934u;
    // NOP
    // 0x352938: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x352938u;
    {
        const bool branch_taken_0x352938 = (false);
        if (branch_taken_0x352938) {
            ctx->pc = 0x352924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352924;
        }
    }
    ctx->pc = 0x352940u;
label_352940:
    // 0x352940: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x352940u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x352944: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x352944u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x352948: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x352948u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x35294c: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x35294cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x352950: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x352950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x352954: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x352954u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x352958: 0xf  sync
    ctx->pc = 0x352958u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35295c: 0x40f  sync.p
    ctx->pc = 0x35295cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352960: 0x2631fc00  addiu       $s1, $s1, -0x400
    ctx->pc = 0x352960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966272));
    // 0x352964: 0x2a220401  slti        $v0, $s1, 0x401
    ctx->pc = 0x352964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x352968: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x352968u;
    {
        const bool branch_taken_0x352968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352968u;
        // 0x35296c: 0x26104000  addiu       $s0, $s0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352968) {
            ctx->pc = 0x352B00u;
            goto label_352b00;
        }
    }
    ctx->pc = 0x352970u;
label_352970:
    // 0x352970: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x352970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x352974: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x352974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x352978: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x352978u;
    {
        const bool branch_taken_0x352978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352978) {
            ctx->pc = 0x3529A8u;
            goto label_3529a8;
        }
    }
    ctx->pc = 0x352980u;
    // 0x352980: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x352980u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x352984: 0xf  sync
    ctx->pc = 0x352984u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352988: 0x40f  sync.p
    ctx->pc = 0x352988u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35298c:
    // 0x35298c: 0x0  nop
    ctx->pc = 0x35298cu;
    // NOP
    // 0x352990: 0x0  nop
    ctx->pc = 0x352990u;
    // NOP
    // 0x352994: 0x0  nop
    ctx->pc = 0x352994u;
    // NOP
    // 0x352998: 0x0  nop
    ctx->pc = 0x352998u;
    // NOP
    // 0x35299c: 0x0  nop
    ctx->pc = 0x35299cu;
    // NOP
    // 0x3529a0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3529A0u;
    {
        const bool branch_taken_0x3529a0 = (false);
        if (branch_taken_0x3529a0) {
            ctx->pc = 0x35298Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35298c;
        }
    }
    ctx->pc = 0x3529A8u;
label_3529a8:
    // 0x3529a8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x3529a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x3529ac: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3529acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x3529b0: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x3529b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x3529b4: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x3529b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x3529b8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3529b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3529bc: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x3529bcu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x3529c0: 0xf  sync
    ctx->pc = 0x3529c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3529c4: 0x40f  sync.p
    ctx->pc = 0x3529c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3529c8: 0x26034000  addiu       $v1, $s0, 0x4000
    ctx->pc = 0x3529c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16384));
    // 0x3529cc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3529ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3529d0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3529d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3529d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3529D4u;
    {
        const bool branch_taken_0x3529d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3529d4) {
            ctx->pc = 0x352A08u;
            goto label_352a08;
        }
    }
    ctx->pc = 0x3529DCu;
    // 0x3529dc: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x3529dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x3529e0: 0xf  sync
    ctx->pc = 0x3529e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3529e4: 0x40f  sync.p
    ctx->pc = 0x3529e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3529e8:
    // 0x3529e8: 0x0  nop
    ctx->pc = 0x3529e8u;
    // NOP
    // 0x3529ec: 0x0  nop
    ctx->pc = 0x3529ecu;
    // NOP
    // 0x3529f0: 0x0  nop
    ctx->pc = 0x3529f0u;
    // NOP
    // 0x3529f4: 0x0  nop
    ctx->pc = 0x3529f4u;
    // NOP
    // 0x3529f8: 0x0  nop
    ctx->pc = 0x3529f8u;
    // NOP
    // 0x3529fc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3529FCu;
    {
        const bool branch_taken_0x3529fc = (false);
        if (branch_taken_0x3529fc) {
            ctx->pc = 0x3529E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3529e8;
        }
    }
    ctx->pc = 0x352A04u;
    // 0x352a04: 0x0  nop
    ctx->pc = 0x352a04u;
    // NOP
label_352a08:
    // 0x352a08: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x352a08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x352a0c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x352a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x352a10: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x352a10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x352a14: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x352a14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x352a18: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x352a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x352a1c: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x352a1cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x352a20: 0xf  sync
    ctx->pc = 0x352a20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352a24: 0x40f  sync.p
    ctx->pc = 0x352a24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352a28: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x352a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x352a2c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x352a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x352a30: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x352a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x352a34: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x352a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x352a38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x352A38u;
    {
        const bool branch_taken_0x352a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352a38) {
            ctx->pc = 0x352A68u;
            goto label_352a68;
        }
    }
    ctx->pc = 0x352A40u;
    // 0x352a40: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x352a40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x352a44: 0xf  sync
    ctx->pc = 0x352a44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352a48: 0x40f  sync.p
    ctx->pc = 0x352a48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_352a4c:
    // 0x352a4c: 0x0  nop
    ctx->pc = 0x352a4cu;
    // NOP
    // 0x352a50: 0x0  nop
    ctx->pc = 0x352a50u;
    // NOP
    // 0x352a54: 0x0  nop
    ctx->pc = 0x352a54u;
    // NOP
    // 0x352a58: 0x0  nop
    ctx->pc = 0x352a58u;
    // NOP
    // 0x352a5c: 0x0  nop
    ctx->pc = 0x352a5cu;
    // NOP
    // 0x352a60: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x352A60u;
    {
        const bool branch_taken_0x352a60 = (false);
        if (branch_taken_0x352a60) {
            ctx->pc = 0x352A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352a4c;
        }
    }
    ctx->pc = 0x352A68u;
label_352a68:
    // 0x352a68: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x352a68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x352a6c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x352a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x352a70: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x352a70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x352a74: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x352a74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x352a78: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x352a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x352a7c: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x352a7cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x352a80: 0xf  sync
    ctx->pc = 0x352a80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352a84: 0x40f  sync.p
    ctx->pc = 0x352a84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352a88: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x352a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x352a8c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x352a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x352a90: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x352a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x352a94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x352a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x352a98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x352A98u;
    {
        const bool branch_taken_0x352a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352a98) {
            ctx->pc = 0x352AC8u;
            goto label_352ac8;
        }
    }
    ctx->pc = 0x352AA0u;
    // 0x352aa0: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x352aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x352aa4: 0xf  sync
    ctx->pc = 0x352aa4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352aa8: 0x40f  sync.p
    ctx->pc = 0x352aa8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_352aac:
    // 0x352aac: 0x0  nop
    ctx->pc = 0x352aacu;
    // NOP
    // 0x352ab0: 0x0  nop
    ctx->pc = 0x352ab0u;
    // NOP
    // 0x352ab4: 0x0  nop
    ctx->pc = 0x352ab4u;
    // NOP
    // 0x352ab8: 0x0  nop
    ctx->pc = 0x352ab8u;
    // NOP
    // 0x352abc: 0x0  nop
    ctx->pc = 0x352abcu;
    // NOP
    // 0x352ac0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x352AC0u;
    {
        const bool branch_taken_0x352ac0 = (false);
        if (branch_taken_0x352ac0) {
            ctx->pc = 0x352AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352aac;
        }
    }
    ctx->pc = 0x352AC8u;
label_352ac8:
    // 0x352ac8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x352ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x352acc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x352accu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x352ad0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x352ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x352ad4: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x352ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x352ad8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x352ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x352adc: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x352adcu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x352ae0: 0xf  sync
    ctx->pc = 0x352ae0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352ae4: 0x40f  sync.p
    ctx->pc = 0x352ae4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352ae8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x352ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x352aec: 0x2631f000  addiu       $s1, $s1, -0x1000
    ctx->pc = 0x352aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963200));
    // 0x352af0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x352af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x352af4: 0x2a220401  slti        $v0, $s1, 0x401
    ctx->pc = 0x352af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x352af8: 0x1040ff9d  beqz        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x352AF8u;
    {
        const bool branch_taken_0x352af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352af8) {
            ctx->pc = 0x352970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352970;
        }
    }
    ctx->pc = 0x352B00u;
label_352b00:
    // 0x352b00: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x352B00u;
    {
        const bool branch_taken_0x352b00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x352B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B00u;
        // 0x352b04: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352b00) {
            ctx->pc = 0x352BA0u;
            goto label_352ba0;
        }
    }
    ctx->pc = 0x352B08u;
    // 0x352b08: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x352b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x352b0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x352b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x352b10: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x352b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x352b14: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x352B14u;
    {
        const bool branch_taken_0x352b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B14u;
        // 0x352b18: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352b14) {
            ctx->pc = 0x352B50u;
            goto label_352b50;
        }
    }
    ctx->pc = 0x352B1Cu;
    // 0x352b1c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x352b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x352b20: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x352b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x352b24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x352b24u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x352b28: 0xf  sync
    ctx->pc = 0x352b28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352b2c: 0x40f  sync.p
    ctx->pc = 0x352b2cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_352b30:
    // 0x352b30: 0x0  nop
    ctx->pc = 0x352b30u;
    // NOP
    // 0x352b34: 0x0  nop
    ctx->pc = 0x352b34u;
    // NOP
    // 0x352b38: 0x0  nop
    ctx->pc = 0x352b38u;
    // NOP
    // 0x352b3c: 0x0  nop
    ctx->pc = 0x352b3cu;
    // NOP
    // 0x352b40: 0x0  nop
    ctx->pc = 0x352b40u;
    // NOP
    // 0x352b44: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x352B44u;
    {
        const bool branch_taken_0x352b44 = (false);
        if (branch_taken_0x352b44) {
            ctx->pc = 0x352B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352b30;
        }
    }
    ctx->pc = 0x352B4Cu;
    // 0x352b4c: 0x0  nop
    ctx->pc = 0x352b4cu;
    // NOP
label_352b50:
    // 0x352b50: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x352b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x352b54: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x352b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x352b58: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x352b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x352b5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x352b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x352b60: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x352b60u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x352b64: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x352b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x352b68: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x352b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x352b6c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x352b6cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x1000d080
    // 0x352b70: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x352b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x352b74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x352b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x352b78: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x352b78u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 16)); // MMIO: 0x1000d010
    // 0x352b7c: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x352b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x352b80: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x352b80u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 17)); // MMIO: 0x1000d020
    // 0x352b84: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x352b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x352b88: 0xac25d000  sw          $a1, -0x3000($at)
    ctx->pc = 0x352b88u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x352b8c: 0xf  sync
    ctx->pc = 0x352b8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352b90: 0x40f  sync.p
    ctx->pc = 0x352b90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352b94: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x352b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x352b98: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x352b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x352b9c: 0x0  nop
    ctx->pc = 0x352b9cu;
    // NOP
label_352ba0:
    // 0x352ba0: 0x52600027  beql        $s3, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x352BA0u;
    {
        const bool branch_taken_0x352ba0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x352ba0) {
            ctx->pc = 0x352BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352BA0u;
            // 0x352ba4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352C40u;
            goto label_352c40;
        }
    }
    ctx->pc = 0x352BA8u;
    // 0x352ba8: 0x1a600024  blez        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x352BA8u;
    {
        const bool branch_taken_0x352ba8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x352BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352BA8u;
        // 0x352bac: 0x131023  negu        $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352ba8) {
            ctx->pc = 0x352C3Cu;
            goto label_352c3c;
        }
    }
    ctx->pc = 0x352BB0u;
    // 0x352bb0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x352bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x352bb4: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x352bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x352bb8: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x352bb8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352bbc: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x352BBCu;
    {
        const bool branch_taken_0x352bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x352BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352BBCu;
        // 0x352bc0: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352bbc) {
            ctx->pc = 0x352C08u;
            goto label_352c08;
        }
    }
    ctx->pc = 0x352BC4u;
    // 0x352bc4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x352bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x352bc8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x352BC8u;
    {
        const bool branch_taken_0x352bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352BC8u;
        // 0x352bcc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352bc8) {
            ctx->pc = 0x352BF4u;
            goto label_352bf4;
        }
    }
    ctx->pc = 0x352BD0u;
    // 0x352bd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x352BD0u;
    {
        const bool branch_taken_0x352bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352BD0u;
        // 0x352bd4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352bd0) {
            ctx->pc = 0x352BE8u;
            goto label_352be8;
        }
    }
    ctx->pc = 0x352BD8u;
    // 0x352bd8: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x352bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x352bdc: 0x266bffff  addiu       $t3, $s3, -0x1
    ctx->pc = 0x352bdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x352be0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x352be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x352be4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x352be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_352be8:
    // 0x352be8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x352be8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x352bec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x352becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x352bf0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x352bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_352bf4:
    // 0x352bf4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x352bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x352bf8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x352bf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x352bfc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x352bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x352c00: 0x1160000e  beqz        $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x352C00u;
    {
        const bool branch_taken_0x352c00 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x352C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C00u;
        // 0x352c04: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c00) {
            ctx->pc = 0x352C3Cu;
            goto label_352c3c;
        }
    }
    ctx->pc = 0x352C08u;
label_352c08:
    // 0x352c08: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x352c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352c0c: 0x0  nop
    ctx->pc = 0x352c0cu;
    // NOP
label_352c10:
    // 0x352c10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x352c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x352c14: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x352c14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x352c18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x352c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x352c1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x352c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x352c20: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x352c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x352c24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x352c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x352c28: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x352c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x352c2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x352c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x352c30: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x352c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x352c34: 0x1560fff6  bnez        $t3, . + 4 + (-0xA << 2)
    ctx->pc = 0x352C34u;
    {
        const bool branch_taken_0x352c34 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x352C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C34u;
        // 0x352c38: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c34) {
            ctx->pc = 0x352C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352c10;
        }
    }
    ctx->pc = 0x352C3Cu;
label_352c3c:
    // 0x352c3c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x352c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_352c40:
    // 0x352c40: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x352c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x352c44: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x352c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x352c48: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x352c48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352c4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x352c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352c50: 0x3e00008  jr          $ra
    ctx->pc = 0x352C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C50u;
        // 0x352c54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352C58u;
}
