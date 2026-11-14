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

// Function: sub_00251710
// Address: 0x251710 - 0x251f00
void sub_00251710_0x251710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251710_0x251710");
#endif

    switch (ctx->pc) {
        case 0x251754u: goto label_251754;
        case 0x251764u: goto label_251764;
        case 0x251774u: goto label_251774;
        case 0x251780u: goto label_251780;
        case 0x2517a4u: goto label_2517a4;
        case 0x251830u: goto label_251830;
        case 0x25183cu: goto label_25183c;
        case 0x25187cu: goto label_25187c;
        case 0x251894u: goto label_251894;
        case 0x2518b0u: goto label_2518b0;
        case 0x2518c8u: goto label_2518c8;
        case 0x2518d4u: goto label_2518d4;
        case 0x251918u: goto label_251918;
        case 0x251934u: goto label_251934;
        case 0x251940u: goto label_251940;
        case 0x2519d4u: goto label_2519d4;
        case 0x251a88u: goto label_251a88;
        case 0x251ae8u: goto label_251ae8;
        case 0x251b8cu: goto label_251b8c;
        case 0x251c90u: goto label_251c90;
        case 0x251cecu: goto label_251cec;
        case 0x251d90u: goto label_251d90;
        case 0x251ddcu: goto label_251ddc;
        case 0x251df8u: goto label_251df8;
        case 0x251e14u: goto label_251e14;
        case 0x251e20u: goto label_251e20;
        case 0x251e54u: goto label_251e54;
        case 0x251e74u: goto label_251e74;
        case 0x251e80u: goto label_251e80;
        case 0x251ec0u: goto label_251ec0;
        default: break;
    }

    ctx->pc = 0x251710u;

    // 0x251710: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x251710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x251714: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x251714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x251718: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x251718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25171c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x251720: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x251720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x251724: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x251724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x251728: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x251728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25172c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25172cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x251730: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x251730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x251734: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x251734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x251738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25173c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x25173cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x251740: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x251740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x251744: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x251744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x251748: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x251748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25174c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25174Cu;
    SET_GPR_U32(ctx, 31, 0x251754u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25174Cu, 0x251754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251754u;
label_251754:
    // 0x251754: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x251754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x251758: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x251758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x25175c: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x25175Cu;
    SET_GPR_U32(ctx, 31, 0x251764u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x25175Cu, 0x251764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251764u;
label_251764:
    // 0x251764: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x251764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x251768: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x251768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25176c: 0xc09283c  jal         func_24A0F0
    ctx->pc = 0x25176Cu;
    SET_GPR_U32(ctx, 31, 0x251774u);
    ctx->pc = 0x24A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A0F0u, 0x25176Cu, 0x251774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251774u;
label_251774:
    // 0x251774: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x251774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x251778: 0xc094f24  jal         func_253C90
    ctx->pc = 0x251778u;
    SET_GPR_U32(ctx, 31, 0x251780u);
    ctx->pc = 0x253C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C90u, 0x251778u, 0x251780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251780u;
label_251780:
    // 0x251780: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x251780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x251784: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x251784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251788: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x251788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25178c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x25178cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251790: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x251790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x251794: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x251794u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251798: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x251798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x25179c: 0xc09107c  jal         func_2441F0
    ctx->pc = 0x25179Cu;
    SET_GPR_U32(ctx, 31, 0x2517A4u);
    ctx->pc = 0x2441F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441F0u, 0x25179Cu, 0x2517A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2517A4u;
label_2517a4:
    // 0x2517a4: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x2517a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2517a8: 0x104301ae  beq         $v0, $v1, . + 4 + (0x1AE << 2)
    ctx->pc = 0x2517A8u;
    {
        const bool branch_taken_0x2517a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2517a8) {
            ctx->pc = 0x251E64u;
            goto label_251e64;
        }
    }
    ctx->pc = 0x2517B0u;
    // 0x2517b0: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x2517b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x2517b4: 0x1043005c  beq         $v0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2517B4u;
    {
        const bool branch_taken_0x2517b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2517b4) {
            ctx->pc = 0x251928u;
            goto label_251928;
        }
    }
    ctx->pc = 0x2517BCu;
    // 0x2517bc: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x2517bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x2517c0: 0x10430059  beq         $v0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2517C0u;
    {
        const bool branch_taken_0x2517c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2517c0) {
            ctx->pc = 0x251928u;
            goto label_251928;
        }
    }
    ctx->pc = 0x2517C8u;
    // 0x2517c8: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x2517c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x2517cc: 0x10430056  beq         $v0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x2517CCu;
    {
        const bool branch_taken_0x2517cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2517cc) {
            ctx->pc = 0x251928u;
            goto label_251928;
        }
    }
    ctx->pc = 0x2517D4u;
    // 0x2517d4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2517D4u;
    {
        const bool branch_taken_0x2517d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2517d4) {
            ctx->pc = 0x2518B8u;
            goto label_2518b8;
        }
    }
    ctx->pc = 0x2517DCu;
    // 0x2517dc: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x2517dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2517e0: 0x10430035  beq         $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2517E0u;
    {
        const bool branch_taken_0x2517e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2517e0) {
            ctx->pc = 0x2518B8u;
            goto label_2518b8;
        }
    }
    ctx->pc = 0x2517E8u;
    // 0x2517e8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2517e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2517ec: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2517ECu;
    {
        const bool branch_taken_0x2517ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2517ec) {
            ctx->pc = 0x2518B8u;
            goto label_2518b8;
        }
    }
    ctx->pc = 0x2517F4u;
    // 0x2517f4: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x2517f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2517f8: 0x1043002f  beq         $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2517F8u;
    {
        const bool branch_taken_0x2517f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2517f8) {
            ctx->pc = 0x2518B8u;
            goto label_2518b8;
        }
    }
    ctx->pc = 0x251800u;
    // 0x251800: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x251800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x251804: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x251804u;
    {
        const bool branch_taken_0x251804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x251804) {
            ctx->pc = 0x251820u;
            goto label_251820;
        }
    }
    ctx->pc = 0x25180Cu;
    // 0x25180c: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x25180cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x251810: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x251810u;
    {
        const bool branch_taken_0x251810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x251810) {
            ctx->pc = 0x251820u;
            goto label_251820;
        }
    }
    ctx->pc = 0x251818u;
    // 0x251818: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x251818u;
    {
        const bool branch_taken_0x251818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251818) {
            ctx->pc = 0x2518B8u;
            goto label_2518b8;
        }
    }
    ctx->pc = 0x251820u;
label_251820:
    // 0x251820: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x251820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x251824: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x251824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x251828: 0xc04d364  jal         func_134D90
    ctx->pc = 0x251828u;
    SET_GPR_U32(ctx, 31, 0x251830u);
    ctx->pc = 0x134D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D90u, 0x251828u, 0x251830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251830u;
label_251830:
    // 0x251830: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x251830u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251834: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x251834u;
    {
        const bool branch_taken_0x251834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251834) {
            ctx->pc = 0x25186Cu;
            goto label_25186c;
        }
    }
    ctx->pc = 0x25183Cu;
label_25183c:
    // 0x25183c: 0x8ec30014  lw          $v1, 0x14($s6)
    ctx->pc = 0x25183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x251840: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x251840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x251844: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x251844u;
    {
        const bool branch_taken_0x251844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x251844) {
            ctx->pc = 0x251868u;
            goto label_251868;
        }
    }
    ctx->pc = 0x25184Cu;
    // 0x25184c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25184cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251850: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x251850u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x251854: 0xaec00014  sw          $zero, 0x14($s6)
    ctx->pc = 0x251854u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 0));
    // 0x251858: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x251858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x25185c: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x25185cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x251860: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x251860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251864: 0xaec20010  sw          $v0, 0x10($s6)
    ctx->pc = 0x251864u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
label_251868:
    // 0x251868: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x251868u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
label_25186c:
    // 0x25186c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x25186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x251870: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x251870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x251874: 0xc0947c0  jal         func_251F00
    ctx->pc = 0x251874u;
    SET_GPR_U32(ctx, 31, 0x25187Cu);
    ctx->pc = 0x251F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251F00u, 0x251874u, 0x25187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25187Cu;
label_25187c:
    // 0x25187c: 0x16c2ffef  bne         $s6, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x25187Cu;
    {
        const bool branch_taken_0x25187c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x25187c) {
            ctx->pc = 0x25183Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25183c;
        }
    }
    ctx->pc = 0x251884u;
    // 0x251884: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x251884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x251888: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x251888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x25188c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25188Cu;
    SET_GPR_U32(ctx, 31, 0x251894u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25188Cu, 0x251894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251894u;
label_251894:
    // 0x251894: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x251894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x251898: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x251898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25189c: 0x1002018a  beq         $zero, $v0, . + 4 + (0x18A << 2)
    ctx->pc = 0x25189Cu;
    {
        const bool branch_taken_0x25189c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x25189c) {
            ctx->pc = 0x251EC8u;
            goto label_251ec8;
        }
    }
    ctx->pc = 0x2518A4u;
    // 0x2518a4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2518a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2518a8: 0xc090cb4  jal         func_2432D0
    ctx->pc = 0x2518A8u;
    SET_GPR_U32(ctx, 31, 0x2518B0u);
    ctx->pc = 0x2432D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2432D0u, 0x2518A8u, 0x2518B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2518B0u;
label_2518b0:
    // 0x2518b0: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x2518B0u;
    {
        const bool branch_taken_0x2518b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2518b0) {
            ctx->pc = 0x251EC8u;
            goto label_251ec8;
        }
    }
    ctx->pc = 0x2518B8u;
label_2518b8:
    // 0x2518b8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2518b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2518bc: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2518bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2518c0: 0xc04d364  jal         func_134D90
    ctx->pc = 0x2518C0u;
    SET_GPR_U32(ctx, 31, 0x2518C8u);
    ctx->pc = 0x134D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D90u, 0x2518C0u, 0x2518C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2518C8u;
label_2518c8:
    // 0x2518c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2518c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2518cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2518CCu;
    {
        const bool branch_taken_0x2518cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2518cc) {
            ctx->pc = 0x251908u;
            goto label_251908;
        }
    }
    ctx->pc = 0x2518D4u;
label_2518d4:
    // 0x2518d4: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2518d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2518d8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2518d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2518dc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2518DCu;
    {
        const bool branch_taken_0x2518dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2518dc) {
            ctx->pc = 0x251904u;
            goto label_251904;
        }
    }
    ctx->pc = 0x2518E4u;
    // 0x2518e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2518e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2518e8: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2518e8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2518ec: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2518ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x2518f0: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2518f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x2518f4: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2518f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2518f8: 0x2402ffcf  addiu       $v0, $zero, -0x31
    ctx->pc = 0x2518f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x2518fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2518fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251900: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x251900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_251904:
    // 0x251904: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x251904u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_251908:
    // 0x251908: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x251908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25190c: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x25190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x251910: 0xc0947c0  jal         func_251F00
    ctx->pc = 0x251910u;
    SET_GPR_U32(ctx, 31, 0x251918u);
    ctx->pc = 0x251F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251F00u, 0x251910u, 0x251918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251918u;
label_251918:
    // 0x251918: 0x1662ffee  bne         $s3, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x251918u;
    {
        const bool branch_taken_0x251918 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x251918) {
            ctx->pc = 0x2518D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2518d4;
        }
    }
    ctx->pc = 0x251920u;
    // 0x251920: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x251920u;
    {
        const bool branch_taken_0x251920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251920) {
            ctx->pc = 0x251EC8u;
            goto label_251ec8;
        }
    }
    ctx->pc = 0x251928u;
label_251928:
    // 0x251928: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x251928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25192c: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x25192Cu;
    {
        const bool branch_taken_0x25192c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25192c) {
            ctx->pc = 0x251DECu;
            goto label_251dec;
        }
    }
    ctx->pc = 0x251934u;
label_251934:
    // 0x251934: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x251934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251938: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x251938u;
    {
        const bool branch_taken_0x251938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251938) {
            ctx->pc = 0x251DD0u;
            goto label_251dd0;
        }
    }
    ctx->pc = 0x251940u;
label_251940:
    // 0x251940: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x251940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251944: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x251948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25194c: 0x0  nop
    ctx->pc = 0x25194cu;
    // NOP
    // 0x251950: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251954: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251954u;
    {
        const bool branch_taken_0x251954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251954) {
            ctx->pc = 0x25196Cu;
            goto label_25196c;
        }
    }
    ctx->pc = 0x25195Cu;
    // 0x25195c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25195cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251960: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251964: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251964u;
    {
        const bool branch_taken_0x251964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251964) {
            ctx->pc = 0x251980u;
            goto label_251980;
        }
    }
    ctx->pc = 0x25196Cu;
label_25196c:
    // 0x25196c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25196cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251970: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251970u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251974: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251974u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251978: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x25197c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25197cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251980:
    // 0x251980: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x251980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x251984: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x251984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251988: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x25198c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25198cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251990: 0x0  nop
    ctx->pc = 0x251990u;
    // NOP
    // 0x251994: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251994u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251998: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251998u;
    {
        const bool branch_taken_0x251998 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251998) {
            ctx->pc = 0x2519B0u;
            goto label_2519b0;
        }
    }
    ctx->pc = 0x2519A0u;
    // 0x2519a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2519a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2519a4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2519a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2519a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2519A8u;
    {
        const bool branch_taken_0x2519a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2519a8) {
            ctx->pc = 0x2519C4u;
            goto label_2519c4;
        }
    }
    ctx->pc = 0x2519B0u;
label_2519b0:
    // 0x2519b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2519b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2519b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2519b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2519b8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2519b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2519bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2519bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2519c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2519c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2519c4:
    // 0x2519c4: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x2519c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2519c8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2519c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2519cc: 0xc092158  jal         func_248560
    ctx->pc = 0x2519CCu;
    SET_GPR_U32(ctx, 31, 0x2519D4u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x2519CCu, 0x2519D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2519D4u;
label_2519d4:
    // 0x2519d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2519d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2519d8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2519d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2519dc: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x2519dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x2519e0: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2519E0u;
    {
        const bool branch_taken_0x2519e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2519e0) {
            ctx->pc = 0x251BE0u;
            goto label_251be0;
        }
    }
    ctx->pc = 0x2519E8u;
    // 0x2519e8: 0x1620003c  bnez        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2519E8u;
    {
        const bool branch_taken_0x2519e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2519e8) {
            ctx->pc = 0x251ADCu;
            goto label_251adc;
        }
    }
    ctx->pc = 0x2519F0u;
    // 0x2519f0: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2519f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2519f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2519f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2519f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2519f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2519fc: 0x0  nop
    ctx->pc = 0x2519fcu;
    // NOP
    // 0x251a00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251a00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251a04: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251A04u;
    {
        const bool branch_taken_0x251a04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251a04) {
            ctx->pc = 0x251A1Cu;
            goto label_251a1c;
        }
    }
    ctx->pc = 0x251A0Cu;
    // 0x251a0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251a0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251a10: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251a14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251A14u;
    {
        const bool branch_taken_0x251a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251a14) {
            ctx->pc = 0x251A30u;
            goto label_251a30;
        }
    }
    ctx->pc = 0x251A1Cu;
label_251a1c:
    // 0x251a1c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251a1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251a20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251a20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251a24: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251a24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251a28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251a2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251a30:
    // 0x251a30: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x251a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x251a34: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x251a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x251a38: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x251a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251a3c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x251a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251a44: 0x0  nop
    ctx->pc = 0x251a44u;
    // NOP
    // 0x251a48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251a48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251a4c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251A4Cu;
    {
        const bool branch_taken_0x251a4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251a4c) {
            ctx->pc = 0x251A64u;
            goto label_251a64;
        }
    }
    ctx->pc = 0x251A54u;
    // 0x251a54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251a54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251a58: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251a58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251a5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251A5Cu;
    {
        const bool branch_taken_0x251a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251a5c) {
            ctx->pc = 0x251A78u;
            goto label_251a78;
        }
    }
    ctx->pc = 0x251A64u;
label_251a64:
    // 0x251a64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251a64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251a68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251a68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251a6c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251a6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251a70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251a74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251a78:
    // 0x251a78: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x251a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x251a7c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x251a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x251a80: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x251A80u;
    SET_GPR_U32(ctx, 31, 0x251A88u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x251A80u, 0x251A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251A88u;
label_251a88:
    // 0x251a88: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x251a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x251a8c: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x251a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x251a90: 0x100200ce  beq         $zero, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x251A90u;
    {
        const bool branch_taken_0x251a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x251a90) {
            ctx->pc = 0x251DCCu;
            goto label_251dcc;
        }
    }
    ctx->pc = 0x251A98u;
    // 0x251a98: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x251a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x251a9c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x251a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x251aa0: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x251aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x251aa4: 0x144000c9  bnez        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x251AA4u;
    {
        const bool branch_taken_0x251aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251aa4) {
            ctx->pc = 0x251DCCu;
            goto label_251dcc;
        }
    }
    ctx->pc = 0x251AACu;
    // 0x251aac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x251aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x251ab0: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x251ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x251ab4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x251ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251ab8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x251ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x251abc: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x251abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x251ac0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x251ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x251ac4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x251ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x251ac8: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x251ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x251acc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x251accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251ad0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x251ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x251ad4: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x251AD4u;
    {
        const bool branch_taken_0x251ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251ad4) {
            ctx->pc = 0x251DCCu;
            goto label_251dcc;
        }
    }
    ctx->pc = 0x251ADCu;
label_251adc:
    // 0x251adc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x251adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x251ae0: 0xc042214  jal         func_108850
    ctx->pc = 0x251AE0u;
    SET_GPR_U32(ctx, 31, 0x251AE8u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x251AE0u, 0x251AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AE8u;
label_251ae8:
    // 0x251ae8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x251ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x251aec: 0x162200b7  bne         $s1, $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x251AECu;
    {
        const bool branch_taken_0x251aec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x251aec) {
            ctx->pc = 0x251DCCu;
            goto label_251dcc;
        }
    }
    ctx->pc = 0x251AF4u;
    // 0x251af4: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x251af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251af8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x251afc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251b00: 0x0  nop
    ctx->pc = 0x251b00u;
    // NOP
    // 0x251b04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251b04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251b08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251B08u;
    {
        const bool branch_taken_0x251b08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251b08) {
            ctx->pc = 0x251B20u;
            goto label_251b20;
        }
    }
    ctx->pc = 0x251B10u;
    // 0x251b10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251b14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251b18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251B18u;
    {
        const bool branch_taken_0x251b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251b18) {
            ctx->pc = 0x251B34u;
            goto label_251b34;
        }
    }
    ctx->pc = 0x251B20u;
label_251b20:
    // 0x251b20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251b20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251b24: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251b24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251b28: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251b28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251b2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251b30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251b34:
    // 0x251b34: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x251b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x251b38: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x251b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x251b3c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x251b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251b40: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x251b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251b48: 0x0  nop
    ctx->pc = 0x251b48u;
    // NOP
    // 0x251b4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251b4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251b50: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251B50u;
    {
        const bool branch_taken_0x251b50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251b50) {
            ctx->pc = 0x251B68u;
            goto label_251b68;
        }
    }
    ctx->pc = 0x251B58u;
    // 0x251b58: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251b58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251b5c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251b5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251b60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251B60u;
    {
        const bool branch_taken_0x251b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251b60) {
            ctx->pc = 0x251B7Cu;
            goto label_251b7c;
        }
    }
    ctx->pc = 0x251B68u;
label_251b68:
    // 0x251b68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251b68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251b6c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251b6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251b70: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251b70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251b74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251b78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251b7c:
    // 0x251b7c: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x251b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x251b80: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x251b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x251b84: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x251B84u;
    SET_GPR_U32(ctx, 31, 0x251B8Cu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x251B84u, 0x251B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251B8Cu;
label_251b8c:
    // 0x251b8c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x251b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x251b90: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x251b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x251b94: 0x1002008d  beq         $zero, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x251B94u;
    {
        const bool branch_taken_0x251b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x251b94) {
            ctx->pc = 0x251DCCu;
            goto label_251dcc;
        }
    }
    ctx->pc = 0x251B9Cu;
    // 0x251b9c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x251b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x251ba0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x251ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x251ba4: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x251ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x251ba8: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x251BA8u;
    {
        const bool branch_taken_0x251ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251ba8) {
            ctx->pc = 0x251DCCu;
            goto label_251dcc;
        }
    }
    ctx->pc = 0x251BB0u;
    // 0x251bb0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x251bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x251bb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x251bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x251bb8: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x251bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x251bbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x251bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251bc0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x251bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x251bc4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x251bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x251bc8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x251bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x251bcc: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x251bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x251bd0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x251bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251bd4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x251bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x251bd8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x251BD8u;
    {
        const bool branch_taken_0x251bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251bd8) {
            ctx->pc = 0x251DCCu;
            goto label_251dcc;
        }
    }
    ctx->pc = 0x251BE0u;
label_251be0:
    // 0x251be0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x251be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x251be4: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x251be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
    // 0x251be8: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x251BE8u;
    {
        const bool branch_taken_0x251be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251be8) {
            ctx->pc = 0x251DCCu;
            goto label_251dcc;
        }
    }
    ctx->pc = 0x251BF0u;
    // 0x251bf0: 0x1600003b  bnez        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x251BF0u;
    {
        const bool branch_taken_0x251bf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x251bf0) {
            ctx->pc = 0x251CE0u;
            goto label_251ce0;
        }
    }
    ctx->pc = 0x251BF8u;
    // 0x251bf8: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x251bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251bfc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x251c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251c04: 0x0  nop
    ctx->pc = 0x251c04u;
    // NOP
    // 0x251c08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251c08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251c0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251C0Cu;
    {
        const bool branch_taken_0x251c0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251c0c) {
            ctx->pc = 0x251C24u;
            goto label_251c24;
        }
    }
    ctx->pc = 0x251C14u;
    // 0x251c14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251c14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251c18: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251c1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251C1Cu;
    {
        const bool branch_taken_0x251c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251c1c) {
            ctx->pc = 0x251C38u;
            goto label_251c38;
        }
    }
    ctx->pc = 0x251C24u;
label_251c24:
    // 0x251c24: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251c24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251c28: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251c2c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251c30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251c34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251c38:
    // 0x251c38: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x251c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x251c3c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x251c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251c40: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x251c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251c48: 0x0  nop
    ctx->pc = 0x251c48u;
    // NOP
    // 0x251c4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251c4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251c50: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251C50u;
    {
        const bool branch_taken_0x251c50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251c50) {
            ctx->pc = 0x251C68u;
            goto label_251c68;
        }
    }
    ctx->pc = 0x251C58u;
    // 0x251c58: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251c58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251c5c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251c5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251c60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251C60u;
    {
        const bool branch_taken_0x251c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251c60) {
            ctx->pc = 0x251C7Cu;
            goto label_251c7c;
        }
    }
    ctx->pc = 0x251C68u;
label_251c68:
    // 0x251c68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251c68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251c6c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251c6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251c70: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251c70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251c74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251c78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251c7c:
    // 0x251c7c: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x251c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x251c80: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x251c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x251c84: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x251c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x251c88: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x251C88u;
    SET_GPR_U32(ctx, 31, 0x251C90u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x251C88u, 0x251C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C90u;
label_251c90:
    // 0x251c90: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x251c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x251c94: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x251c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x251c98: 0x1002004c  beq         $zero, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x251C98u;
    {
        const bool branch_taken_0x251c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x251c98) {
            ctx->pc = 0x251DCCu;
            goto label_251dcc;
        }
    }
    ctx->pc = 0x251CA0u;
    // 0x251ca0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x251ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x251ca4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x251ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x251ca8: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x251ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
    // 0x251cac: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x251CACu;
    {
        const bool branch_taken_0x251cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251cac) {
            ctx->pc = 0x251DCCu;
            goto label_251dcc;
        }
    }
    ctx->pc = 0x251CB4u;
    // 0x251cb4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x251cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x251cb8: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x251cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x251cbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x251cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251cc0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x251cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x251cc4: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x251cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x251cc8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x251cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x251ccc: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x251cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x251cd0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x251cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251cd4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x251cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x251cd8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x251CD8u;
    {
        const bool branch_taken_0x251cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251cd8) {
            ctx->pc = 0x251DCCu;
            goto label_251dcc;
        }
    }
    ctx->pc = 0x251CE0u;
label_251ce0:
    // 0x251ce0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x251ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x251ce4: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x251CE4u;
    SET_GPR_U32(ctx, 31, 0x251CECu);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x251CE4u, 0x251CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251CECu;
label_251cec:
    // 0x251cec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x251cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x251cf0: 0x16020036  bne         $s0, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x251CF0u;
    {
        const bool branch_taken_0x251cf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x251cf0) {
            ctx->pc = 0x251DCCu;
            goto label_251dcc;
        }
    }
    ctx->pc = 0x251CF8u;
    // 0x251cf8: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x251cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251cfc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x251d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251d04: 0x0  nop
    ctx->pc = 0x251d04u;
    // NOP
    // 0x251d08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251d08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251d0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251D0Cu;
    {
        const bool branch_taken_0x251d0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251d0c) {
            ctx->pc = 0x251D24u;
            goto label_251d24;
        }
    }
    ctx->pc = 0x251D14u;
    // 0x251d14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251d14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251d18: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251d18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251d1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251D1Cu;
    {
        const bool branch_taken_0x251d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251d1c) {
            ctx->pc = 0x251D38u;
            goto label_251d38;
        }
    }
    ctx->pc = 0x251D24u;
label_251d24:
    // 0x251d24: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251d24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251d28: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251d28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251d2c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251d30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251d34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251d38:
    // 0x251d38: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x251d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x251d3c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x251d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251d40: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x251d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x251d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251d48: 0x0  nop
    ctx->pc = 0x251d48u;
    // NOP
    // 0x251d4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251d4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251d50: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x251D50u;
    {
        const bool branch_taken_0x251d50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251d50) {
            ctx->pc = 0x251D68u;
            goto label_251d68;
        }
    }
    ctx->pc = 0x251D58u;
    // 0x251d58: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251d58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251d5c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251d5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251d60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251D60u;
    {
        const bool branch_taken_0x251d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251d60) {
            ctx->pc = 0x251D7Cu;
            goto label_251d7c;
        }
    }
    ctx->pc = 0x251D68u;
label_251d68:
    // 0x251d68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251d68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251d6c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x251d6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x251d70: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x251d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x251d74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x251d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x251d78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_251d7c:
    // 0x251d7c: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x251d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x251d80: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x251d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x251d84: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x251d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x251d88: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x251D88u;
    SET_GPR_U32(ctx, 31, 0x251D90u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x251D88u, 0x251D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251D90u;
label_251d90:
    // 0x251d90: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x251d90u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d94: 0x101e000d  beq         $zero, $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x251D94u;
    {
        const bool branch_taken_0x251d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 30));
        if (branch_taken_0x251d94) {
            ctx->pc = 0x251DCCu;
            goto label_251dcc;
        }
    }
    ctx->pc = 0x251D9Cu;
    // 0x251d9c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x251d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x251da0: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x251da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
    // 0x251da4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x251DA4u;
    {
        const bool branch_taken_0x251da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251da4) {
            ctx->pc = 0x251DCCu;
            goto label_251dcc;
        }
    }
    ctx->pc = 0x251DACu;
    // 0x251dac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x251dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x251db0: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x251db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x251db4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x251db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251db8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x251db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x251dbc: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x251dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x251dc0: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x251dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x251dc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x251dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251dc8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x251dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_251dcc:
    // 0x251dcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x251dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_251dd0:
    // 0x251dd0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x251dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x251dd4: 0xc0421f8  jal         func_1087E0
    ctx->pc = 0x251DD4u;
    SET_GPR_U32(ctx, 31, 0x251DDCu);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x251DD4u, 0x251DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251DDCu;
label_251ddc:
    // 0x251ddc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x251ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x251de0: 0x1440fed7  bnez        $v0, . + 4 + (-0x129 << 2)
    ctx->pc = 0x251DE0u;
    {
        const bool branch_taken_0x251de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251de0) {
            ctx->pc = 0x251940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251940;
        }
    }
    ctx->pc = 0x251DE8u;
    // 0x251de8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x251de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_251dec:
    // 0x251dec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x251decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x251df0: 0xc042214  jal         func_108850
    ctx->pc = 0x251DF0u;
    SET_GPR_U32(ctx, 31, 0x251DF8u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x251DF0u, 0x251DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251DF8u;
label_251df8:
    // 0x251df8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x251df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x251dfc: 0x1440fecd  bnez        $v0, . + 4 + (-0x133 << 2)
    ctx->pc = 0x251DFCu;
    {
        const bool branch_taken_0x251dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251dfc) {
            ctx->pc = 0x251934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251934;
        }
    }
    ctx->pc = 0x251E04u;
    // 0x251e04: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x251e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x251e08: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x251e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x251e0c: 0xc04d364  jal         func_134D90
    ctx->pc = 0x251E0Cu;
    SET_GPR_U32(ctx, 31, 0x251E14u);
    ctx->pc = 0x134D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D90u, 0x251E0Cu, 0x251E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E14u;
label_251e14:
    // 0x251e14: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x251e14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x251E18u;
    {
        const bool branch_taken_0x251e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251e18) {
            ctx->pc = 0x251E44u;
            goto label_251e44;
        }
    }
    ctx->pc = 0x251E20u;
label_251e20:
    // 0x251e20: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x251e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x251e24: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x251e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x251e28: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251E28u;
    {
        const bool branch_taken_0x251e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x251e28) {
            ctx->pc = 0x251E40u;
            goto label_251e40;
        }
    }
    ctx->pc = 0x251E30u;
    // 0x251e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251e34: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x251e34u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x251e38: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x251e38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
    // 0x251e3c: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x251e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
label_251e40:
    // 0x251e40: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x251e40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_251e44:
    // 0x251e44: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x251e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x251e48: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x251e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x251e4c: 0xc0947c0  jal         func_251F00
    ctx->pc = 0x251E4Cu;
    SET_GPR_U32(ctx, 31, 0x251E54u);
    ctx->pc = 0x251F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251F00u, 0x251E4Cu, 0x251E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E54u;
label_251e54:
    // 0x251e54: 0x16a2fff2  bne         $s5, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x251E54u;
    {
        const bool branch_taken_0x251e54 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x251e54) {
            ctx->pc = 0x251E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251e20;
        }
    }
    ctx->pc = 0x251E5Cu;
    // 0x251e5c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x251E5Cu;
    {
        const bool branch_taken_0x251e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251e5c) {
            ctx->pc = 0x251EC8u;
            goto label_251ec8;
        }
    }
    ctx->pc = 0x251E64u;
label_251e64:
    // 0x251e64: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x251e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x251e68: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x251e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x251e6c: 0xc04d364  jal         func_134D90
    ctx->pc = 0x251E6Cu;
    SET_GPR_U32(ctx, 31, 0x251E74u);
    ctx->pc = 0x134D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D90u, 0x251E6Cu, 0x251E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E74u;
label_251e74:
    // 0x251e74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x251e74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x251E78u;
    {
        const bool branch_taken_0x251e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251e78) {
            ctx->pc = 0x251EB0u;
            goto label_251eb0;
        }
    }
    ctx->pc = 0x251E80u;
label_251e80:
    // 0x251e80: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x251e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x251e84: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x251e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x251e88: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x251E88u;
    {
        const bool branch_taken_0x251e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x251e88) {
            ctx->pc = 0x251EACu;
            goto label_251eac;
        }
    }
    ctx->pc = 0x251E90u;
    // 0x251e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251e94: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x251e94u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x251e98: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x251e98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
    // 0x251e9c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x251e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x251ea0: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x251ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x251ea4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x251ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251ea8: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x251ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_251eac:
    // 0x251eac: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x251eacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_251eb0:
    // 0x251eb0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x251eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x251eb4: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x251eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x251eb8: 0xc0947c0  jal         func_251F00
    ctx->pc = 0x251EB8u;
    SET_GPR_U32(ctx, 31, 0x251EC0u);
    ctx->pc = 0x251F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251F00u, 0x251EB8u, 0x251EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251EC0u;
label_251ec0:
    // 0x251ec0: 0x1682ffef  bne         $s4, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x251EC0u;
    {
        const bool branch_taken_0x251ec0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x251ec0) {
            ctx->pc = 0x251E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251e80;
        }
    }
    ctx->pc = 0x251EC8u;
label_251ec8:
    // 0x251ec8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x251ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ecc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x251eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x251ed0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x251ed0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x251ed4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x251ed4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x251ed8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x251ed8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251edc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x251edcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251ee0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x251ee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251ee4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x251ee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251ee8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x251ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251eec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x251eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251ef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251ef4: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x251ef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x251ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x251EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251F00u;
}
