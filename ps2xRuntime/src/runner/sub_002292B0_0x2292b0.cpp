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

// Function: sub_002292B0
// Address: 0x2292b0 - 0x229810
void sub_002292B0_0x2292b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002292B0_0x2292b0");
#endif

    switch (ctx->pc) {
        case 0x229300u: goto label_229300;
        case 0x22932cu: goto label_22932c;
        case 0x22935cu: goto label_22935c;
        case 0x229380u: goto label_229380;
        case 0x22938cu: goto label_22938c;
        case 0x2293a4u: goto label_2293a4;
        case 0x2293e4u: goto label_2293e4;
        case 0x229414u: goto label_229414;
        case 0x229430u: goto label_229430;
        case 0x22943cu: goto label_22943c;
        case 0x22944cu: goto label_22944c;
        case 0x229460u: goto label_229460;
        case 0x229478u: goto label_229478;
        case 0x229484u: goto label_229484;
        case 0x229490u: goto label_229490;
        case 0x2294acu: goto label_2294ac;
        case 0x2294c4u: goto label_2294c4;
        case 0x2294d0u: goto label_2294d0;
        case 0x2294dcu: goto label_2294dc;
        case 0x2294f4u: goto label_2294f4;
        case 0x229500u: goto label_229500;
        case 0x22951cu: goto label_22951c;
        case 0x229530u: goto label_229530;
        case 0x22955cu: goto label_22955c;
        case 0x22957cu: goto label_22957c;
        case 0x22958cu: goto label_22958c;
        case 0x22959cu: goto label_22959c;
        case 0x2295bcu: goto label_2295bc;
        case 0x229614u: goto label_229614;
        case 0x229628u: goto label_229628;
        case 0x229650u: goto label_229650;
        case 0x229668u: goto label_229668;
        case 0x22968cu: goto label_22968c;
        case 0x229698u: goto label_229698;
        case 0x2296b0u: goto label_2296b0;
        case 0x2296ecu: goto label_2296ec;
        case 0x229708u: goto label_229708;
        case 0x229720u: goto label_229720;
        case 0x229730u: goto label_229730;
        case 0x229744u: goto label_229744;
        case 0x229774u: goto label_229774;
        case 0x2297ccu: goto label_2297cc;
        default: break;
    }

    ctx->pc = 0x2292b0u;

    // 0x2292b0: 0x27bdfc60  addiu       $sp, $sp, -0x3A0
    ctx->pc = 0x2292b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966368));
    // 0x2292b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2292b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2292b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2292b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2292bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2292bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2292c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2292c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2292c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2292c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2292c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2292c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2292cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2292ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2292d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2292d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2292d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2292d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2292d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2292d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2292dc: 0xafa40360  sw          $a0, 0x360($sp)
    ctx->pc = 0x2292dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 4));
    // 0x2292e0: 0xafa50370  sw          $a1, 0x370($sp)
    ctx->pc = 0x2292e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 5));
    // 0x2292e4: 0xafa60380  sw          $a2, 0x380($sp)
    ctx->pc = 0x2292e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 6));
    // 0x2292e8: 0xafa70390  sw          $a3, 0x390($sp)
    ctx->pc = 0x2292e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 7));
    // 0x2292ec: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2292ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2292f0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2292f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2292f4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2292F4u;
    {
        const bool branch_taken_0x2292f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2292f4) {
            ctx->pc = 0x22931Cu;
            goto label_22931c;
        }
    }
    ctx->pc = 0x2292FCu;
    // 0x2292fc: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x2292fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_229300:
    // 0x229300: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x229300u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x229304: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x229304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x229308: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x229308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22930c: 0x0  nop
    ctx->pc = 0x22930cu;
    // NOP
    // 0x229310: 0x0  nop
    ctx->pc = 0x229310u;
    // NOP
    // 0x229314: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x229314u;
    {
        const bool branch_taken_0x229314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x229314) {
            ctx->pc = 0x229300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229300;
        }
    }
    ctx->pc = 0x22931Cu;
label_22931c:
    // 0x22931c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x22931cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x229320: 0x24c6b880  addiu       $a2, $a2, -0x4780
    ctx->pc = 0x229320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948992));
    // 0x229324: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x229324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x229328: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x229328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22932c:
    // 0x22932c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x229330: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x229330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x229334: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x229334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x229338: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x229338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x22933c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x22933cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x229340: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x229340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x229344: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x229344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x229348: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x229348u;
    {
        const bool branch_taken_0x229348 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x229348) {
            ctx->pc = 0x22932Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22932c;
        }
    }
    ctx->pc = 0x229350u;
    // 0x229350: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x229350u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229354: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x229354u;
    {
        const bool branch_taken_0x229354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229354) {
            ctx->pc = 0x2293A8u;
            goto label_2293a8;
        }
    }
    ctx->pc = 0x22935Cu;
label_22935c:
    // 0x22935c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x22935cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x229360: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x229360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x229364: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x229364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x229368: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x229368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x22936c: 0x24a5b8a0  addiu       $a1, $a1, -0x4760
    ctx->pc = 0x22936cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949024));
    // 0x229370: 0x8c460120  lw          $a2, 0x120($v0)
    ctx->pc = 0x229370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x229374: 0x8fa70370  lw          $a3, 0x370($sp)
    ctx->pc = 0x229374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x229378: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x229378u;
    SET_GPR_U32(ctx, 31, 0x229380u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x229378u, 0x229380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229380u;
label_229380:
    // 0x229380: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x229380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x229384: 0xc0f0b92  jal         func_3C2E48
    ctx->pc = 0x229384u;
    SET_GPR_U32(ctx, 31, 0x22938Cu);
    ctx->pc = 0x3C2E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E48u, 0x229384u, 0x22938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22938Cu;
label_22938c:
    // 0x22938c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22938Cu;
    {
        const bool branch_taken_0x22938c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22938c) {
            ctx->pc = 0x2293A4u;
            goto label_2293a4;
        }
    }
    ctx->pc = 0x229394u;
    // 0x229394: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x229394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x229398: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x229398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x22939c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x22939Cu;
    SET_GPR_U32(ctx, 31, 0x2293A4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x22939Cu, 0x2293A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2293A4u;
label_2293a4:
    // 0x2293a4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2293a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2293a8:
    // 0x2293a8: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x2293a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2293ac: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2293ACu;
    {
        const bool branch_taken_0x2293ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2293ac) {
            ctx->pc = 0x22935Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22935c;
        }
    }
    ctx->pc = 0x2293B4u;
    // 0x2293b4: 0x83a20140  lb          $v0, 0x140($sp)
    ctx->pc = 0x2293b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2293b8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2293b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2293bc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2293bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2293c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2293C0u;
    {
        const bool branch_taken_0x2293c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2293c0) {
            ctx->pc = 0x2293D0u;
            goto label_2293d0;
        }
    }
    ctx->pc = 0x2293C8u;
    // 0x2293c8: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2293C8u;
    {
        const bool branch_taken_0x2293c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2293c8) {
            ctx->pc = 0x22965Cu;
            goto label_22965c;
        }
    }
    ctx->pc = 0x2293D0u;
label_2293d0:
    // 0x2293d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2293d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2293d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2293d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2293DCu;
    {
        const bool branch_taken_0x2293dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2293dc) {
            ctx->pc = 0x2293F4u;
            goto label_2293f4;
        }
    }
    ctx->pc = 0x2293E4u;
label_2293e4:
    // 0x2293e4: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2293e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2293e8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2293e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2293ec: 0xac400348  sw          $zero, 0x348($v0)
    ctx->pc = 0x2293ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 840), GPR_U32(ctx, 0));
    // 0x2293f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2293f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2293f4:
    // 0x2293f4: 0x2e820003  sltiu       $v0, $s4, 0x3
    ctx->pc = 0x2293f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2293f8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2293F8u;
    {
        const bool branch_taken_0x2293f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2293f8) {
            ctx->pc = 0x2293E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2293e4;
        }
    }
    ctx->pc = 0x229400u;
    // 0x229400: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x229400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229404: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x229404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229408: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x229408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x22940c: 0xc10493e  jal         func_4124F8
    ctx->pc = 0x22940Cu;
    SET_GPR_U32(ctx, 31, 0x229414u);
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x22940Cu, 0x229414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229414u;
label_229414:
    // 0x229414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22941c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x22941cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x229420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x229420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229424: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x229424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229428: 0xc103322  jal         func_40CC88
    ctx->pc = 0x229428u;
    SET_GPR_U32(ctx, 31, 0x229430u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x229428u, 0x229430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229430u;
label_229430:
    // 0x229430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229434: 0xc103236  jal         func_40C8D8
    ctx->pc = 0x229434u;
    SET_GPR_U32(ctx, 31, 0x22943Cu);
    ctx->pc = 0x40C8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C8D8u, 0x229434u, 0x22943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22943Cu;
label_22943c:
    // 0x22943c: 0xafa2035c  sw          $v0, 0x35C($sp)
    ctx->pc = 0x22943cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 860), GPR_U32(ctx, 2));
    // 0x229440: 0x8fa4035c  lw          $a0, 0x35C($sp)
    ctx->pc = 0x229440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 860)));
    // 0x229444: 0xc10329a  jal         func_40CA68
    ctx->pc = 0x229444u;
    SET_GPR_U32(ctx, 31, 0x22944Cu);
    ctx->pc = 0x40CA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CA68u, 0x229444u, 0x22944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22944Cu;
label_22944c:
    // 0x22944c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22944cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229450: 0xafa20358  sw          $v0, 0x358($sp)
    ctx->pc = 0x229450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 856), GPR_U32(ctx, 2));
    // 0x229454: 0x8fa4035c  lw          $a0, 0x35C($sp)
    ctx->pc = 0x229454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 860)));
    // 0x229458: 0xc103290  jal         func_40CA40
    ctx->pc = 0x229458u;
    SET_GPR_U32(ctx, 31, 0x229460u);
    ctx->pc = 0x40CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CA40u, 0x229458u, 0x229460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229460u;
label_229460:
    // 0x229460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229464: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x229464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x229468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x229468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22946c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22946cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229470: 0xc103322  jal         func_40CC88
    ctx->pc = 0x229470u;
    SET_GPR_U32(ctx, 31, 0x229478u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x229470u, 0x229478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229478u;
label_229478:
    // 0x229478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22947c: 0xc1058bc  jal         func_4162F0
    ctx->pc = 0x22947Cu;
    SET_GPR_U32(ctx, 31, 0x229484u);
    ctx->pc = 0x4162F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4162F0u, 0x22947Cu, 0x229484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229484u;
label_229484:
    // 0x229484: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x229484u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229488: 0xc1082ca  jal         func_420B28
    ctx->pc = 0x229488u;
    SET_GPR_U32(ctx, 31, 0x229490u);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x229488u, 0x229490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229490u;
label_229490:
    // 0x229490: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x229490u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229494: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x229494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229498: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x229498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x22949c: 0x24a56da0  addiu       $a1, $a1, 0x6DA0
    ctx->pc = 0x22949cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28064));
    // 0x2294a0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2294a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294a4: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x2294A4u;
    SET_GPR_U32(ctx, 31, 0x2294ACu);
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x2294A4u, 0x2294ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2294ACu;
label_2294ac:
    // 0x2294ac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2294acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x2294b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x2294b4: 0x24a56e10  addiu       $a1, $a1, 0x6E10
    ctx->pc = 0x2294b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28176));
    // 0x2294b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2294b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294bc: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x2294BCu;
    SET_GPR_U32(ctx, 31, 0x2294C4u);
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x2294BCu, 0x2294C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2294C4u;
label_2294c4:
    // 0x2294c4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2294c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294c8: 0xc1081de  jal         func_420778
    ctx->pc = 0x2294C8u;
    SET_GPR_U32(ctx, 31, 0x2294D0u);
    ctx->pc = 0x420778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420778u, 0x2294C8u, 0x2294D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2294D0u;
label_2294d0:
    // 0x2294d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2294d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294d4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2294D4u;
    {
        const bool branch_taken_0x2294d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2294d4) {
            ctx->pc = 0x229630u;
            goto label_229630;
        }
    }
    ctx->pc = 0x2294DCu;
label_2294dc:
    // 0x2294dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2294dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294e0: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x2294e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2294e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2294e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2294e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294ec: 0xc103322  jal         func_40CC88
    ctx->pc = 0x2294ECu;
    SET_GPR_U32(ctx, 31, 0x2294F4u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x2294ECu, 0x2294F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2294F4u;
label_2294f4:
    // 0x2294f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2294f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294f8: 0xc105146  jal         func_414518
    ctx->pc = 0x2294F8u;
    SET_GPR_U32(ctx, 31, 0x229500u);
    ctx->pc = 0x414518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414518u, 0x2294F8u, 0x229500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229500u;
label_229500:
    // 0x229500: 0xafa20354  sw          $v0, 0x354($sp)
    ctx->pc = 0x229500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 852), GPR_U32(ctx, 2));
    // 0x229504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229508: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x229508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22950c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22950cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229510: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x229510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229514: 0xc103322  jal         func_40CC88
    ctx->pc = 0x229514u;
    SET_GPR_U32(ctx, 31, 0x22951Cu);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x229514u, 0x22951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22951Cu;
label_22951c:
    // 0x22951c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x22951Cu;
    {
        const bool branch_taken_0x22951c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22951c) {
            ctx->pc = 0x22962Cu;
            goto label_22962c;
        }
    }
    ctx->pc = 0x229524u;
    // 0x229524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229528: 0xc0e237c  jal         func_388DF0
    ctx->pc = 0x229528u;
    SET_GPR_U32(ctx, 31, 0x229530u);
    ctx->pc = 0x388DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388DF0u, 0x229528u, 0x229530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229530u;
label_229530:
    // 0x229530: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x229530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x229534: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x229534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x229538: 0xac620348  sw          $v0, 0x348($v1)
    ctx->pc = 0x229538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 840), GPR_U32(ctx, 2));
    // 0x22953c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x22953cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x229540: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x229540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x229544: 0x8c440348  lw          $a0, 0x348($v0)
    ctx->pc = 0x229544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x229548: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x229548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x22954c: 0x24a575e0  addiu       $a1, $a1, 0x75E0
    ctx->pc = 0x22954cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30176));
    // 0x229550: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x229550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x229554: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x229554u;
    SET_GPR_U32(ctx, 31, 0x22955Cu);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x229554u, 0x22955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22955Cu;
label_22955c:
    // 0x22955c: 0x8fa20390  lw          $v0, 0x390($sp)
    ctx->pc = 0x22955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x229560: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229560u;
    {
        const bool branch_taken_0x229560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229560) {
            ctx->pc = 0x22957Cu;
            goto label_22957c;
        }
    }
    ctx->pc = 0x229568u;
    // 0x229568: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x229568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22956c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x22956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x229570: 0x8c440348  lw          $a0, 0x348($v0)
    ctx->pc = 0x229570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x229574: 0xc124efc  jal         func_493BF0
    ctx->pc = 0x229574u;
    SET_GPR_U32(ctx, 31, 0x22957Cu);
    ctx->pc = 0x493BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493BF0u, 0x229574u, 0x22957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22957Cu;
label_22957c:
    // 0x22957c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x22957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x229580: 0x8fa50354  lw          $a1, 0x354($sp)
    ctx->pc = 0x229580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
    // 0x229584: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x229584u;
    SET_GPR_U32(ctx, 31, 0x22958Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x229584u, 0x22958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22958Cu;
label_22958c:
    // 0x22958c: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x22958cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x229590: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x229590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x229594: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x229594u;
    SET_GPR_U32(ctx, 31, 0x22959Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x229594u, 0x22959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22959Cu;
label_22959c:
    // 0x22959c: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x22959cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x2295a0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2295a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2295a4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2295a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2295a8: 0x8c420348  lw          $v0, 0x348($v0)
    ctx->pc = 0x2295a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x2295ac: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x2295acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x2295b0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2295b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2295b4: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2295B4u;
    SET_GPR_U32(ctx, 31, 0x2295BCu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2295B4u, 0x2295BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2295BCu;
label_2295bc:
    // 0x2295bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2295bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2295c0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2295c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2295c4: 0x804200d0  lb          $v0, 0xD0($v0)
    ctx->pc = 0x2295c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2295c8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2295c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2295cc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2295ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2295d0: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2295d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2295d4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2295D4u;
    {
        const bool branch_taken_0x2295d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2295d4) {
            ctx->pc = 0x2295F0u;
            goto label_2295f0;
        }
    }
    ctx->pc = 0x2295DCu;
    // 0x2295dc: 0xa3a000f0  sb          $zero, 0xF0($sp)
    ctx->pc = 0x2295dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x2295e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2295e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2295e4: 0xa3a200f1  sb          $v0, 0xF1($sp)
    ctx->pc = 0x2295e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 241), (uint8_t)GPR_U32(ctx, 2));
    // 0x2295e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2295E8u;
    {
        const bool branch_taken_0x2295e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2295e8) {
            ctx->pc = 0x229614u;
            goto label_229614;
        }
    }
    ctx->pc = 0x2295F0u;
label_2295f0:
    // 0x2295f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2295f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2295f4: 0xa3a200f0  sb          $v0, 0xF0($sp)
    ctx->pc = 0x2295f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 2));
    // 0x2295f8: 0xa3a000f1  sb          $zero, 0xF1($sp)
    ctx->pc = 0x2295f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 241), (uint8_t)GPR_U32(ctx, 0));
    // 0x2295fc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2295fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x229600: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x229600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x229604: 0x8fa40360  lw          $a0, 0x360($sp)
    ctx->pc = 0x229604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x229608: 0x8c450348  lw          $a1, 0x348($v0)
    ctx->pc = 0x229608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x22960c: 0xc08a604  jal         func_229810
    ctx->pc = 0x22960Cu;
    SET_GPR_U32(ctx, 31, 0x229614u);
    ctx->pc = 0x229810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229810u, 0x22960Cu, 0x229614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229614u;
label_229614:
    // 0x229614: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x229614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x229618: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x229618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x22961c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x22961cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x229620: 0xc08a390  jal         func_228E40
    ctx->pc = 0x229620u;
    SET_GPR_U32(ctx, 31, 0x229628u);
    ctx->pc = 0x228E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228E40u, 0x229620u, 0x229628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229628u;
label_229628:
    // 0x229628: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x229628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22962c:
    // 0x22962c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x22962cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_229630:
    // 0x229630: 0x8fa20358  lw          $v0, 0x358($sp)
    ctx->pc = 0x229630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
    // 0x229634: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x229634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x229638: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x229638u;
    {
        const bool branch_taken_0x229638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229638) {
            ctx->pc = 0x2294DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2294dc;
        }
    }
    ctx->pc = 0x229640u;
    // 0x229640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x229644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229648: 0xc10496a  jal         func_4125A8
    ctx->pc = 0x229648u;
    SET_GPR_U32(ctx, 31, 0x229650u);
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x229648u, 0x229650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229650u;
label_229650:
    // 0x229650: 0x8fa20348  lw          $v0, 0x348($sp)
    ctx->pc = 0x229650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x229654: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x229654u;
    {
        const bool branch_taken_0x229654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229654) {
            ctx->pc = 0x2297D0u;
            goto label_2297d0;
        }
    }
    ctx->pc = 0x22965Cu;
label_22965c:
    // 0x22965c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22965cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229660: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x229660u;
    {
        const bool branch_taken_0x229660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229660) {
            ctx->pc = 0x2296B4u;
            goto label_2296b4;
        }
    }
    ctx->pc = 0x229668u;
label_229668:
    // 0x229668: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x229668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x22966c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x22966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x229670: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x229670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x229674: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x229674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x229678: 0x24a5b8b0  addiu       $a1, $a1, -0x4750
    ctx->pc = 0x229678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949040));
    // 0x22967c: 0x8c460120  lw          $a2, 0x120($v0)
    ctx->pc = 0x22967cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x229680: 0x8fa70370  lw          $a3, 0x370($sp)
    ctx->pc = 0x229680u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x229684: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x229684u;
    SET_GPR_U32(ctx, 31, 0x22968Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x229684u, 0x22968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22968Cu;
label_22968c:
    // 0x22968c: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x22968cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x229690: 0xc0f0b92  jal         func_3C2E48
    ctx->pc = 0x229690u;
    SET_GPR_U32(ctx, 31, 0x229698u);
    ctx->pc = 0x3C2E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E48u, 0x229690u, 0x229698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229698u;
label_229698:
    // 0x229698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x229698u;
    {
        const bool branch_taken_0x229698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229698) {
            ctx->pc = 0x2296B0u;
            goto label_2296b0;
        }
    }
    ctx->pc = 0x2296A0u;
    // 0x2296a0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2296a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2296a4: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x2296a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x2296a8: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2296A8u;
    SET_GPR_U32(ctx, 31, 0x2296B0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2296A8u, 0x2296B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2296B0u;
label_2296b0:
    // 0x2296b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2296b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2296b4:
    // 0x2296b4: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x2296b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2296b8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2296B8u;
    {
        const bool branch_taken_0x2296b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2296b8) {
            ctx->pc = 0x229668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229668;
        }
    }
    ctx->pc = 0x2296C0u;
    // 0x2296c0: 0x83a20140  lb          $v0, 0x140($sp)
    ctx->pc = 0x2296c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2296c4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2296c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2296c8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2296c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2296cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2296CCu;
    {
        const bool branch_taken_0x2296cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2296cc) {
            ctx->pc = 0x2296E0u;
            goto label_2296e0;
        }
    }
    ctx->pc = 0x2296D4u;
    // 0x2296d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2296d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296d8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2296D8u;
    {
        const bool branch_taken_0x2296d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2296d8) {
            ctx->pc = 0x2297D0u;
            goto label_2297d0;
        }
    }
    ctx->pc = 0x2296E0u;
label_2296e0:
    // 0x2296e0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2296e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2296e4: 0xc124d9c  jal         func_493670
    ctx->pc = 0x2296E4u;
    SET_GPR_U32(ctx, 31, 0x2296ECu);
    ctx->pc = 0x493670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493670u, 0x2296E4u, 0x2296ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2296ECu;
label_2296ec:
    // 0x2296ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2296ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2296f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x2296f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x2296f8: 0x24a575e0  addiu       $a1, $a1, 0x75E0
    ctx->pc = 0x2296f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30176));
    // 0x2296fc: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x2296fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x229700: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x229700u;
    SET_GPR_U32(ctx, 31, 0x229708u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x229700u, 0x229708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229708u;
label_229708:
    // 0x229708: 0x8fa20390  lw          $v0, 0x390($sp)
    ctx->pc = 0x229708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x22970c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22970Cu;
    {
        const bool branch_taken_0x22970c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22970c) {
            ctx->pc = 0x229720u;
            goto label_229720;
        }
    }
    ctx->pc = 0x229714u;
    // 0x229714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229718: 0xc124efc  jal         func_493BF0
    ctx->pc = 0x229718u;
    SET_GPR_U32(ctx, 31, 0x229720u);
    ctx->pc = 0x493BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493BF0u, 0x229718u, 0x229720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229720u;
label_229720:
    // 0x229720: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x229720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x229724: 0x8fa50370  lw          $a1, 0x370($sp)
    ctx->pc = 0x229724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x229728: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x229728u;
    SET_GPR_U32(ctx, 31, 0x229730u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x229728u, 0x229730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229730u;
label_229730:
    // 0x229730: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x229730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x229734: 0xafb200a4  sw          $s2, 0xA4($sp)
    ctx->pc = 0x229734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 18));
    // 0x229738: 0x8fa40370  lw          $a0, 0x370($sp)
    ctx->pc = 0x229738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x22973c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x22973Cu;
    SET_GPR_U32(ctx, 31, 0x229744u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x22973Cu, 0x229744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229744u;
label_229744:
    // 0x229744: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x229744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229748: 0x8fa20370  lw          $v0, 0x370($sp)
    ctx->pc = 0x229748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x22974c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229750: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x229750u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229754: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x229754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x229758: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x229758u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x22975c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x22975cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x229760: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x229760u;
    {
        const bool branch_taken_0x229760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x229760) {
            ctx->pc = 0x229798u;
            goto label_229798;
        }
    }
    ctx->pc = 0x229768u;
    // 0x229768: 0x8fa40370  lw          $a0, 0x370($sp)
    ctx->pc = 0x229768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x22976c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x22976Cu;
    SET_GPR_U32(ctx, 31, 0x229774u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x22976Cu, 0x229774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229774u;
label_229774:
    // 0x229774: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x229774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229778: 0x8fa20370  lw          $v0, 0x370($sp)
    ctx->pc = 0x229778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x22977c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229780: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x229780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229784: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x229784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x229788: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x229788u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x22978c: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x22978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x229790: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229790u;
    {
        const bool branch_taken_0x229790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229790) {
            ctx->pc = 0x2297ACu;
            goto label_2297ac;
        }
    }
    ctx->pc = 0x229798u;
label_229798:
    // 0x229798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22979c: 0xa3a200a0  sb          $v0, 0xA0($sp)
    ctx->pc = 0x22979cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 2));
    // 0x2297a0: 0xa3a000a1  sb          $zero, 0xA1($sp)
    ctx->pc = 0x2297a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 161), (uint8_t)GPR_U32(ctx, 0));
    // 0x2297a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2297A4u;
    {
        const bool branch_taken_0x2297a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2297a4) {
            ctx->pc = 0x2297B8u;
            goto label_2297b8;
        }
    }
    ctx->pc = 0x2297ACu;
label_2297ac:
    // 0x2297ac: 0xa3a000a0  sb          $zero, 0xA0($sp)
    ctx->pc = 0x2297acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x2297b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2297b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2297b4: 0xa3a200a1  sb          $v0, 0xA1($sp)
    ctx->pc = 0x2297b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 161), (uint8_t)GPR_U32(ctx, 2));
label_2297b8:
    // 0x2297b8: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x2297b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x2297bc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2297bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2297c0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2297c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2297c4: 0xc08a390  jal         func_228E40
    ctx->pc = 0x2297C4u;
    SET_GPR_U32(ctx, 31, 0x2297CCu);
    ctx->pc = 0x228E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228E40u, 0x2297C4u, 0x2297CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297CCu;
label_2297cc:
    // 0x2297cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2297ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2297d0:
    // 0x2297d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2297d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2297d4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2297d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2297d8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2297d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2297dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2297dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2297e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2297e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2297e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2297e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2297e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2297e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2297ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2297ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2297f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2297f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2297f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2297f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2297f8: 0x27bd03a0  addiu       $sp, $sp, 0x3A0
    ctx->pc = 0x2297f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x2297fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2297FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2297FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229804u;
    // 0x229804: 0x0  nop
    ctx->pc = 0x229804u;
    // NOP
    // 0x229808: 0x0  nop
    ctx->pc = 0x229808u;
    // NOP
    // 0x22980c: 0x0  nop
    ctx->pc = 0x22980cu;
    // NOP
    ctx->pc = 0x229810u;
}
