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

// Function: sub_004436E0
// Address: 0x4436e0 - 0x443a60
void sub_004436E0_0x4436e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004436E0_0x4436e0");
#endif

    switch (ctx->pc) {
        case 0x443724u: goto label_443724;
        case 0x443950u: goto label_443950;
        case 0x4439e0u: goto label_4439e0;
        default: break;
    }

    ctx->pc = 0x4436e0u;

    // 0x4436e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4436e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4436e4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x4436e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x4436e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4436e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4436ec: 0x2443d7c0  addiu       $v1, $v0, -0x2840
    ctx->pc = 0x4436ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
    // 0x4436f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4436f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4436f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4436f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4436f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4436f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4436fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4436fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x443700: 0x8c710024  lw          $s1, 0x24($v1)
    ctx->pc = 0x443700u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5DD7E4u));
    // 0x443704: 0x12200080  beqz        $s1, . + 4 + (0x80 << 2)
    ctx->pc = 0x443704u;
    {
        const bool branch_taken_0x443704 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x443708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443704u;
        // 0x443708: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443704) {
            ctx->pc = 0x443908u;
            goto label_443908;
        }
    }
    ctx->pc = 0x44370Cu;
    // 0x44370c: 0x8f82beb8  lw          $v0, -0x4148($gp)
    ctx->pc = 0x44370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x443710: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x443710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x443714: 0x8c720028  lw          $s2, 0x28($v1)
    ctx->pc = 0x443714u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x443718: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x443718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x44371c: 0xc10a322  jal         func_428C88
    ctx->pc = 0x44371Cu;
    SET_GPR_U32(ctx, 31, 0x443724u);
    ctx->pc = 0x443720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44371Cu;
    // 0x443720: 0x2228021  addu        $s0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x44371Cu, 0x443724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443724u;
label_443724:
    // 0x443724: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x443724u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x443728: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x443728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x44372c: 0x34c68004  ori         $a2, $a2, 0x8004
    ctx->pc = 0x44372cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32772);
    // 0x443730: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x443730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x443734: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x443734u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x443738: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x443738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x44373c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x44373cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x443740: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x443740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x443744: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x443744u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x443748: 0x9e040008  lwu         $a0, 0x8($s0)
    ctx->pc = 0x443748u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x44374c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x44374cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x443750: 0x9e02000c  lwu         $v0, 0xC($s0)
    ctx->pc = 0x443750u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x443754: 0x92230020  lbu         $v1, 0x20($s1)
    ctx->pc = 0x443754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x443758: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x443758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x44375c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x44375cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x443760: 0x14650011  bne         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x443760u;
    {
        const bool branch_taken_0x443760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x443764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443760u;
        // 0x443764: 0x823025  or          $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443760) {
            ctx->pc = 0x4437A8u;
            goto label_4437a8;
        }
    }
    ctx->pc = 0x443768u;
    // 0x443768: 0x8f82ae94  lw          $v0, -0x516C($gp)
    ctx->pc = 0x443768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
    // 0x44376c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x44376cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x443770: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x443770u;
    {
        const bool branch_taken_0x443770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x443774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443770u;
        // 0x443774: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443770) {
            ctx->pc = 0x443780u;
            goto label_443780;
        }
    }
    ctx->pc = 0x443778u;
    // 0x443778: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x443778u;
    {
        const bool branch_taken_0x443778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443778u;
        // 0x44377c: 0xdc443340  ld          $a0, 0x3340($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 13120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443778) {
            ctx->pc = 0x443788u;
            goto label_443788;
        }
    }
    ctx->pc = 0x443780u;
label_443780:
    // 0x443780: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x443780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x443784: 0xdc4431d0  ld          $a0, 0x31D0($v0)
    ctx->pc = 0x443784u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x6231D0u));
label_443788:
    // 0x443788: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x443788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x44378c: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x44378cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x443790: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x443790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x443794: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x443794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x443798: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x443798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x44379c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x44379cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4437a0: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x4437a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x4437a4: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4437a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4437a8:
    // 0x4437a8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4437a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4437ac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4437acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4437b0: 0x72200b  movn        $a0, $v1, $s2
    ctx->pc = 0x4437b0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x4437b4: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x4437b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x4437b8: 0x8f88be20  lw          $t0, -0x41E0($gp)
    ctx->pc = 0x4437b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x4437bc: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x4437bcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x4437c0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x4437c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4437c4: 0xaf88be20  sw          $t0, -0x41E0($gp)
    ctx->pc = 0x4437c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 8));
    // 0x4437c8: 0xdf86ae68  ld          $a2, -0x5198($gp)
    ctx->pc = 0x4437c8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x4437cc: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x4437ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x4437d0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4437d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4437d4: 0x3442ffe7  ori         $v0, $v0, 0xFFE7
    ctx->pc = 0x4437d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65511);
    // 0x4437d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4437d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4437dc: 0x3442fde3  ori         $v0, $v0, 0xFDE3
    ctx->pc = 0x4437dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64995);
    // 0x4437e0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x4437e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x4437e4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4437e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4437e8: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x4437e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4437ec: 0xff86ae68  sd          $a2, -0x5198($gp)
    ctx->pc = 0x4437ecu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946408), GPR_U64(ctx, 6));
    // 0x4437f0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x4437f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4437f4: 0x42b02  srl         $a1, $a0, 12
    ctx->pc = 0x4437f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x4437f8: 0xf2180b  movn        $v1, $a3, $s2
    ctx->pc = 0x4437f8u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x4437fc: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x4437fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x443800: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x443800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x443804: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x443804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x443808: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x443808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x44380c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x44380cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x443810: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x443810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x443814: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x443814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x443818: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x443818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x44381c: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x44381cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x443820: 0xff86ae68  sd          $a2, -0x5198($gp)
    ctx->pc = 0x443820u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946408), GPR_U64(ctx, 6));
    // 0x443824: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x443824u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x443828: 0x25020010  addiu       $v0, $t0, 0x10
    ctx->pc = 0x443828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x44382c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x44382cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x443830: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x443830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x443834: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x443834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x443838: 0x8e65d7c0  lw          $a1, -0x2840($s3)
    ctx->pc = 0x443838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956992)));
    // 0x44383c: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x44383cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x443840: 0x31538  dsll        $v0, $v1, 20
    ctx->pc = 0x443840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 20);
    // 0x443844: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x443844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x443848: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x443848u;
    {
        const bool branch_taken_0x443848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443848u;
        // 0x44384c: 0x643025  or          $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443848) {
            ctx->pc = 0x4438B0u;
            goto label_4438b0;
        }
    }
    ctx->pc = 0x443850u;
    // 0x443850: 0x9e03001c  lwu         $v1, 0x1C($s0)
    ctx->pc = 0x443850u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x443854: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x443854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x443858: 0x9e050018  lwu         $a1, 0x18($s0)
    ctx->pc = 0x443858u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x44385c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x44385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x443860: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x443860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x443864: 0x92100b  movn        $v0, $a0, $s2
    ctx->pc = 0x443864u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x443868: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x443868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x44386c: 0xa6282d  daddu       $a1, $a1, $a2
    ctx->pc = 0x44386cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 6));
    // 0x443870: 0x70451b89  pcpyld      $v1, $v0, $a1
    ctx->pc = 0x443870u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x443874: 0x7d030010  sq          $v1, 0x10($t0)
    ctx->pc = 0x443874u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 3));
    // 0x443878: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x443878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x44387c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x44387cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x443880: 0x9e050020  lwu         $a1, 0x20($s0)
    ctx->pc = 0x443880u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x443884: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x443884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x443888: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x443888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x44388c: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x44388cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x443890: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x443890u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x443894: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x443894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x443898: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x443898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x44389c: 0xa6282d  daddu       $a1, $a1, $a2
    ctx->pc = 0x44389cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 6));
    // 0x4438a0: 0x70651b89  pcpyld      $v1, $v1, $a1
    ctx->pc = 0x4438a0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x4438a4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4438A4u;
    {
        const bool branch_taken_0x4438a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4438A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4438A4u;
        // 0x4438a8: 0x7d030020  sq          $v1, 0x20($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4438a4) {
            ctx->pc = 0x443900u;
            goto label_443900;
        }
    }
    ctx->pc = 0x4438ACu;
    // 0x4438ac: 0x0  nop
    ctx->pc = 0x4438acu;
    // NOP
label_4438b0:
    // 0x4438b0: 0x9e03001c  lwu         $v1, 0x1C($s0)
    ctx->pc = 0x4438b0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4438b4: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x4438b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x4438b8: 0x9e050018  lwu         $a1, 0x18($s0)
    ctx->pc = 0x4438b8u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4438bc: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x4438bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x4438c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4438c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4438c4: 0x92100b  movn        $v0, $a0, $s2
    ctx->pc = 0x4438c4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4438c8: 0xa33025  or          $a2, $a1, $v1
    ctx->pc = 0x4438c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4438cc: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x4438ccu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x4438d0: 0x7d030010  sq          $v1, 0x10($t0)
    ctx->pc = 0x4438d0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 3));
    // 0x4438d4: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x4438d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x4438d8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x4438d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x4438dc: 0x9e050020  lwu         $a1, 0x20($s0)
    ctx->pc = 0x4438dcu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4438e0: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x4438e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x4438e4: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x4438e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x4438e8: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x4438e8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4438ec: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x4438ecu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x4438f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4438f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4438f4: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x4438f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4438f8: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x4438f8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x4438fc: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x4438fcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
label_443900:
    // 0x443900: 0x25020030  addiu       $v0, $t0, 0x30
    ctx->pc = 0x443900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x443904: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x443904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_443908:
    // 0x443908: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x443908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44390c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x44390cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x443910: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x443910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x443914: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x443914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x443918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44391c: 0x3e00008  jr          $ra
    ctx->pc = 0x44391Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44391Cu;
        // 0x443920: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44391Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443924u;
    // 0x443924: 0x0  nop
    ctx->pc = 0x443924u;
    // NOP
    // 0x443928: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x443928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x44392c: 0x2446d7c0  addiu       $a2, $v0, -0x2840
    ctx->pc = 0x44392cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
    // 0x443930: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x443930u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443934: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x443934u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5DD7D8u));
    // 0x443938: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x443938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44393c: 0x10e20004  beq         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44393Cu;
    {
        const bool branch_taken_0x44393c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x443940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44393Cu;
        // 0x443940: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44393c) {
            ctx->pc = 0x443950u;
            goto label_443950;
        }
    }
    ctx->pc = 0x443944u;
    // 0x443944: 0x8d42d7c0  lw          $v0, -0x2840($t2)
    ctx->pc = 0x443944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294956992)));
    // 0x443948: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x443948u;
    {
        const bool branch_taken_0x443948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443948u;
        // 0x44394c: 0x250407ff  addiu       $a0, $t0, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443948) {
            ctx->pc = 0x443958u;
            goto label_443958;
        }
    }
    ctx->pc = 0x443950u;
label_443950:
    // 0x443950: 0x3e00008  jr          $ra
    ctx->pc = 0x443950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443950u;
        // 0x443954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443958u;
label_443958:
    // 0x443958: 0x2403f800  addiu       $v1, $zero, -0x800
    ctx->pc = 0x443958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x44395c: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x44395cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x443960: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x443960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x443964: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x443964u;
    {
        const bool branch_taken_0x443964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x443968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443964u;
        // 0x443968: 0x834024  and         $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443964) {
            ctx->pc = 0x443984u;
            goto label_443984;
        }
    }
    ctx->pc = 0x44396Cu;
    // 0x44396c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x44396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x443970: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x443970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x443974: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x443974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x443978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x443978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x44397c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x44397Cu;
    {
        const bool branch_taken_0x44397c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44397Cu;
        // 0x443980: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44397c) {
            ctx->pc = 0x44398Cu;
            goto label_44398c;
        }
    }
    ctx->pc = 0x443984u;
label_443984:
    // 0x443984: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x443984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x443988: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x443988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_44398c:
    // 0x44398c: 0x2544d7c0  addiu       $a0, $t2, -0x2840
    ctx->pc = 0x44398cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956992));
    // 0x443990: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x443990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x443994: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x443994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x443998: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x443998u;
    {
        const bool branch_taken_0x443998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443998u;
        // 0x44399c: 0x103102a  slt         $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x443998) {
            ctx->pc = 0x443950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_443950;
        }
    }
    ctx->pc = 0x4439A0u;
    // 0x4439a0: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4439A0u;
    {
        const bool branch_taken_0x4439a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4439A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4439A0u;
        // 0x4439a4: 0x8d42d7c0  lw          $v0, -0x2840($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294956992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4439a0) {
            ctx->pc = 0x443950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_443950;
        }
    }
    ctx->pc = 0x4439A8u;
    // 0x4439a8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4439A8u;
    {
        const bool branch_taken_0x4439a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4439ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4439A8u;
        // 0x4439ac: 0x2543d7c0  addiu       $v1, $t2, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4439a8) {
            ctx->pc = 0x443A34u;
            goto label_443a34;
        }
    }
    ctx->pc = 0x4439B0u;
    // 0x4439b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4439b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4439b4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4439b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4439b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4439b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4439bc: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4439BCu;
    {
        const bool branch_taken_0x4439bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4439C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4439BCu;
        // 0x4439c0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4439bc) {
            ctx->pc = 0x443A1Cu;
            goto label_443a1c;
        }
    }
    ctx->pc = 0x4439C4u;
    // 0x4439c4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4439c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4439c8: 0x8cc90010  lw          $t1, 0x10($a2)
    ctx->pc = 0x4439c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4439cc: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x4439ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4439d0: 0x8f87beb8  lw          $a3, -0x4148($gp)
    ctx->pc = 0x4439d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x4439d4: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x4439d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4439d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4439d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4439dc: 0x0  nop
    ctx->pc = 0x4439dcu;
    // NOP
label_4439e0:
    // 0x4439e0: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x4439e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4439e4: 0x891026  xor         $v0, $a0, $t1
    ctx->pc = 0x4439e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 9));
    // 0x4439e8: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x4439e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x4439ec: 0x8b2818  mult        $a1, $a0, $t3
    ctx->pc = 0x4439ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4439f0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4439f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4439f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4439f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4439f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4439F8u;
    {
        const bool branch_taken_0x4439f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4439FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4439F8u;
        // 0x4439fc: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4439f8) {
            ctx->pc = 0x443A10u;
            goto label_443a10;
        }
    }
    ctx->pc = 0x443A00u;
    // 0x443a00: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x443a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x443a04: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x443a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x443a08: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x443a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x443a0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x443a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_443a10:
    // 0x443a10: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x443a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x443a14: 0x1482fff2  bne         $a0, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x443A14u;
    {
        const bool branch_taken_0x443a14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x443A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443A14u;
        // 0x443a18: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443a14) {
            ctx->pc = 0x4439E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4439e0;
        }
    }
    ctx->pc = 0x443A1Cu;
label_443a1c:
    // 0x443a1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x443a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x443a20: 0x2543d7c0  addiu       $v1, $t2, -0x2840
    ctx->pc = 0x443a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956992));
    // 0x443a24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x443a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x443a28: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x443a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x443a2c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x443a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x443a30: 0x2543d7c0  addiu       $v1, $t2, -0x2840
    ctx->pc = 0x443a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956992));
label_443a34:
    // 0x443a34: 0xaf80bec0  sw          $zero, -0x4140($gp)
    ctx->pc = 0x443a34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
    // 0x443a38: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x443a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x443a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x443a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x443a40: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x443a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x443a44: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x443a44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x443a48: 0xac680018  sw          $t0, 0x18($v1)
    ctx->pc = 0x443a48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 8));
    // 0x443a4c: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x443a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x443a50: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x443a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x443a54: 0x3e00008  jr          $ra
    ctx->pc = 0x443A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443A54u;
        // 0x443a58: 0xac65001c  sw          $a1, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443A5Cu;
    // 0x443a5c: 0x0  nop
    ctx->pc = 0x443a5cu;
    // NOP
    ctx->pc = 0x443a60u;
}
