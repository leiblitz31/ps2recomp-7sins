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

// Function: sub_002C4F60
// Address: 0x2c4f60 - 0x2c5970
void sub_002C4F60_0x2c4f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4F60_0x2c4f60");
#endif

    switch (ctx->pc) {
        case 0x2c4facu: goto label_2c4fac;
        case 0x2c4fd0u: goto label_2c4fd0;
        case 0x2c4fdcu: goto label_2c4fdc;
        case 0x2c5024u: goto label_2c5024;
        case 0x2c5060u: goto label_2c5060;
        case 0x2c506cu: goto label_2c506c;
        case 0x2c5088u: goto label_2c5088;
        case 0x2c50a0u: goto label_2c50a0;
        case 0x2c50acu: goto label_2c50ac;
        case 0x2c50c4u: goto label_2c50c4;
        case 0x2c50e0u: goto label_2c50e0;
        case 0x2c50ecu: goto label_2c50ec;
        case 0x2c5108u: goto label_2c5108;
        case 0x2c5124u: goto label_2c5124;
        case 0x2c5140u: goto label_2c5140;
        case 0x2c515cu: goto label_2c515c;
        case 0x2c516cu: goto label_2c516c;
        case 0x2c5234u: goto label_2c5234;
        case 0x2c5240u: goto label_2c5240;
        case 0x2c5254u: goto label_2c5254;
        case 0x2c5278u: goto label_2c5278;
        case 0x2c5290u: goto label_2c5290;
        case 0x2c52fcu: goto label_2c52fc;
        case 0x2c5310u: goto label_2c5310;
        case 0x2c5320u: goto label_2c5320;
        case 0x2c5330u: goto label_2c5330;
        case 0x2c5340u: goto label_2c5340;
        case 0x2c5354u: goto label_2c5354;
        case 0x2c53c8u: goto label_2c53c8;
        case 0x2c53fcu: goto label_2c53fc;
        case 0x2c540cu: goto label_2c540c;
        case 0x2c5420u: goto label_2c5420;
        case 0x2c5434u: goto label_2c5434;
        case 0x2c544cu: goto label_2c544c;
        case 0x2c545cu: goto label_2c545c;
        case 0x2c5470u: goto label_2c5470;
        case 0x2c54a4u: goto label_2c54a4;
        case 0x2c54d8u: goto label_2c54d8;
        case 0x2c54f0u: goto label_2c54f0;
        case 0x2c5504u: goto label_2c5504;
        case 0x2c5530u: goto label_2c5530;
        case 0x2c553cu: goto label_2c553c;
        case 0x2c5554u: goto label_2c5554;
        case 0x2c556cu: goto label_2c556c;
        case 0x2c557cu: goto label_2c557c;
        case 0x2c5590u: goto label_2c5590;
        case 0x2c55a4u: goto label_2c55a4;
        case 0x2c55dcu: goto label_2c55dc;
        case 0x2c55f4u: goto label_2c55f4;
        case 0x2c5604u: goto label_2c5604;
        case 0x2c5618u: goto label_2c5618;
        case 0x2c562cu: goto label_2c562c;
        case 0x2c5674u: goto label_2c5674;
        case 0x2c568cu: goto label_2c568c;
        case 0x2c569cu: goto label_2c569c;
        case 0x2c56acu: goto label_2c56ac;
        case 0x2c56d0u: goto label_2c56d0;
        case 0x2c56e0u: goto label_2c56e0;
        case 0x2c5700u: goto label_2c5700;
        case 0x2c5710u: goto label_2c5710;
        case 0x2c5720u: goto label_2c5720;
        case 0x2c5740u: goto label_2c5740;
        case 0x2c5754u: goto label_2c5754;
        case 0x2c5768u: goto label_2c5768;
        case 0x2c5780u: goto label_2c5780;
        case 0x2c579cu: goto label_2c579c;
        case 0x2c57b8u: goto label_2c57b8;
        case 0x2c57c4u: goto label_2c57c4;
        case 0x2c57e0u: goto label_2c57e0;
        case 0x2c5818u: goto label_2c5818;
        case 0x2c5834u: goto label_2c5834;
        case 0x2c5844u: goto label_2c5844;
        case 0x2c5880u: goto label_2c5880;
        case 0x2c58c0u: goto label_2c58c0;
        case 0x2c5904u: goto label_2c5904;
        case 0x2c591cu: goto label_2c591c;
        case 0x2c5934u: goto label_2c5934;
        default: break;
    }

    ctx->pc = 0x2c4f60u;

    // 0x2c4f60: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x2c4f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x2c4f64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c4f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c4f68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c4f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2c4f6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c4f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c4f70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c4f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c4f74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c4f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c4f78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c4f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c4f7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c4f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c4f80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c4f84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4f8c: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x2c4f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    // 0x2c4f90: 0xafa50270  sw          $a1, 0x270($sp)
    ctx->pc = 0x2c4f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 5));
    // 0x2c4f94: 0xafa60280  sw          $a2, 0x280($sp)
    ctx->pc = 0x2c4f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 6));
    // 0x2c4f98: 0xa3a70290  sb          $a3, 0x290($sp)
    ctx->pc = 0x2c4f98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 656), (uint8_t)GPR_U32(ctx, 7));
    // 0x2c4f9c: 0xafa802a0  sw          $t0, 0x2A0($sp)
    ctx->pc = 0x2c4f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 8));
    // 0x2c4fa0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c4fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c4fa4: 0xc0b05b0  jal         func_2C16C0
    ctx->pc = 0x2C4FA4u;
    SET_GPR_U32(ctx, 31, 0x2C4FACu);
    ctx->pc = 0x2C16C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C16C0u, 0x2C4FA4u, 0x2C4FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4FACu;
label_2c4fac:
    // 0x2c4fac: 0xafa00258  sw          $zero, 0x258($sp)
    ctx->pc = 0x2c4facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 0));
    // 0x2c4fb0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c4fb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4fb4: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x2c4fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2c4fb8: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x2c4fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c4fbc: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x2c4fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c4fc0: 0x8fa702a0  lw          $a3, 0x2A0($sp)
    ctx->pc = 0x2c4fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2c4fc4: 0x93a80290  lbu         $t0, 0x290($sp)
    ctx->pc = 0x2c4fc4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c4fc8: 0xc0b0398  jal         func_2C0E60
    ctx->pc = 0x2C4FC8u;
    SET_GPR_U32(ctx, 31, 0x2C4FD0u);
    ctx->pc = 0x2C0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E60u, 0x2C4FC8u, 0x2C4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4FD0u;
label_2c4fd0:
    // 0x2c4fd0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c4fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c4fd4: 0xc0b16ec  jal         func_2C5BB0
    ctx->pc = 0x2C4FD4u;
    SET_GPR_U32(ctx, 31, 0x2C4FDCu);
    ctx->pc = 0x2C5BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5BB0u, 0x2C4FD4u, 0x2C4FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4FDCu;
label_2c4fdc:
    // 0x2c4fdc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C4FDCu;
    {
        const bool branch_taken_0x2c4fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4fdc) {
            ctx->pc = 0x2C5024u;
            goto label_2c5024;
        }
    }
    ctx->pc = 0x2C4FE4u;
    // 0x2c4fe4: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x2c4fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2c4fe8: 0x28820012  slti        $v0, $a0, 0x12
    ctx->pc = 0x2c4fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2c4fec: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C4FECu;
    {
        const bool branch_taken_0x2c4fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4fec) {
            ctx->pc = 0x2C5024u;
            goto label_2c5024;
        }
    }
    ctx->pc = 0x2C4FF4u;
    // 0x2c4ff4: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x2c4ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2c4ff8: 0x28610017  slti        $at, $v1, 0x17
    ctx->pc = 0x2c4ff8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x2c4ffc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4FFCu;
    {
        const bool branch_taken_0x2c4ffc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4ffc) {
            ctx->pc = 0x2C5024u;
            goto label_2c5024;
        }
    }
    ctx->pc = 0x2C5004u;
    // 0x2c5004: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x2c5004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2c5008: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c500c: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x2c500cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c5010: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x2c5010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c5014: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c5014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5018: 0x93a80290  lbu         $t0, 0x290($sp)
    ctx->pc = 0x2c5018u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c501c: 0xc0b0398  jal         func_2C0E60
    ctx->pc = 0x2C501Cu;
    SET_GPR_U32(ctx, 31, 0x2C5024u);
    ctx->pc = 0x2C0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E60u, 0x2C501Cu, 0x2C5024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5024u;
label_2c5024:
    // 0x2c5024: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x2c5024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2c5028: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2c5028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c502c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C502Cu;
    {
        const bool branch_taken_0x2c502c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c502c) {
            ctx->pc = 0x2C5044u;
            goto label_2c5044;
        }
    }
    ctx->pc = 0x2C5034u;
    // 0x2c5034: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x2c5034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2c5038: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c5038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c503c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C503Cu;
    {
        const bool branch_taken_0x2c503c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c503c) {
            ctx->pc = 0x2C5060u;
            goto label_2c5060;
        }
    }
    ctx->pc = 0x2C5044u;
label_2c5044:
    // 0x2c5044: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x2c5044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2c5048: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x2c5048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c504c: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x2c504cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c5050: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2c5050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c5054: 0x93a80290  lbu         $t0, 0x290($sp)
    ctx->pc = 0x2c5054u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c5058: 0xc0b0398  jal         func_2C0E60
    ctx->pc = 0x2C5058u;
    SET_GPR_U32(ctx, 31, 0x2C5060u);
    ctx->pc = 0x2C0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E60u, 0x2C5058u, 0x2C5060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5060u;
label_2c5060:
    // 0x2c5060: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c5060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c5064: 0xc0b16ec  jal         func_2C5BB0
    ctx->pc = 0x2C5064u;
    SET_GPR_U32(ctx, 31, 0x2C506Cu);
    ctx->pc = 0x2C5BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5BB0u, 0x2C5064u, 0x2C506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C506Cu;
label_2c506c:
    // 0x2c506c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C506Cu;
    {
        const bool branch_taken_0x2c506c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c506c) {
            ctx->pc = 0x2C5094u;
            goto label_2c5094;
        }
    }
    ctx->pc = 0x2C5074u;
    // 0x2c5074: 0xa3a0025f  sb          $zero, 0x25F($sp)
    ctx->pc = 0x2c5074u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 607), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5078: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c5078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c507c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c507cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5080: 0xc0b0428  jal         func_2C10A0
    ctx->pc = 0x2C5080u;
    SET_GPR_U32(ctx, 31, 0x2C5088u);
    ctx->pc = 0x2C10A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C10A0u, 0x2C5080u, 0x2C5088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5088u;
label_2c5088:
    // 0x2c5088: 0x93a2025f  lbu         $v0, 0x25F($sp)
    ctx->pc = 0x2c5088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 607)));
    // 0x2c508c: 0x1000022a  b           . + 4 + (0x22A << 2)
    ctx->pc = 0x2C508Cu;
    {
        const bool branch_taken_0x2c508c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c508c) {
            ctx->pc = 0x2C5938u;
            goto label_2c5938;
        }
    }
    ctx->pc = 0x2C5094u;
label_2c5094:
    // 0x2c5094: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c5094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c5098: 0xc0b04d8  jal         func_2C1360
    ctx->pc = 0x2C5098u;
    SET_GPR_U32(ctx, 31, 0x2C50A0u);
    ctx->pc = 0x2C1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1360u, 0x2C5098u, 0x2C50A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C50A0u;
label_2c50a0:
    // 0x2c50a0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c50a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50a4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2C50A4u;
    {
        const bool branch_taken_0x2c50a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c50a4) {
            ctx->pc = 0x2C5118u;
            goto label_2c5118;
        }
    }
    ctx->pc = 0x2C50ACu;
label_2c50ac:
    // 0x2c50ac: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2c50acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2c50b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2c50b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c50b4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2c50b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2c50b8: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2c50b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c50bc: 0xc097018  jal         func_25C060
    ctx->pc = 0x2C50BCu;
    SET_GPR_U32(ctx, 31, 0x2C50C4u);
    ctx->pc = 0x25C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C060u, 0x2C50BCu, 0x2C50C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C50C4u;
label_2c50c4:
    // 0x2c50c4: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x2c50c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c50c8: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C50C8u;
    {
        const bool branch_taken_0x2c50c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c50c8) {
            ctx->pc = 0x2C5114u;
            goto label_2c5114;
        }
    }
    ctx->pc = 0x2C50D0u;
    // 0x2c50d0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c50d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c50d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c50d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50d8: 0xc0b16b0  jal         func_2C5AC0
    ctx->pc = 0x2C50D8u;
    SET_GPR_U32(ctx, 31, 0x2C50E0u);
    ctx->pc = 0x2C5AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5AC0u, 0x2C50D8u, 0x2C50E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C50E0u;
label_2c50e0:
    // 0x2c50e0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c50e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c50e4: 0xc0b16ec  jal         func_2C5BB0
    ctx->pc = 0x2C50E4u;
    SET_GPR_U32(ctx, 31, 0x2C50ECu);
    ctx->pc = 0x2C5BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5BB0u, 0x2C50E4u, 0x2C50ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C50ECu;
label_2c50ec:
    // 0x2c50ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C50ECu;
    {
        const bool branch_taken_0x2c50ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c50ec) {
            ctx->pc = 0x2C512Cu;
            goto label_2c512c;
        }
    }
    ctx->pc = 0x2C50F4u;
    // 0x2c50f4: 0xa3a0025e  sb          $zero, 0x25E($sp)
    ctx->pc = 0x2c50f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 606), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c50f8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c50f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c50fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c50fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5100: 0xc0b0428  jal         func_2C10A0
    ctx->pc = 0x2C5100u;
    SET_GPR_U32(ctx, 31, 0x2C5108u);
    ctx->pc = 0x2C10A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C10A0u, 0x2C5100u, 0x2C5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5108u;
label_2c5108:
    // 0x2c5108: 0x93a2025e  lbu         $v0, 0x25E($sp)
    ctx->pc = 0x2c5108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 606)));
    // 0x2c510c: 0x1000020a  b           . + 4 + (0x20A << 2)
    ctx->pc = 0x2C510Cu;
    {
        const bool branch_taken_0x2c510c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c510c) {
            ctx->pc = 0x2C5938u;
            goto label_2c5938;
        }
    }
    ctx->pc = 0x2C5114u;
label_2c5114:
    // 0x2c5114: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x2c5114u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_2c5118:
    // 0x2c5118: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c5118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c511c: 0xc0b16a8  jal         func_2C5AA0
    ctx->pc = 0x2C511Cu;
    SET_GPR_U32(ctx, 31, 0x2C5124u);
    ctx->pc = 0x2C5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5AA0u, 0x2C511Cu, 0x2C5124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5124u;
label_2c5124:
    // 0x2c5124: 0x16c2ffe1  bne         $s6, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2C5124u;
    {
        const bool branch_taken_0x2c5124 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5124) {
            ctx->pc = 0x2C50ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c50ac;
        }
    }
    ctx->pc = 0x2C512Cu;
label_2c512c:
    // 0x2c512c: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x2c512cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c5130: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c5130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c5134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5138: 0xc097020  jal         func_25C080
    ctx->pc = 0x2C5138u;
    SET_GPR_U32(ctx, 31, 0x2C5140u);
    ctx->pc = 0x25C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C080u, 0x2C5138u, 0x2C5140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5140u;
label_2c5140:
    // 0x2c5140: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2c5140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c5144: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2c5144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c5148: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x2c5148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
    // 0x2c514c: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x2c514cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x2c5150: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2c5150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c5154: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C5154u;
    SET_GPR_U32(ctx, 31, 0x2C515Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C5154u, 0x2C515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C515Cu;
label_2c515c:
    // 0x2c515c: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x2c515cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    // 0x2c5160: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x2c5160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2c5164: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2C5164u;
    SET_GPR_U32(ctx, 31, 0x2C516Cu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2C5164u, 0x2C516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C516Cu;
label_2c516c:
    // 0x2c516c: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x2c516cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x2c5170: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c5170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5174: 0x0  nop
    ctx->pc = 0x2c5174u;
    // NOP
    // 0x2c5178: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x2c5178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x2c517c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x2c517cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5180: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2c5180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2c5184: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x2c5184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2c5188: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c5188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c518c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C518Cu;
    {
        const bool branch_taken_0x2c518c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c518c) {
            ctx->pc = 0x2C5214u;
            goto label_2c5214;
        }
    }
    ctx->pc = 0x2C5194u;
    // 0x2c5194: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c5194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c5198: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C5198u;
    {
        const bool branch_taken_0x2c5198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c5198) {
            ctx->pc = 0x2C51F8u;
            goto label_2c51f8;
        }
    }
    ctx->pc = 0x2C51A0u;
    // 0x2c51a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c51a4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C51A4u;
    {
        const bool branch_taken_0x2c51a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c51a4) {
            ctx->pc = 0x2C51DCu;
            goto label_2c51dc;
        }
    }
    ctx->pc = 0x2C51ACu;
    // 0x2c51ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c51acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c51b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C51B0u;
    {
        const bool branch_taken_0x2c51b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c51b0) {
            ctx->pc = 0x2C51C0u;
            goto label_2c51c0;
        }
    }
    ctx->pc = 0x2C51B8u;
    // 0x2c51b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C51B8u;
    {
        const bool branch_taken_0x2c51b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c51b8) {
            ctx->pc = 0x2C5228u;
            goto label_2c5228;
        }
    }
    ctx->pc = 0x2C51C0u;
label_2c51c0:
    // 0x2c51c0: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x2c51c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
    // 0x2c51c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c51c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c51c8: 0x0  nop
    ctx->pc = 0x2c51c8u;
    // NOP
    // 0x2c51cc: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x2c51ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x2c51d0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2c51d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c51d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C51D4u;
    {
        const bool branch_taken_0x2c51d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c51d4) {
            ctx->pc = 0x2C5228u;
            goto label_2c5228;
        }
    }
    ctx->pc = 0x2C51DCu;
label_2c51dc:
    // 0x2c51dc: 0x3c024286  lui         $v0, 0x4286
    ctx->pc = 0x2c51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17030 << 16));
    // 0x2c51e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c51e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c51e4: 0x0  nop
    ctx->pc = 0x2c51e4u;
    // NOP
    // 0x2c51e8: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x2c51e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x2c51ec: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2c51ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c51f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C51F0u;
    {
        const bool branch_taken_0x2c51f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c51f0) {
            ctx->pc = 0x2C5228u;
            goto label_2c5228;
        }
    }
    ctx->pc = 0x2C51F8u;
label_2c51f8:
    // 0x2c51f8: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x2c51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
    // 0x2c51fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c51fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5200: 0x0  nop
    ctx->pc = 0x2c5200u;
    // NOP
    // 0x2c5204: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x2c5204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x2c5208: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c5208u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c520c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C520Cu;
    {
        const bool branch_taken_0x2c520c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c520c) {
            ctx->pc = 0x2C5228u;
            goto label_2c5228;
        }
    }
    ctx->pc = 0x2C5214u;
label_2c5214:
    // 0x2c5214: 0x3c024286  lui         $v0, 0x4286
    ctx->pc = 0x2c5214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17030 << 16));
    // 0x2c5218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c521c: 0x0  nop
    ctx->pc = 0x2c521cu;
    // NOP
    // 0x2c5220: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x2c5220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x2c5224: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c5224u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5228:
    // 0x2c5228: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c5228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c522c: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x2C522Cu;
    SET_GPR_U32(ctx, 31, 0x2C5234u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x2C522Cu, 0x2C5234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5234u;
label_2c5234:
    // 0x2c5234: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2c5234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2c5238: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x2C5238u;
    SET_GPR_U32(ctx, 31, 0x2C5240u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x2C5238u, 0x2C5240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5240u;
label_2c5240:
    // 0x2c5240: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c5240u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5244: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2c5244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c5248: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x2c5248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2c524c: 0xc096f58  jal         func_25BD60
    ctx->pc = 0x2C524Cu;
    SET_GPR_U32(ctx, 31, 0x2C5254u);
    ctx->pc = 0x25BD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BD60u, 0x2C524Cu, 0x2C5254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5254u;
label_2c5254:
    // 0x2c5254: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c5254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5258: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c5258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c525c: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C525Cu;
    {
        const bool branch_taken_0x2c525c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c525c) {
            ctx->pc = 0x2C5268u;
            goto label_2c5268;
        }
    }
    ctx->pc = 0x2C5264u;
    // 0x2c5264: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x2c5264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c5268:
    // 0x2c5268: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x2c5268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2c526c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c526cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5270: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C5270u;
    SET_GPR_U32(ctx, 31, 0x2C5278u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C5270u, 0x2C5278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5278u;
label_2c5278:
    // 0x2c5278: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c527c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2c527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2c5280: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x2c5280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2c5284: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c5284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5288: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C5288u;
    SET_GPR_U32(ctx, 31, 0x2C5290u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C5288u, 0x2C5290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5290u;
label_2c5290:
    // 0x2c5290: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c5290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5294: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2c5294u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c5298: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2c5298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c529c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2c529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c52a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c52a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c52a4: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x2c52a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x2c52a8: 0x2a620007  slti        $v0, $s3, 0x7
    ctx->pc = 0x2c52a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2c52ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C52ACu;
    {
        const bool branch_taken_0x2c52ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c52ac) {
            ctx->pc = 0x2C52CCu;
            goto label_2c52cc;
        }
    }
    ctx->pc = 0x2C52B4u;
    // 0x2c52b4: 0x2a610012  slti        $at, $s3, 0x12
    ctx->pc = 0x2c52b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2c52b8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C52B8u;
    {
        const bool branch_taken_0x2c52b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c52b8) {
            ctx->pc = 0x2C52CCu;
            goto label_2c52cc;
        }
    }
    ctx->pc = 0x2C52C0u;
    // 0x2c52c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c52c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c52c4: 0x0  nop
    ctx->pc = 0x2c52c4u;
    // NOP
    // 0x2c52c8: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x2c52c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_2c52cc:
    // 0x2c52cc: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x2c52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x2c52d0: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x2c52d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x2c52d4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2c52d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c52d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c52dc: 0x0  nop
    ctx->pc = 0x2c52dcu;
    // NOP
    // 0x2c52e0: 0xe7a0023c  swc1        $f0, 0x23C($sp)
    ctx->pc = 0x2c52e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
    // 0x2c52e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c52e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c52e8: 0x0  nop
    ctx->pc = 0x2c52e8u;
    // NOP
    // 0x2c52ec: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x2c52ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x2c52f0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c52f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c52f4: 0xc0b04b0  jal         func_2C12C0
    ctx->pc = 0x2C52F4u;
    SET_GPR_U32(ctx, 31, 0x2C52FCu);
    ctx->pc = 0x2C12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C12C0u, 0x2C52F4u, 0x2C52FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C52FCu;
label_2c52fc:
    // 0x2c52fc: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x2c52fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x2c5300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c5300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5304: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c5304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5308: 0xc0b1674  jal         func_2C59D0
    ctx->pc = 0x2C5308u;
    SET_GPR_U32(ctx, 31, 0x2C5310u);
    ctx->pc = 0x2C59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C59D0u, 0x2C5308u, 0x2C5310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5310u;
label_2c5310:
    // 0x2c5310: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c5310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5314: 0xafa00234  sw          $zero, 0x234($sp)
    ctx->pc = 0x2c5314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
    // 0x2c5318: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C5318u;
    {
        const bool branch_taken_0x2c5318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5318) {
            ctx->pc = 0x2C53B4u;
            goto label_2c53b4;
        }
    }
    ctx->pc = 0x2C5320u;
label_2c5320:
    // 0x2c5320: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c5320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c5324: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x2c5324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2c5328: 0xc0b04c8  jal         func_2C1320
    ctx->pc = 0x2C5328u;
    SET_GPR_U32(ctx, 31, 0x2C5330u);
    ctx->pc = 0x2C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1320u, 0x2C5328u, 0x2C5330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5330u;
label_2c5330:
    // 0x2c5330: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c5330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5334: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c5334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c5338: 0xc048094  jal         func_120250
    ctx->pc = 0x2C5338u;
    SET_GPR_U32(ctx, 31, 0x2C5340u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C5338u, 0x2C5340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5340u;
label_2c5340:
    // 0x2c5340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5344: 0x24050480  addiu       $a1, $zero, 0x480
    ctx->pc = 0x2c5344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x2c5348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c5348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c534c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2C534Cu;
    SET_GPR_U32(ctx, 31, 0x2C5354u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2C534Cu, 0x2C5354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5354u;
label_2c5354:
    // 0x2c5354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5358: 0x0  nop
    ctx->pc = 0x2c5358u;
    // NOP
    // 0x2c535c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2c535cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c5360: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x2c5360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5364: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c5364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c5368: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x2c5368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x2c536c: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x2c536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5370: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c5370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5374: 0x0  nop
    ctx->pc = 0x2c5374u;
    // NOP
    // 0x2c5378: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c5378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c537c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2C537Cu;
    {
        const bool branch_taken_0x2c537c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c537c) {
            ctx->pc = 0x2C53A8u;
            goto label_2c53a8;
        }
    }
    ctx->pc = 0x2C5384u;
    // 0x2c5384: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x2c5384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5388: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x2c5388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c538c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c538cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5390: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5390u;
    {
        const bool branch_taken_0x2c5390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5390) {
            ctx->pc = 0x2C53A8u;
            goto label_2c53a8;
        }
    }
    ctx->pc = 0x2C5398u;
    // 0x2c5398: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2c5398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c539c: 0xe7a0023c  swc1        $f0, 0x23C($sp)
    ctx->pc = 0x2c539cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
    // 0x2c53a0: 0x8fa20234  lw          $v0, 0x234($sp)
    ctx->pc = 0x2c53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2c53a4: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x2c53a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_2c53a8:
    // 0x2c53a8: 0x8fa20234  lw          $v0, 0x234($sp)
    ctx->pc = 0x2c53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2c53ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c53acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c53b0: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x2c53b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
label_2c53b4:
    // 0x2c53b4: 0x8fa20234  lw          $v0, 0x234($sp)
    ctx->pc = 0x2c53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2c53b8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2c53b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2c53bc: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c53bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c53c0: 0xc0b04b0  jal         func_2C12C0
    ctx->pc = 0x2C53C0u;
    SET_GPR_U32(ctx, 31, 0x2C53C8u);
    ctx->pc = 0x2C12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C12C0u, 0x2C53C0u, 0x2C53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C53C8u;
label_2c53c8:
    // 0x2c53c8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2c53c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c53cc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c53ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c53d0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2C53D0u;
    {
        const bool branch_taken_0x2c53d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c53d0) {
            ctx->pc = 0x2C5320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5320;
        }
    }
    ctx->pc = 0x2C53D8u;
    // 0x2c53d8: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x2c53d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2c53dc: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x2c53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x2c53e0: 0x1062009e  beq         $v1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x2C53E0u;
    {
        const bool branch_taken_0x2c53e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c53e0) {
            ctx->pc = 0x2C565Cu;
            goto label_2c565c;
        }
    }
    ctx->pc = 0x2C53E8u;
    // 0x2c53e8: 0x8fb70240  lw          $s7, 0x240($sp)
    ctx->pc = 0x2c53e8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2c53ec: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c53ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c53f0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c53f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c53f4: 0xc0b04c8  jal         func_2C1320
    ctx->pc = 0x2C53F4u;
    SET_GPR_U32(ctx, 31, 0x2C53FCu);
    ctx->pc = 0x2C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1320u, 0x2C53F4u, 0x2C53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C53FCu;
label_2c53fc:
    // 0x2c53fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5400: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c5400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c5404: 0xc048094  jal         func_120250
    ctx->pc = 0x2C5404u;
    SET_GPR_U32(ctx, 31, 0x2C540Cu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C5404u, 0x2C540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C540Cu;
label_2c540c:
    // 0x2c540c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c540cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5410: 0x24050480  addiu       $a1, $zero, 0x480
    ctx->pc = 0x2c5410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x2c5414: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c5414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5418: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2C5418u;
    SET_GPR_U32(ctx, 31, 0x2C5420u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2C5418u, 0x2C5420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5420u;
label_2c5420:
    // 0x2c5420: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x2c5420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    // 0x2c5424: 0xafa0022c  sw          $zero, 0x22C($sp)
    ctx->pc = 0x2c5424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 0));
    // 0x2c5428: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c5428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c542c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C542Cu;
    {
        const bool branch_taken_0x2c542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c542c) {
            ctx->pc = 0x2C5498u;
            goto label_2c5498;
        }
    }
    ctx->pc = 0x2C5434u;
label_2c5434:
    // 0x2c5434: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2c5434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2c5438: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2c5438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2c543c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c543cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c5440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c5440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5444: 0xc0b04c8  jal         func_2C1320
    ctx->pc = 0x2C5444u;
    SET_GPR_U32(ctx, 31, 0x2C544Cu);
    ctx->pc = 0x2C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1320u, 0x2C5444u, 0x2C544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C544Cu;
label_2c544c:
    // 0x2c544c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c544cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5450: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c5450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c5454: 0xc048094  jal         func_120250
    ctx->pc = 0x2C5454u;
    SET_GPR_U32(ctx, 31, 0x2C545Cu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C5454u, 0x2C545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C545Cu;
label_2c545c:
    // 0x2c545c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c545cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5460: 0x24050480  addiu       $a1, $zero, 0x480
    ctx->pc = 0x2c5460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x2c5464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c5464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5468: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2C5468u;
    SET_GPR_U32(ctx, 31, 0x2C5470u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2C5468u, 0x2C5470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5470u;
label_2c5470:
    // 0x2c5470: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2c5470u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c5474: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5474u;
    {
        const bool branch_taken_0x2c5474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5474) {
            ctx->pc = 0x2C5494u;
            goto label_2c5494;
        }
    }
    ctx->pc = 0x2C547Cu;
    // 0x2c547c: 0x8fa3022c  lw          $v1, 0x22C($sp)
    ctx->pc = 0x2c547cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x2c5480: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2c5480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c5484: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x2c5484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x2c5488: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c5488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c548c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c548cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c5490: 0xac5000e0  sw          $s0, 0xE0($v0)
    ctx->pc = 0x2c5490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 16));
label_2c5494:
    // 0x2c5494: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c5494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c5498:
    // 0x2c5498: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c5498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c549c: 0xc0b04b0  jal         func_2C12C0
    ctx->pc = 0x2C549Cu;
    SET_GPR_U32(ctx, 31, 0x2C54A4u);
    ctx->pc = 0x2C12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C12C0u, 0x2C549Cu, 0x2C54A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C54A4u;
label_2c54a4:
    // 0x2c54a4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2c54a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c54a8: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2C54A8u;
    {
        const bool branch_taken_0x2c54a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c54a8) {
            ctx->pc = 0x2C5434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5434;
        }
    }
    ctx->pc = 0x2C54B0u;
    // 0x2c54b0: 0x8fa2022c  lw          $v0, 0x22C($sp)
    ctx->pc = 0x2c54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x2c54b4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2c54b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c54b8: 0x14200065  bnez        $at, . + 4 + (0x65 << 2)
    ctx->pc = 0x2C54B8u;
    {
        const bool branch_taken_0x2c54b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c54b8) {
            ctx->pc = 0x2C5650u;
            goto label_2c5650;
        }
    }
    ctx->pc = 0x2C54C0u;
    // 0x2c54c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c54c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c54c4: 0x0  nop
    ctx->pc = 0x2c54c4u;
    // NOP
    // 0x2c54c8: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x2c54c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x2c54cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c54ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54d0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2C54D0u;
    {
        const bool branch_taken_0x2c54d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c54d0) {
            ctx->pc = 0x2C5638u;
            goto label_2c5638;
        }
    }
    ctx->pc = 0x2C54D8u;
label_2c54d8:
    // 0x2c54d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c54dc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c54dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c54e0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c54e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c54e4: 0x8c4500e0  lw          $a1, 0xE0($v0)
    ctx->pc = 0x2c54e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x2c54e8: 0xc0b04c8  jal         func_2C1320
    ctx->pc = 0x2C54E8u;
    SET_GPR_U32(ctx, 31, 0x2C54F0u);
    ctx->pc = 0x2C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1320u, 0x2C54E8u, 0x2C54F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C54F0u;
label_2c54f0:
    // 0x2c54f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c54f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c54f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c54f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c54f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54fc: 0xc0af558  jal         func_2BD560
    ctx->pc = 0x2C54FCu;
    SET_GPR_U32(ctx, 31, 0x2C5504u);
    ctx->pc = 0x2BD560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD560u, 0x2C54FCu, 0x2C5504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5504u;
label_2c5504:
    // 0x2c5504: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x2c5504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x2c5508: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x2c5508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c550c: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x2c550cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5510: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c5510u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5514: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x2C5514u;
    {
        const bool branch_taken_0x2c5514 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5514) {
            ctx->pc = 0x2C55B0u;
            goto label_2c55b0;
        }
    }
    ctx->pc = 0x2C551Cu;
    // 0x2c551c: 0xc7a00224  lwc1        $f0, 0x224($sp)
    ctx->pc = 0x2c551cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5520: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x2c5520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x2c5524: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c5524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c5528: 0xc053cd4  jal         func_14F350
    ctx->pc = 0x2C5528u;
    SET_GPR_U32(ctx, 31, 0x2C5530u);
    ctx->pc = 0x14F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F350u, 0x2C5528u, 0x2C5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5530u;
label_2c5530:
    // 0x2c5530: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2c5530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2c5534: 0xc053cd4  jal         func_14F350
    ctx->pc = 0x2C5534u;
    SET_GPR_U32(ctx, 31, 0x2C553Cu);
    ctx->pc = 0x14F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F350u, 0x2C5534u, 0x2C553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C553Cu;
label_2c553c:
    // 0x2c553c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c553cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c5540: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c5540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c5544: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c5544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c5548: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x2c5548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x2c554c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x2C554Cu;
    SET_GPR_U32(ctx, 31, 0x2C5554u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x2C554Cu, 0x2C5554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5554u;
label_2c5554:
    // 0x2c5554: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c5554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c5558: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c5558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c555c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c555cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c5560: 0x8c4500e0  lw          $a1, 0xE0($v0)
    ctx->pc = 0x2c5560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x2c5564: 0xc0b04c8  jal         func_2C1320
    ctx->pc = 0x2C5564u;
    SET_GPR_U32(ctx, 31, 0x2C556Cu);
    ctx->pc = 0x2C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1320u, 0x2C5564u, 0x2C556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C556Cu;
label_2c556c:
    // 0x2c556c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5570: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c5570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c5574: 0xc048094  jal         func_120250
    ctx->pc = 0x2C5574u;
    SET_GPR_U32(ctx, 31, 0x2C557Cu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C5574u, 0x2C557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C557Cu;
label_2c557c:
    // 0x2c557c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5580: 0x24050481  addiu       $a1, $zero, 0x481
    ctx->pc = 0x2c5580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1153));
    // 0x2c5584: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c5584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5588: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2C5588u;
    SET_GPR_U32(ctx, 31, 0x2C5590u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2C5588u, 0x2C5590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5590u;
label_2c5590:
    // 0x2c5590: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x2c5590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x2c5594: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2c5594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2c5598: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x2c5598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2c559c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x2C559Cu;
    SET_GPR_U32(ctx, 31, 0x2C55A4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x2C559Cu, 0x2C55A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C55A4u;
label_2c55a4:
    // 0x2c55a4: 0x8fb40220  lw          $s4, 0x220($sp)
    ctx->pc = 0x2c55a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2c55a8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C55A8u;
    {
        const bool branch_taken_0x2c55a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c55a8) {
            ctx->pc = 0x2C5634u;
            goto label_2c5634;
        }
    }
    ctx->pc = 0x2C55B0u;
label_2c55b0:
    // 0x2c55b0: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x2c55b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c55b4: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x2c55b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c55b8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c55b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c55bc: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2C55BCu;
    {
        const bool branch_taken_0x2c55bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c55bc) {
            ctx->pc = 0x2C5634u;
            goto label_2c5634;
        }
    }
    ctx->pc = 0x2C55C4u;
    // 0x2c55c4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c55c8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c55cc: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c55ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c55d0: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x2c55d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x2c55d4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x2C55D4u;
    SET_GPR_U32(ctx, 31, 0x2C55DCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x2C55D4u, 0x2C55DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C55DCu;
label_2c55dc:
    // 0x2c55dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c55e0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c55e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c55e4: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c55e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c55e8: 0x8c4500e0  lw          $a1, 0xE0($v0)
    ctx->pc = 0x2c55e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x2c55ec: 0xc0b04c8  jal         func_2C1320
    ctx->pc = 0x2C55ECu;
    SET_GPR_U32(ctx, 31, 0x2C55F4u);
    ctx->pc = 0x2C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1320u, 0x2C55ECu, 0x2C55F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C55F4u;
label_2c55f4:
    // 0x2c55f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c55f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c55f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c55fc: 0xc048094  jal         func_120250
    ctx->pc = 0x2C55FCu;
    SET_GPR_U32(ctx, 31, 0x2C5604u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C55FCu, 0x2C5604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5604u;
label_2c5604:
    // 0x2c5604: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5608: 0x24050481  addiu       $a1, $zero, 0x481
    ctx->pc = 0x2c5608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1153));
    // 0x2c560c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c560cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5610: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2C5610u;
    SET_GPR_U32(ctx, 31, 0x2C5618u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2C5610u, 0x2C5618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5618u;
label_2c5618:
    // 0x2c5618: 0xafa2021c  sw          $v0, 0x21C($sp)
    ctx->pc = 0x2c5618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
    // 0x2c561c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2c561cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2c5620: 0x27a5021c  addiu       $a1, $sp, 0x21C
    ctx->pc = 0x2c5620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x2c5624: 0xc0444e0  jal         func_111380
    ctx->pc = 0x2C5624u;
    SET_GPR_U32(ctx, 31, 0x2C562Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x2C5624u, 0x2C562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C562Cu;
label_2c562c:
    // 0x2c562c: 0x8fa2021c  lw          $v0, 0x21C($sp)
    ctx->pc = 0x2c562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x2c5630: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2c5630u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2c5634:
    // 0x2c5634: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c5634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c5638:
    // 0x2c5638: 0x8fa2022c  lw          $v0, 0x22C($sp)
    ctx->pc = 0x2c5638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x2c563c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2c563cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c5640: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x2C5640u;
    {
        const bool branch_taken_0x2c5640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5640) {
            ctx->pc = 0x2C54D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c54d8;
        }
    }
    ctx->pc = 0x2C5648u;
    // 0x2c5648: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C5648u;
    {
        const bool branch_taken_0x2c5648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5648) {
            ctx->pc = 0x2C56B8u;
            goto label_2c56b8;
        }
    }
    ctx->pc = 0x2C5650u;
label_2c5650:
    // 0x2c5650: 0x8fb700e0  lw          $s7, 0xE0($sp)
    ctx->pc = 0x2c5650u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c5654: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2C5654u;
    {
        const bool branch_taken_0x2c5654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5654) {
            ctx->pc = 0x2C56B8u;
            goto label_2c56b8;
        }
    }
    ctx->pc = 0x2C565Cu;
label_2c565c:
    // 0x2c565c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C565Cu;
    {
        const bool branch_taken_0x2c565c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c565c) {
            ctx->pc = 0x2C5678u;
            goto label_2c5678;
        }
    }
    ctx->pc = 0x2C5664u;
    // 0x2c5664: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x2c5664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x2c5668: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c5668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c566c: 0xc0b165c  jal         func_2C5970
    ctx->pc = 0x2C566Cu;
    SET_GPR_U32(ctx, 31, 0x2C5674u);
    ctx->pc = 0x2C5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5970u, 0x2C566Cu, 0x2C5674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5674u;
label_2c5674:
    // 0x2c5674: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c5674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5678:
    // 0x2c5678: 0xa3a0025d  sb          $zero, 0x25D($sp)
    ctx->pc = 0x2c5678u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 605), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c567c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2c567cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2c5680: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c5680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5684: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x2C5684u;
    SET_GPR_U32(ctx, 31, 0x2C568Cu);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x2C5684u, 0x2C568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C568Cu;
label_2c568c:
    // 0x2c568c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c5690: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c5690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5694: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x2C5694u;
    SET_GPR_U32(ctx, 31, 0x2C569Cu);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x2C5694u, 0x2C569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C569Cu;
label_2c569c:
    // 0x2c569c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c569cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c56a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c56a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c56a4: 0xc0b0428  jal         func_2C10A0
    ctx->pc = 0x2C56A4u;
    SET_GPR_U32(ctx, 31, 0x2C56ACu);
    ctx->pc = 0x2C10A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C10A0u, 0x2C56A4u, 0x2C56ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C56ACu;
label_2c56ac:
    // 0x2c56ac: 0x93a2025d  lbu         $v0, 0x25D($sp)
    ctx->pc = 0x2c56acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 605)));
    // 0x2c56b0: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2C56B0u;
    {
        const bool branch_taken_0x2c56b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c56b0) {
            ctx->pc = 0x2C5938u;
            goto label_2c5938;
        }
    }
    ctx->pc = 0x2C56B8u;
label_2c56b8:
    // 0x2c56b8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C56B8u;
    {
        const bool branch_taken_0x2c56b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c56b8) {
            ctx->pc = 0x2C56D4u;
            goto label_2c56d4;
        }
    }
    ctx->pc = 0x2C56C0u;
    // 0x2c56c0: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x2c56c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x2c56c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c56c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c56c8: 0xc0b165c  jal         func_2C5970
    ctx->pc = 0x2C56C8u;
    SET_GPR_U32(ctx, 31, 0x2C56D0u);
    ctx->pc = 0x2C5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5970u, 0x2C56C8u, 0x2C56D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C56D0u;
label_2c56d0:
    // 0x2c56d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c56d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c56d4:
    // 0x2c56d4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c56d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c56d8: 0xc044598  jal         func_111660
    ctx->pc = 0x2C56D8u;
    SET_GPR_U32(ctx, 31, 0x2C56E0u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x2C56D8u, 0x2C56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C56E0u;
label_2c56e0:
    // 0x2c56e0: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x2c56e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x2c56e4: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x2c56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x2c56e8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2c56e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c56ec: 0x1420006f  bnez        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x2C56ECu;
    {
        const bool branch_taken_0x2c56ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c56ec) {
            ctx->pc = 0x2C58ACu;
            goto label_2c58ac;
        }
    }
    ctx->pc = 0x2C56F4u;
    // 0x2c56f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c56f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c56f8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2C56F8u;
    {
        const bool branch_taken_0x2c56f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c56f8) {
            ctx->pc = 0x2C5800u;
            goto label_2c5800;
        }
    }
    ctx->pc = 0x2C5700u;
label_2c5700:
    // 0x2c5700: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c5700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c5704: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c5704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5708: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x2C5708u;
    SET_GPR_U32(ctx, 31, 0x2C5710u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x2C5708u, 0x2C5710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5710u;
label_2c5710:
    // 0x2c5710: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2c5710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c5714: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c5714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5718: 0xc0b04c8  jal         func_2C1320
    ctx->pc = 0x2C5718u;
    SET_GPR_U32(ctx, 31, 0x2C5720u);
    ctx->pc = 0x2C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1320u, 0x2C5718u, 0x2C5720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5720u;
label_2c5720:
    // 0x2c5720: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c5720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5724: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c5724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c5728: 0x8f82bcb4  lw          $v0, -0x434C($gp)
    ctx->pc = 0x2c5728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950068)));
    // 0x2c572c: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C572Cu;
    {
        const bool branch_taken_0x2c572c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c572c) {
            ctx->pc = 0x2C57F8u;
            goto label_2c57f8;
        }
    }
    ctx->pc = 0x2C5734u;
    // 0x2c5734: 0x8f84bcb4  lw          $a0, -0x434C($gp)
    ctx->pc = 0x2c5734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950068)));
    // 0x2c5738: 0xc048094  jal         func_120250
    ctx->pc = 0x2C5738u;
    SET_GPR_U32(ctx, 31, 0x2C5740u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C5738u, 0x2C5740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5740u;
label_2c5740:
    // 0x2c5740: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5744: 0x24050474  addiu       $a1, $zero, 0x474
    ctx->pc = 0x2c5744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1140));
    // 0x2c5748: 0x2786a4c8  addiu       $a2, $gp, -0x5B38
    ctx->pc = 0x2c5748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943944));
    // 0x2c574c: 0xc041a50  jal         func_106940
    ctx->pc = 0x2C574Cu;
    SET_GPR_U32(ctx, 31, 0x2C5754u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2C574Cu, 0x2C5754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5754u;
label_2c5754:
    // 0x2c5754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5758: 0x2785a4cc  addiu       $a1, $gp, -0x5B34
    ctx->pc = 0x2c5758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943948));
    // 0x2c575c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c575cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5760: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x2C5760u;
    SET_GPR_U32(ctx, 31, 0x2C5768u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x2C5760u, 0x2C5768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5768u;
label_2c5768:
    // 0x2c5768: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C5768u;
    {
        const bool branch_taken_0x2c5768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5768) {
            ctx->pc = 0x2C57F8u;
            goto label_2c57f8;
        }
    }
    ctx->pc = 0x2C5770u;
    // 0x2c5770: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2c5770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2c5774: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c5774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5778: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x2C5778u;
    SET_GPR_U32(ctx, 31, 0x2C5780u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x2C5778u, 0x2C5780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5780u;
label_2c5780:
    // 0x2c5780: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c5780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5784: 0x2842823  subu        $a1, $s4, $a0
    ctx->pc = 0x2c5784u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2c5788: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c5788u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c578c: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2c578cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2c5790: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2c5790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5794: 0xc041010  jal         func_104040
    ctx->pc = 0x2C5794u;
    SET_GPR_U32(ctx, 31, 0x2C579Cu);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x2C5794u, 0x2C579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C579Cu;
label_2c579c:
    // 0x2c579c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c579cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57a0: 0x114080  sll         $t0, $s1, 2
    ctx->pc = 0x2c57a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c57a4: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x2c57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2c57a8: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2c57a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2c57ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c57acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57b0: 0xc06fa28  jal         func_1BE8A0
    ctx->pc = 0x2C57B0u;
    SET_GPR_U32(ctx, 31, 0x2C57B8u);
    ctx->pc = 0x1BE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE8A0u, 0x2C57B0u, 0x2C57B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C57B8u;
label_2c57b8:
    // 0x2c57b8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2c57b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c57bc: 0xc041010  jal         func_104040
    ctx->pc = 0x2C57BCu;
    SET_GPR_U32(ctx, 31, 0x2C57C4u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x2C57BCu, 0x2C57C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C57C4u;
label_2c57c4:
    // 0x2c57c4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2c57c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c57c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c57cc: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2c57ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c57d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c57d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c57d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57d8: 0xc06fa28  jal         func_1BE8A0
    ctx->pc = 0x2C57D8u;
    SET_GPR_U32(ctx, 31, 0x2C57E0u);
    ctx->pc = 0x1BE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE8A0u, 0x2C57D8u, 0x2C57E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C57E0u;
label_2c57e0:
    // 0x2c57e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c57e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57e4: 0x8fa70218  lw          $a3, 0x218($sp)
    ctx->pc = 0x2c57e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x2c57e8: 0x24e8ffff  addiu       $t0, $a3, -0x1
    ctx->pc = 0x2c57e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2c57ec: 0xafa80218  sw          $t0, 0x218($sp)
    ctx->pc = 0x2c57ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 8));
    // 0x2c57f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C57F0u;
    {
        const bool branch_taken_0x2c57f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c57f0) {
            ctx->pc = 0x2C5810u;
            goto label_2c5810;
        }
    }
    ctx->pc = 0x2C57F8u;
label_2c57f8:
    // 0x2c57f8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2c57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c57fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c57fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5800:
    // 0x2c5800: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x2c5800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x2c5804: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x2c5804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c5808: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x2C5808u;
    {
        const bool branch_taken_0x2c5808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5808) {
            ctx->pc = 0x2C5700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5700;
        }
    }
    ctx->pc = 0x2C5810u;
label_2c5810:
    // 0x2c5810: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2C5810u;
    SET_GPR_U32(ctx, 31, 0x2C5818u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2C5810u, 0x2C5818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5818u;
label_2c5818:
    // 0x2c5818: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x2c5818u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2c581c: 0x1810  mfhi        $v1
    ctx->pc = 0x2c581cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2c5820: 0xafa30214  sw          $v1, 0x214($sp)
    ctx->pc = 0x2c5820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 3));
    // 0x2c5824: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x2c5824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
    // 0x2c5828: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2c5828u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c582c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C582Cu;
    {
        const bool branch_taken_0x2c582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c582c) {
            ctx->pc = 0x2C589Cu;
            goto label_2c589c;
        }
    }
    ctx->pc = 0x2C5834u;
label_2c5834:
    // 0x2c5834: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2c5834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2c5838: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2c5838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c583c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x2C583Cu;
    SET_GPR_U32(ctx, 31, 0x2C5844u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x2C583Cu, 0x2C5844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5844u;
label_2c5844:
    // 0x2c5844: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c5844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5848: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x2c5848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c584c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x2c584cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c5850: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x2c5850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2c5854: 0xafa80210  sw          $t0, 0x210($sp)
    ctx->pc = 0x2c5854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 8));
    // 0x2c5858: 0x8fa20214  lw          $v0, 0x214($sp)
    ctx->pc = 0x2c5858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x2c585c: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2c585cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c5860: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x2c5860u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c5864: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2C5864u;
    {
        const bool branch_taken_0x2c5864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5864) {
            ctx->pc = 0x2C5894u;
            goto label_2c5894;
        }
    }
    ctx->pc = 0x2C586Cu;
    // 0x2c586c: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x2c586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c5870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5874: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2c5874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5878: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x2C5878u;
    SET_GPR_U32(ctx, 31, 0x2C5880u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x2C5878u, 0x2C5880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5880u;
label_2c5880:
    // 0x2c5880: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5884: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2c5884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c5888: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2c5888u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c588c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C588Cu;
    {
        const bool branch_taken_0x2c588c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c588c) {
            ctx->pc = 0x2C58ACu;
            goto label_2c58ac;
        }
    }
    ctx->pc = 0x2C5894u;
label_2c5894:
    // 0x2c5894: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x2c5894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2c5898: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2c5898u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c589c:
    // 0x2c589c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x2c589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x2c58a0: 0x3c2202b  sltu        $a0, $fp, $v0
    ctx->pc = 0x2c58a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c58a4: 0x1480ffe3  bnez        $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2C58A4u;
    {
        const bool branch_taken_0x2c58a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c58a4) {
            ctx->pc = 0x2C5834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5834;
        }
    }
    ctx->pc = 0x2C58ACu;
label_2c58ac:
    // 0x2c58ac: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x2c58acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c58b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c58b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58b4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c58b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58b8: 0xc0b04c8  jal         func_2C1320
    ctx->pc = 0x2C58B8u;
    SET_GPR_U32(ctx, 31, 0x2C58C0u);
    ctx->pc = 0x2C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1320u, 0x2C58B8u, 0x2C58C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C58C0u;
label_2c58c0:
    // 0x2c58c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c58c4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2c58c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2c58c8: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2c58c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c58cc: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x2c58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
    // 0x2c58d0: 0x8fa40258  lw          $a0, 0x258($sp)
    ctx->pc = 0x2c58d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2c58d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c58d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c58d8: 0xaf82bcb4  sw          $v0, -0x434C($gp)
    ctx->pc = 0x2c58d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950068), GPR_U32(ctx, 2));
    // 0x2c58dc: 0x8fa40258  lw          $a0, 0x258($sp)
    ctx->pc = 0x2c58dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2c58e0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2c58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2c58e4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2c58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2c58e8: 0x8fa40258  lw          $a0, 0x258($sp)
    ctx->pc = 0x2c58e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2c58ec: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x2c58ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c58f0: 0xa3a2025c  sb          $v0, 0x25C($sp)
    ctx->pc = 0x2c58f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 604), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c58f4: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2c58f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2c58f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c58f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c58fc: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x2C58FCu;
    SET_GPR_U32(ctx, 31, 0x2C5904u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x2C58FCu, 0x2C5904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5904u;
label_2c5904:
    // 0x2c5904: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x2c5904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2c5908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c590c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x2c590cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5910: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c5910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5914: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x2C5914u;
    SET_GPR_U32(ctx, 31, 0x2C591Cu);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x2C5914u, 0x2C591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C591Cu;
label_2c591c:
    // 0x2c591c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c591cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5920: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x2c5920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2c5924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5928: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c5928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c592c: 0xc0b0428  jal         func_2C10A0
    ctx->pc = 0x2C592Cu;
    SET_GPR_U32(ctx, 31, 0x2C5934u);
    ctx->pc = 0x2C10A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C10A0u, 0x2C592Cu, 0x2C5934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5934u;
label_2c5934:
    // 0x2c5934: 0x93a2025c  lbu         $v0, 0x25C($sp)
    ctx->pc = 0x2c5934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 604)));
label_2c5938:
    // 0x2c5938: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c5938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c593c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c593cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c5940: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c5940u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c5944: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c5944u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c5948: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c5948u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c594c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c594cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5950: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c5950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5954: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c5954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c595c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c595cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5960: 0x27bd02b0  addiu       $sp, $sp, 0x2B0
    ctx->pc = 0x2c5960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x2c5964: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C596Cu;
    // 0x2c596c: 0x0  nop
    ctx->pc = 0x2c596cu;
    // NOP
    ctx->pc = 0x2c5970u;
}
