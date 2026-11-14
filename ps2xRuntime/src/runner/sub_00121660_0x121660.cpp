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

// Function: sub_00121660
// Address: 0x121660 - 0x121880
void sub_00121660_0x121660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121660_0x121660");
#endif

    switch (ctx->pc) {
        case 0x12168cu: goto label_12168c;
        case 0x1216a4u: goto label_1216a4;
        case 0x1216c4u: goto label_1216c4;
        case 0x1216d8u: goto label_1216d8;
        case 0x1216e8u: goto label_1216e8;
        case 0x121774u: goto label_121774;
        case 0x121784u: goto label_121784;
        case 0x121844u: goto label_121844;
        default: break;
    }

    ctx->pc = 0x121660u;

    // 0x121660: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x121660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x121664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x121664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x121668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x121668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12166c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x121670: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x121670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x121674: 0xa3a50070  sb          $a1, 0x70($sp)
    ctx->pc = 0x121674u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 5));
    // 0x121678: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x121678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x12167c: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x12167cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
    // 0x121680: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x121680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121684: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x121684u;
    SET_GPR_U32(ctx, 31, 0x12168Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x121684u, 0x12168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12168Cu;
label_12168c:
    // 0x12168c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x12168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x121690: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x121690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x121694: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x121694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x121698: 0x93a50070  lbu         $a1, 0x70($sp)
    ctx->pc = 0x121698u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12169c: 0xc08edb0  jal         func_23B6C0
    ctx->pc = 0x12169Cu;
    SET_GPR_U32(ctx, 31, 0x1216A4u);
    ctx->pc = 0x23B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B6C0u, 0x12169Cu, 0x1216A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1216A4u;
label_1216a4:
    // 0x1216a4: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x1216a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1216a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1216a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1216ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1216acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1216b0: 0x14830066  bne         $a0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x1216B0u;
    {
        const bool branch_taken_0x1216b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1216b0) {
            ctx->pc = 0x12184Cu;
            goto label_12184c;
        }
    }
    ctx->pc = 0x1216B8u;
    // 0x1216b8: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x1216b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
    // 0x1216bc: 0xc050c5c  jal         func_143170
    ctx->pc = 0x1216BCu;
    SET_GPR_U32(ctx, 31, 0x1216C4u);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x1216BCu, 0x1216C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1216C4u;
label_1216c4:
    // 0x1216c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1216c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1216c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1216ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1216d0: 0xc04fbd0  jal         func_13EF40
    ctx->pc = 0x1216D0u;
    SET_GPR_U32(ctx, 31, 0x1216D8u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x1216D0u, 0x1216D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1216D8u;
label_1216d8:
    // 0x1216d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1216d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1216dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1216e0: 0xc050530  jal         func_1414C0
    ctx->pc = 0x1216E0u;
    SET_GPR_U32(ctx, 31, 0x1216E8u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x1216E0u, 0x1216E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1216E8u;
label_1216e8:
    // 0x1216e8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1216e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1216ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1216ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1216f0: 0x0  nop
    ctx->pc = 0x1216f0u;
    // NOP
    // 0x1216f4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1216f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1216f8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1216f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1216fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1216fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121700: 0x0  nop
    ctx->pc = 0x121700u;
    // NOP
    // 0x121704: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x121704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x121708: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x121708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x12170c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12170cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121710: 0x0  nop
    ctx->pc = 0x121710u;
    // NOP
    // 0x121714: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x121714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x121718: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x121718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x12171c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12171cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121720: 0x0  nop
    ctx->pc = 0x121720u;
    // NOP
    // 0x121724: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x121724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x121728: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x121728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x12172c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12172cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121730: 0x0  nop
    ctx->pc = 0x121730u;
    // NOP
    // 0x121734: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x121734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x121738: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x121738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x12173c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12173cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121740: 0x0  nop
    ctx->pc = 0x121740u;
    // NOP
    // 0x121744: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x121744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x121748: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x121748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x12174c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12174cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121750: 0x0  nop
    ctx->pc = 0x121750u;
    // NOP
    // 0x121754: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x121754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x121758: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12175c: 0x0  nop
    ctx->pc = 0x12175cu;
    // NOP
    // 0x121760: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x121760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x121764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121768: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x121768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12176c: 0xc050194  jal         func_140650
    ctx->pc = 0x12176Cu;
    SET_GPR_U32(ctx, 31, 0x121774u);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x12176Cu, 0x121774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121774u;
label_121774:
    // 0x121774: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x121774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x121778: 0xa382bc5c  sb          $v0, -0x43A4($gp)
    ctx->pc = 0x121778u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949980), (uint8_t)GPR_U32(ctx, 2));
    // 0x12177c: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x12177Cu;
    SET_GPR_U32(ctx, 31, 0x121784u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x12177Cu, 0x121784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121784u;
label_121784:
    // 0x121784: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x121784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x121788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12178c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x12178Cu;
    {
        const bool branch_taken_0x12178c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12178c) {
            ctx->pc = 0x121804u;
            goto label_121804;
        }
    }
    ctx->pc = 0x121794u;
    // 0x121794: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x121794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121798: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x121798u;
    {
        const bool branch_taken_0x121798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x121798) {
            ctx->pc = 0x1217DCu;
            goto label_1217dc;
        }
    }
    ctx->pc = 0x1217A0u;
    // 0x1217a0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1217a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1217a4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1217A4u;
    {
        const bool branch_taken_0x1217a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1217a4) {
            ctx->pc = 0x1217B4u;
            goto label_1217b4;
        }
    }
    ctx->pc = 0x1217ACu;
    // 0x1217ac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1217ACu;
    {
        const bool branch_taken_0x1217ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1217ac) {
            ctx->pc = 0x121804u;
            goto label_121804;
        }
    }
    ctx->pc = 0x1217B4u;
label_1217b4:
    // 0x1217b4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1217b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1217b8: 0xa382a474  sb          $v0, -0x5B8C($gp)
    ctx->pc = 0x1217b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943860), (uint8_t)GPR_U32(ctx, 2));
    // 0x1217bc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1217bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1217c0: 0xa382a475  sb          $v0, -0x5B8B($gp)
    ctx->pc = 0x1217c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943861), (uint8_t)GPR_U32(ctx, 2));
    // 0x1217c4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1217c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1217c8: 0xa382a476  sb          $v0, -0x5B8A($gp)
    ctx->pc = 0x1217c8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943862), (uint8_t)GPR_U32(ctx, 2));
    // 0x1217cc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1217ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1217d0: 0xa382a477  sb          $v0, -0x5B89($gp)
    ctx->pc = 0x1217d0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943863), (uint8_t)GPR_U32(ctx, 2));
    // 0x1217d4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1217D4u;
    {
        const bool branch_taken_0x1217d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1217d4) {
            ctx->pc = 0x121824u;
            goto label_121824;
        }
    }
    ctx->pc = 0x1217DCu;
label_1217dc:
    // 0x1217dc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1217dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1217e0: 0xa382a474  sb          $v0, -0x5B8C($gp)
    ctx->pc = 0x1217e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943860), (uint8_t)GPR_U32(ctx, 2));
    // 0x1217e4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1217e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1217e8: 0xa382a475  sb          $v0, -0x5B8B($gp)
    ctx->pc = 0x1217e8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943861), (uint8_t)GPR_U32(ctx, 2));
    // 0x1217ec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1217ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1217f0: 0xa382a476  sb          $v0, -0x5B8A($gp)
    ctx->pc = 0x1217f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943862), (uint8_t)GPR_U32(ctx, 2));
    // 0x1217f4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1217f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1217f8: 0xa382a477  sb          $v0, -0x5B89($gp)
    ctx->pc = 0x1217f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943863), (uint8_t)GPR_U32(ctx, 2));
    // 0x1217fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1217FCu;
    {
        const bool branch_taken_0x1217fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1217fc) {
            ctx->pc = 0x121824u;
            goto label_121824;
        }
    }
    ctx->pc = 0x121804u;
label_121804:
    // 0x121804: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x121804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x121808: 0xa382a474  sb          $v0, -0x5B8C($gp)
    ctx->pc = 0x121808u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943860), (uint8_t)GPR_U32(ctx, 2));
    // 0x12180c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12180cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x121810: 0xa382a475  sb          $v0, -0x5B8B($gp)
    ctx->pc = 0x121810u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943861), (uint8_t)GPR_U32(ctx, 2));
    // 0x121814: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x121814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x121818: 0xa382a476  sb          $v0, -0x5B8A($gp)
    ctx->pc = 0x121818u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943862), (uint8_t)GPR_U32(ctx, 2));
    // 0x12181c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x12181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x121820: 0xa382a477  sb          $v0, -0x5B89($gp)
    ctx->pc = 0x121820u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943863), (uint8_t)GPR_U32(ctx, 2));
label_121824:
    // 0x121824: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x121824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x121828: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x121828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12182c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x12182cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x121830: 0x27858af0  addiu       $a1, $gp, -0x7510
    ctx->pc = 0x121830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x121834: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x121834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121838: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x121838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12183c: 0xc08f6a0  jal         func_23DA80
    ctx->pc = 0x12183Cu;
    SET_GPR_U32(ctx, 31, 0x121844u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x12183Cu, 0x121844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121844u;
label_121844:
    // 0x121844: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x121844u;
    {
        const bool branch_taken_0x121844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121844) {
            ctx->pc = 0x121864u;
            goto label_121864;
        }
    }
    ctx->pc = 0x12184Cu;
label_12184c:
    // 0x12184c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x12184cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x121850: 0xa383bc5c  sb          $v1, -0x43A4($gp)
    ctx->pc = 0x121850u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949980), (uint8_t)GPR_U32(ctx, 3));
    // 0x121854: 0xa380a474  sb          $zero, -0x5B8C($gp)
    ctx->pc = 0x121854u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943860), (uint8_t)GPR_U32(ctx, 0));
    // 0x121858: 0xa380a475  sb          $zero, -0x5B8B($gp)
    ctx->pc = 0x121858u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943861), (uint8_t)GPR_U32(ctx, 0));
    // 0x12185c: 0xa380a476  sb          $zero, -0x5B8A($gp)
    ctx->pc = 0x12185cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943862), (uint8_t)GPR_U32(ctx, 0));
    // 0x121860: 0xa380a477  sb          $zero, -0x5B89($gp)
    ctx->pc = 0x121860u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943863), (uint8_t)GPR_U32(ctx, 0));
label_121864:
    // 0x121864: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x121864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x121868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12186c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12186cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121870: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x121870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x121874: 0x3e00008  jr          $ra
    ctx->pc = 0x121874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12187Cu;
    // 0x12187c: 0x0  nop
    ctx->pc = 0x12187cu;
    // NOP
    ctx->pc = 0x121880u;
}
