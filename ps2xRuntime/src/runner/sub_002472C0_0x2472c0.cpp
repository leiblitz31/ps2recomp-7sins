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

// Function: sub_002472C0
// Address: 0x2472c0 - 0x247500
void sub_002472C0_0x2472c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002472C0_0x2472c0");
#endif

    switch (ctx->pc) {
        case 0x24736cu: goto label_24736c;
        case 0x247388u: goto label_247388;
        case 0x2473a4u: goto label_2473a4;
        case 0x2473c0u: goto label_2473c0;
        case 0x2473dcu: goto label_2473dc;
        case 0x2473f8u: goto label_2473f8;
        case 0x24747cu: goto label_24747c;
        case 0x247498u: goto label_247498;
        case 0x2474a4u: goto label_2474a4;
        case 0x2474b8u: goto label_2474b8;
        case 0x2474c8u: goto label_2474c8;
        case 0x2474d8u: goto label_2474d8;
        default: break;
    }

    ctx->pc = 0x2472c0u;

    // 0x2472c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2472c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2472c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2472c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2472c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2472c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2472cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2472ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2472d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2472d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2472d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2472d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2472d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2472d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2472dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2472dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2472e0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2472e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2472e4: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2472e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2472e8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2472e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2472ec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2472ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2472f0: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2472F0u;
    {
        const bool branch_taken_0x2472f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2472f0) {
            ctx->pc = 0x247308u;
            goto label_247308;
        }
    }
    ctx->pc = 0x2472F8u;
    // 0x2472f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2472f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2472fc: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x2472fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x247300: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x247300u;
    {
        const bool branch_taken_0x247300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247300) {
            ctx->pc = 0x247310u;
            goto label_247310;
        }
    }
    ctx->pc = 0x247308u;
label_247308:
    // 0x247308: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x247308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24730c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x24730cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_247310:
    // 0x247310: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x247310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247318: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x247318u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24731c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24731cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247320: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x247320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x247324: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x247324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x247328: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x247328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x24732c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x24732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x247330: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x247330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x247334: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x247334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x247338: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x247338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x24733c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x24733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x247340: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x247340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x247344: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x247344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x247348: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x247348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24734c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x24734cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x247350: 0x1010002a  beq         $zero, $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x247350u;
    {
        const bool branch_taken_0x247350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x247350) {
            ctx->pc = 0x2473FCu;
            goto label_2473fc;
        }
    }
    ctx->pc = 0x247358u;
    // 0x247358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24735c: 0x2405040e  addiu       $a1, $zero, 0x40E
    ctx->pc = 0x24735cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
    // 0x247360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247364: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x247364u;
    SET_GPR_U32(ctx, 31, 0x24736Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x247364u, 0x24736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24736Cu;
label_24736c:
    // 0x24736c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x24736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x247370: 0xa0620044  sb          $v0, 0x44($v1)
    ctx->pc = 0x247370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x247374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247378: 0x2405040a  addiu       $a1, $zero, 0x40A
    ctx->pc = 0x247378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1034));
    // 0x24737c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x24737cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x247380: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x247380u;
    SET_GPR_U32(ctx, 31, 0x247388u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x247380u, 0x247388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247388u;
label_247388:
    // 0x247388: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x247388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24738c: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x24738cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x247390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247394: 0x2405040b  addiu       $a1, $zero, 0x40B
    ctx->pc = 0x247394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x247398: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x247398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x24739c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x24739Cu;
    SET_GPR_U32(ctx, 31, 0x2473A4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x24739Cu, 0x2473A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2473A4u;
label_2473a4:
    // 0x2473a4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2473a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2473a8: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x2473a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x2473ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2473acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2473b0: 0x2405040c  addiu       $a1, $zero, 0x40C
    ctx->pc = 0x2473b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    // 0x2473b4: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2473b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2473b8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2473B8u;
    SET_GPR_U32(ctx, 31, 0x2473C0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2473B8u, 0x2473C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2473C0u;
label_2473c0:
    // 0x2473c0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2473c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2473c4: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x2473c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x2473c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2473c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2473cc: 0x2405040d  addiu       $a1, $zero, 0x40D
    ctx->pc = 0x2473ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    // 0x2473d0: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2473d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2473d4: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2473D4u;
    SET_GPR_U32(ctx, 31, 0x2473DCu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2473D4u, 0x2473DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2473DCu;
label_2473dc:
    // 0x2473dc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2473dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2473e0: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x2473e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x2473e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2473e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2473e8: 0x240503fd  addiu       $a1, $zero, 0x3FD
    ctx->pc = 0x2473e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
    // 0x2473ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2473ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2473f0: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2473F0u;
    SET_GPR_U32(ctx, 31, 0x2473F8u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2473F0u, 0x2473F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2473F8u;
label_2473f8:
    // 0x2473f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2473f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2473fc:
    // 0x2473fc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2473fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x247400: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x247400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x247404: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x247404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x247408: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x247408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x24740c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x247410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247414: 0x0  nop
    ctx->pc = 0x247414u;
    // NOP
    // 0x247418: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x247418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24741c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24741cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x247420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247424: 0x0  nop
    ctx->pc = 0x247424u;
    // NOP
    // 0x247428: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x247428u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x24742c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24742cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x247430: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x247430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x247434: 0x0  nop
    ctx->pc = 0x247434u;
    // NOP
    // 0x247438: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x247438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24743c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x24743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x247440: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x247440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x247444: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x247444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x247448: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x247448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x24744c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24744cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x247450: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x247450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x247454: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x247454u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x247458: 0x1010  mfhi        $v0
    ctx->pc = 0x247458u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x24745c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24745Cu;
    {
        const bool branch_taken_0x24745c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24745c) {
            ctx->pc = 0x247468u;
            goto label_247468;
        }
    }
    ctx->pc = 0x247464u;
    // 0x247464: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x247464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_247468:
    // 0x247468: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x247468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24746c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x24746cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x247470: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x247470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x247474: 0xc085538  jal         func_2154E0
    ctx->pc = 0x247474u;
    SET_GPR_U32(ctx, 31, 0x24747Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x247474u, 0x24747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24747Cu;
label_24747c:
    // 0x24747c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24747cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247480: 0x10110011  beq         $zero, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x247480u;
    {
        const bool branch_taken_0x247480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x247480) {
            ctx->pc = 0x2474C8u;
            goto label_2474c8;
        }
    }
    ctx->pc = 0x247488u;
    // 0x247488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24748c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x24748cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247490: 0xc091020  jal         func_244080
    ctx->pc = 0x247490u;
    SET_GPR_U32(ctx, 31, 0x247498u);
    ctx->pc = 0x244080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244080u, 0x247490u, 0x247498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247498u;
label_247498:
    // 0x247498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24749c: 0xc090fa0  jal         func_243E80
    ctx->pc = 0x24749Cu;
    SET_GPR_U32(ctx, 31, 0x2474A4u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x24749Cu, 0x2474A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474A4u;
label_2474a4:
    // 0x2474a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2474a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2474a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2474acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474b0: 0xc094f14  jal         func_253C50
    ctx->pc = 0x2474B0u;
    SET_GPR_U32(ctx, 31, 0x2474B8u);
    ctx->pc = 0x253C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C50u, 0x2474B0u, 0x2474B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474B8u;
label_2474b8:
    // 0x2474b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2474b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2474bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474c0: 0xc090fa8  jal         func_243EA0
    ctx->pc = 0x2474C0u;
    SET_GPR_U32(ctx, 31, 0x2474C8u);
    ctx->pc = 0x243EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EA0u, 0x2474C0u, 0x2474C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474C8u;
label_2474c8:
    // 0x2474c8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2474c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2474cc: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x2474ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x2474d0: 0xc053cd4  jal         func_14F350
    ctx->pc = 0x2474D0u;
    SET_GPR_U32(ctx, 31, 0x2474D8u);
    ctx->pc = 0x14F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F350u, 0x2474D0u, 0x2474D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474D8u;
label_2474d8:
    // 0x2474d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2474d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2474dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2474dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2474e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2474e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2474e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2474e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2474e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2474e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2474ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2474ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2474f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2474f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2474f4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2474f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2474f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2474F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2474F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247500u;
}
