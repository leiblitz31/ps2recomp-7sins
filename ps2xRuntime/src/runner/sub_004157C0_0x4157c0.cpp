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

// Function: sub_004157C0
// Address: 0x4157c0 - 0x415b18
void sub_004157C0_0x4157c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004157C0_0x4157c0");
#endif

    switch (ctx->pc) {
        case 0x4157c0u: goto label_4157c0;
        case 0x4157c4u: goto label_4157c4;
        case 0x4157c8u: goto label_4157c8;
        case 0x4157ccu: goto label_4157cc;
        case 0x4157d0u: goto label_4157d0;
        case 0x4157d4u: goto label_4157d4;
        case 0x4157d8u: goto label_4157d8;
        case 0x4157dcu: goto label_4157dc;
        case 0x4157e0u: goto label_4157e0;
        case 0x4157e4u: goto label_4157e4;
        case 0x4157e8u: goto label_4157e8;
        case 0x4157ecu: goto label_4157ec;
        case 0x4157f0u: goto label_4157f0;
        case 0x4157f4u: goto label_4157f4;
        case 0x4157f8u: goto label_4157f8;
        case 0x4157fcu: goto label_4157fc;
        case 0x415800u: goto label_415800;
        case 0x415804u: goto label_415804;
        case 0x415808u: goto label_415808;
        case 0x41580cu: goto label_41580c;
        case 0x415810u: goto label_415810;
        case 0x415814u: goto label_415814;
        case 0x415818u: goto label_415818;
        case 0x41581cu: goto label_41581c;
        case 0x415820u: goto label_415820;
        case 0x415824u: goto label_415824;
        case 0x415828u: goto label_415828;
        case 0x41582cu: goto label_41582c;
        case 0x415830u: goto label_415830;
        case 0x415834u: goto label_415834;
        case 0x415838u: goto label_415838;
        case 0x41583cu: goto label_41583c;
        case 0x415840u: goto label_415840;
        case 0x415844u: goto label_415844;
        case 0x415848u: goto label_415848;
        case 0x41584cu: goto label_41584c;
        case 0x415850u: goto label_415850;
        case 0x415854u: goto label_415854;
        case 0x415858u: goto label_415858;
        case 0x41585cu: goto label_41585c;
        case 0x415860u: goto label_415860;
        case 0x415864u: goto label_415864;
        case 0x415868u: goto label_415868;
        case 0x41586cu: goto label_41586c;
        case 0x415870u: goto label_415870;
        case 0x415874u: goto label_415874;
        case 0x415878u: goto label_415878;
        case 0x41587cu: goto label_41587c;
        case 0x415880u: goto label_415880;
        case 0x415884u: goto label_415884;
        case 0x415888u: goto label_415888;
        case 0x41588cu: goto label_41588c;
        case 0x415890u: goto label_415890;
        case 0x415894u: goto label_415894;
        case 0x415898u: goto label_415898;
        case 0x41589cu: goto label_41589c;
        case 0x4158a0u: goto label_4158a0;
        case 0x4158a4u: goto label_4158a4;
        case 0x4158a8u: goto label_4158a8;
        case 0x4158acu: goto label_4158ac;
        case 0x4158b0u: goto label_4158b0;
        case 0x4158b4u: goto label_4158b4;
        case 0x4158b8u: goto label_4158b8;
        case 0x4158bcu: goto label_4158bc;
        case 0x4158c0u: goto label_4158c0;
        case 0x4158c4u: goto label_4158c4;
        case 0x4158c8u: goto label_4158c8;
        case 0x4158ccu: goto label_4158cc;
        case 0x4158d0u: goto label_4158d0;
        case 0x4158d4u: goto label_4158d4;
        case 0x4158d8u: goto label_4158d8;
        case 0x4158dcu: goto label_4158dc;
        case 0x4158e0u: goto label_4158e0;
        case 0x4158e4u: goto label_4158e4;
        case 0x4158e8u: goto label_4158e8;
        case 0x4158ecu: goto label_4158ec;
        case 0x4158f0u: goto label_4158f0;
        case 0x4158f4u: goto label_4158f4;
        case 0x4158f8u: goto label_4158f8;
        case 0x4158fcu: goto label_4158fc;
        case 0x415900u: goto label_415900;
        case 0x415904u: goto label_415904;
        case 0x415908u: goto label_415908;
        case 0x41590cu: goto label_41590c;
        case 0x415910u: goto label_415910;
        case 0x415914u: goto label_415914;
        case 0x415918u: goto label_415918;
        case 0x41591cu: goto label_41591c;
        case 0x415920u: goto label_415920;
        case 0x415924u: goto label_415924;
        case 0x415928u: goto label_415928;
        case 0x41592cu: goto label_41592c;
        case 0x415930u: goto label_415930;
        case 0x415934u: goto label_415934;
        case 0x415938u: goto label_415938;
        case 0x41593cu: goto label_41593c;
        case 0x415940u: goto label_415940;
        case 0x415944u: goto label_415944;
        case 0x415948u: goto label_415948;
        case 0x41594cu: goto label_41594c;
        case 0x415950u: goto label_415950;
        case 0x415954u: goto label_415954;
        case 0x415958u: goto label_415958;
        case 0x41595cu: goto label_41595c;
        case 0x415960u: goto label_415960;
        case 0x415964u: goto label_415964;
        case 0x415968u: goto label_415968;
        case 0x41596cu: goto label_41596c;
        case 0x415970u: goto label_415970;
        case 0x415974u: goto label_415974;
        case 0x415978u: goto label_415978;
        case 0x41597cu: goto label_41597c;
        case 0x415980u: goto label_415980;
        case 0x415984u: goto label_415984;
        case 0x415988u: goto label_415988;
        case 0x41598cu: goto label_41598c;
        case 0x415990u: goto label_415990;
        case 0x415994u: goto label_415994;
        case 0x415998u: goto label_415998;
        case 0x41599cu: goto label_41599c;
        case 0x4159a0u: goto label_4159a0;
        case 0x4159a4u: goto label_4159a4;
        case 0x4159a8u: goto label_4159a8;
        case 0x4159acu: goto label_4159ac;
        case 0x4159b0u: goto label_4159b0;
        case 0x4159b4u: goto label_4159b4;
        case 0x4159b8u: goto label_4159b8;
        case 0x4159bcu: goto label_4159bc;
        case 0x4159c0u: goto label_4159c0;
        case 0x4159c4u: goto label_4159c4;
        case 0x4159c8u: goto label_4159c8;
        case 0x4159ccu: goto label_4159cc;
        case 0x4159d0u: goto label_4159d0;
        case 0x4159d4u: goto label_4159d4;
        case 0x4159d8u: goto label_4159d8;
        case 0x4159dcu: goto label_4159dc;
        case 0x4159e0u: goto label_4159e0;
        case 0x4159e4u: goto label_4159e4;
        case 0x4159e8u: goto label_4159e8;
        case 0x4159ecu: goto label_4159ec;
        case 0x4159f0u: goto label_4159f0;
        case 0x4159f4u: goto label_4159f4;
        case 0x4159f8u: goto label_4159f8;
        case 0x4159fcu: goto label_4159fc;
        case 0x415a00u: goto label_415a00;
        case 0x415a04u: goto label_415a04;
        case 0x415a08u: goto label_415a08;
        case 0x415a0cu: goto label_415a0c;
        case 0x415a10u: goto label_415a10;
        case 0x415a14u: goto label_415a14;
        case 0x415a18u: goto label_415a18;
        case 0x415a1cu: goto label_415a1c;
        case 0x415a20u: goto label_415a20;
        case 0x415a24u: goto label_415a24;
        case 0x415a28u: goto label_415a28;
        case 0x415a2cu: goto label_415a2c;
        case 0x415a30u: goto label_415a30;
        case 0x415a34u: goto label_415a34;
        case 0x415a38u: goto label_415a38;
        case 0x415a3cu: goto label_415a3c;
        case 0x415a40u: goto label_415a40;
        case 0x415a44u: goto label_415a44;
        case 0x415a48u: goto label_415a48;
        case 0x415a4cu: goto label_415a4c;
        case 0x415a50u: goto label_415a50;
        case 0x415a54u: goto label_415a54;
        case 0x415a58u: goto label_415a58;
        case 0x415a5cu: goto label_415a5c;
        case 0x415a60u: goto label_415a60;
        case 0x415a64u: goto label_415a64;
        case 0x415a68u: goto label_415a68;
        case 0x415a6cu: goto label_415a6c;
        case 0x415a70u: goto label_415a70;
        case 0x415a74u: goto label_415a74;
        case 0x415a78u: goto label_415a78;
        case 0x415a7cu: goto label_415a7c;
        case 0x415a80u: goto label_415a80;
        case 0x415a84u: goto label_415a84;
        case 0x415a88u: goto label_415a88;
        case 0x415a8cu: goto label_415a8c;
        case 0x415a90u: goto label_415a90;
        case 0x415a94u: goto label_415a94;
        case 0x415a98u: goto label_415a98;
        case 0x415a9cu: goto label_415a9c;
        case 0x415aa0u: goto label_415aa0;
        case 0x415aa4u: goto label_415aa4;
        case 0x415aa8u: goto label_415aa8;
        case 0x415aacu: goto label_415aac;
        case 0x415ab0u: goto label_415ab0;
        case 0x415ab4u: goto label_415ab4;
        case 0x415ab8u: goto label_415ab8;
        case 0x415abcu: goto label_415abc;
        case 0x415ac0u: goto label_415ac0;
        case 0x415ac4u: goto label_415ac4;
        case 0x415ac8u: goto label_415ac8;
        case 0x415accu: goto label_415acc;
        case 0x415ad0u: goto label_415ad0;
        case 0x415ad4u: goto label_415ad4;
        case 0x415ad8u: goto label_415ad8;
        case 0x415adcu: goto label_415adc;
        case 0x415ae0u: goto label_415ae0;
        case 0x415ae4u: goto label_415ae4;
        case 0x415ae8u: goto label_415ae8;
        case 0x415aecu: goto label_415aec;
        case 0x415af0u: goto label_415af0;
        case 0x415af4u: goto label_415af4;
        case 0x415af8u: goto label_415af8;
        case 0x415afcu: goto label_415afc;
        case 0x415b00u: goto label_415b00;
        case 0x415b04u: goto label_415b04;
        case 0x415b08u: goto label_415b08;
        case 0x415b0cu: goto label_415b0c;
        case 0x415b10u: goto label_415b10;
        case 0x415b14u: goto label_415b14;
        default: break;
    }

    ctx->pc = 0x4157c0u;

label_4157c0:
    // 0x4157c0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x4157c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_4157c4:
    // 0x4157c4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x4157c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_4157c8:
    // 0x4157c8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x4157c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4157cc:
    // 0x4157cc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x4157ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_4157d0:
    // 0x4157d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4157d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4157d4:
    // 0x4157d4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4157d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4157d8:
    // 0x4157d8: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x4157d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_4157dc:
    // 0x4157dc: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x4157dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_4157e0:
    // 0x4157e0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x4157e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_4157e4:
    // 0x4157e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4157e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4157e8:
    // 0x4157e8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x4157e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_4157ec:
    // 0x4157ec: 0x27a70064  addiu       $a3, $sp, 0x64
    ctx->pc = 0x4157ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_4157f0:
    // 0x4157f0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x4157f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_4157f4:
    // 0x4157f4: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x4157f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_4157f8:
    // 0x4157f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4157f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4157fc:
    // 0x4157fc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4157fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_415800:
    // 0x415800: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x415800u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_415804:
    // 0x415804: 0xc103322  jal         func_40CC88
label_415808:
    if (ctx->pc == 0x415808u) {
        ctx->pc = 0x415808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415804u;
        // 0x415808: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x41580Cu;
        goto label_41580c;
    }
    ctx->pc = 0x415804u;
    SET_GPR_U32(ctx, 31, 0x41580Cu);
    ctx->pc = 0x415808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415804u;
    // 0x415808: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x415804u, 0x41580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41580Cu;
label_41580c:
    // 0x41580c: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_415810:
    if (ctx->pc == 0x415810u) {
        ctx->pc = 0x415810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41580Cu;
        // 0x415810: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415814u;
        goto label_415814;
    }
    ctx->pc = 0x41580Cu;
    {
        const bool branch_taken_0x41580c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41580Cu;
        // 0x415810: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41580c) {
            ctx->pc = 0x415A40u;
            goto label_415a40;
        }
    }
    ctx->pc = 0x415814u;
label_415814:
    // 0x415814: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x415814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_415818:
    // 0x415818: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x415818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_41581c:
    // 0x41581c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41581cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_415820:
    // 0x415820: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x415820u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_415824:
    // 0x415824: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
label_415828:
    if (ctx->pc == 0x415828u) {
        ctx->pc = 0x415828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415824u;
        // 0x415828: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41582Cu;
        goto label_41582c;
    }
    ctx->pc = 0x415824u;
    {
        const bool branch_taken_0x415824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x415828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415824u;
        // 0x415828: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415824) {
            ctx->pc = 0x415A1Cu;
            goto label_415a1c;
        }
    }
    ctx->pc = 0x41582Cu;
label_41582c:
    // 0x41582c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x41582cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_415830:
    // 0x415830: 0xc10480a  jal         func_412028
label_415834:
    if (ctx->pc == 0x415834u) {
        ctx->pc = 0x415834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415830u;
        // 0x415834: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415838u;
        goto label_415838;
    }
    ctx->pc = 0x415830u;
    SET_GPR_U32(ctx, 31, 0x415838u);
    ctx->pc = 0x415834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415830u;
    // 0x415834: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x415830u, 0x415838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415838u;
label_415838:
    // 0x415838: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x415838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41583c:
    // 0x41583c: 0x144300a6  bne         $v0, $v1, . + 4 + (0xA6 << 2)
label_415840:
    if (ctx->pc == 0x415840u) {
        ctx->pc = 0x415840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41583Cu;
        // 0x415840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415844u;
        goto label_415844;
    }
    ctx->pc = 0x41583Cu;
    {
        const bool branch_taken_0x41583c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x415840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41583Cu;
        // 0x415840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41583c) {
            ctx->pc = 0x415AD8u;
            goto label_415ad8;
        }
    }
    ctx->pc = 0x415844u;
label_415844:
    // 0x415844: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x415844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_415848:
    // 0x415848: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x415848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_41584c:
    // 0x41584c: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x41584cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_415850:
    // 0x415850: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x415850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_415854:
    // 0x415854: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x415854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_415858:
    // 0x415858: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x415858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_41585c:
    // 0x41585c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x41585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_415860:
    // 0x415860: 0x34a5000e  ori         $a1, $a1, 0xE
    ctx->pc = 0x415860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14);
label_415864:
    // 0x415864: 0x40f809  jalr        $v0
label_415868:
    if (ctx->pc == 0x415868u) {
        ctx->pc = 0x415868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415864u;
        // 0x415868: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41586Cu;
        goto label_41586c;
    }
    ctx->pc = 0x415864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41586Cu);
        ctx->pc = 0x415868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415864u;
        // 0x415868: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415864u, 0x41586Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41586Cu;
label_41586c:
    // 0x41586c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_415870:
    if (ctx->pc == 0x415870u) {
        ctx->pc = 0x415870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41586Cu;
        // 0x415870: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415874u;
        goto label_415874;
    }
    ctx->pc = 0x41586Cu;
    {
        const bool branch_taken_0x41586c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41586Cu;
        // 0x415870: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41586c) {
            ctx->pc = 0x4158A0u;
            goto label_4158a0;
        }
    }
    ctx->pc = 0x415874u;
label_415874:
    // 0x415874: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x415874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_415878:
    // 0x415878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x415878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41587c:
    // 0x41587c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41587cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_415880:
    // 0x415880: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x415880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_415884:
    // 0x415884: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x415884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_415888:
    // 0x415888: 0xc1035f6  jal         func_40D7D8
label_41588c:
    if (ctx->pc == 0x41588Cu) {
        ctx->pc = 0x41588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415888u;
        // 0x41588c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x415890u;
        goto label_415890;
    }
    ctx->pc = 0x415888u;
    SET_GPR_U32(ctx, 31, 0x415890u);
    ctx->pc = 0x41588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415888u;
    // 0x41588c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x415888u, 0x415890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415890u;
label_415890:
    // 0x415890: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x415890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_415894:
    // 0x415894: 0x10000068  b           . + 4 + (0x68 << 2)
label_415898:
    if (ctx->pc == 0x415898u) {
        ctx->pc = 0x415898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415894u;
        // 0x415898: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41589Cu;
        goto label_41589c;
    }
    ctx->pc = 0x415894u;
    {
        const bool branch_taken_0x415894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415894u;
        // 0x415898: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415894) {
            ctx->pc = 0x415A38u;
            goto label_415a38;
        }
    }
    ctx->pc = 0x41589Cu;
label_41589c:
    // 0x41589c: 0x0  nop
    ctx->pc = 0x41589cu;
    // NOP
label_4158a0:
    // 0x4158a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x4158a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_4158a4:
    // 0x4158a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4158a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4158a8:
    // 0x4158a8: 0x1840006f  blez        $v0, . + 4 + (0x6F << 2)
label_4158ac:
    if (ctx->pc == 0x4158ACu) {
        ctx->pc = 0x4158ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4158A8u;
        // 0x4158ac: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4158B0u;
        goto label_4158b0;
    }
    ctx->pc = 0x4158A8u;
    {
        const bool branch_taken_0x4158a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4158ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4158A8u;
        // 0x4158ac: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4158a8) {
            ctx->pc = 0x415A68u;
            goto label_415a68;
        }
    }
    ctx->pc = 0x4158B0u;
label_4158b0:
    // 0x4158b0: 0x3c15fffd  lui         $s5, 0xFFFD
    ctx->pc = 0x4158b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65533 << 16));
label_4158b4:
    // 0x4158b4: 0x3c14fffd  lui         $s4, 0xFFFD
    ctx->pc = 0x4158b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65533 << 16));
label_4158b8:
    // 0x4158b8: 0xc79580ac  lwc1        $f21, -0x7F54($gp)
    ctx->pc = 0x4158b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4158bc:
    // 0x4158bc: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x4158bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
label_4158c0:
    // 0x4158c0: 0x3694fffc  ori         $s4, $s4, 0xFFFC
    ctx->pc = 0x4158c0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65532);
label_4158c4:
    // 0x4158c4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4158c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4158c8:
    // 0x4158c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4158c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4158cc:
    // 0x4158cc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4158ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4158d0:
    // 0x4158d0: 0xc10480a  jal         func_412028
label_4158d4:
    if (ctx->pc == 0x4158D4u) {
        ctx->pc = 0x4158D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4158D0u;
        // 0x4158d4: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4158D8u;
        goto label_4158d8;
    }
    ctx->pc = 0x4158D0u;
    SET_GPR_U32(ctx, 31, 0x4158D8u);
    ctx->pc = 0x4158D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4158D0u;
    // 0x4158d4: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x4158D0u, 0x4158D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4158D8u;
label_4158d8:
    // 0x4158d8: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x4158d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_4158dc:
    // 0x4158dc: 0x1443005d  bne         $v0, $v1, . + 4 + (0x5D << 2)
label_4158e0:
    if (ctx->pc == 0x4158E0u) {
        ctx->pc = 0x4158E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4158DCu;
        // 0x4158e0: 0x27c3e880  addiu       $v1, $fp, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4158E4u;
        goto label_4158e4;
    }
    ctx->pc = 0x4158DCu;
    {
        const bool branch_taken_0x4158dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4158E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4158DCu;
        // 0x4158e0: 0x27c3e880  addiu       $v1, $fp, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4158dc) {
            ctx->pc = 0x415A54u;
            goto label_415a54;
        }
    }
    ctx->pc = 0x4158E4u;
label_4158e4:
    // 0x4158e4: 0xc1067b0  jal         func_419EC0
label_4158e8:
    if (ctx->pc == 0x4158E8u) {
        ctx->pc = 0x4158ECu;
        goto label_4158ec;
    }
    ctx->pc = 0x4158E4u;
    SET_GPR_U32(ctx, 31, 0x4158ECu);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x4158E4u, 0x4158ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4158ECu;
label_4158ec:
    // 0x4158ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4158ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4158f0:
    // 0x4158f0: 0x12200057  beqz        $s1, . + 4 + (0x57 << 2)
label_4158f4:
    if (ctx->pc == 0x4158F4u) {
        ctx->pc = 0x4158F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4158F0u;
        // 0x4158f4: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4158F8u;
        goto label_4158f8;
    }
    ctx->pc = 0x4158F0u;
    {
        const bool branch_taken_0x4158f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4158F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4158F0u;
        // 0x4158f4: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4158f0) {
            ctx->pc = 0x415A50u;
            goto label_415a50;
        }
    }
    ctx->pc = 0x4158F8u;
label_4158f8:
    // 0x4158f8: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x4158f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4158fc:
    // 0x4158fc: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x4158fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_415900:
    // 0x415900: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x415900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_415904:
    // 0x415904: 0xb2240017  sdl         $a0, 0x17($s1)
    ctx->pc = 0x415904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_415908:
    // 0x415908: 0xb6240010  sdr         $a0, 0x10($s1)
    ctx->pc = 0x415908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_41590c:
    // 0x41590c: 0xae250018  sw          $a1, 0x18($s1)
    ctx->pc = 0x41590cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 5));
label_415910:
    // 0x415910: 0x6ba30023  ldl         $v1, 0x23($sp)
    ctx->pc = 0x415910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_415914:
    // 0x415914: 0x6fa3001c  ldr         $v1, 0x1C($sp)
    ctx->pc = 0x415914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_415918:
    // 0x415918: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x415918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_41591c:
    // 0x41591c: 0xb2230027  sdl         $v1, 0x27($s1)
    ctx->pc = 0x41591cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_415920:
    // 0x415920: 0xb6230020  sdr         $v1, 0x20($s1)
    ctx->pc = 0x415920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_415924:
    // 0x415924: 0xae240028  sw          $a0, 0x28($s1)
    ctx->pc = 0x415924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
label_415928:
    // 0x415928: 0x6ba2002f  ldl         $v0, 0x2F($sp)
    ctx->pc = 0x415928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_41592c:
    // 0x41592c: 0x6fa20028  ldr         $v0, 0x28($sp)
    ctx->pc = 0x41592cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_415930:
    // 0x415930: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x415930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_415934:
    // 0x415934: 0xb2220037  sdl         $v0, 0x37($s1)
    ctx->pc = 0x415934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_415938:
    // 0x415938: 0xb6220030  sdr         $v0, 0x30($s1)
    ctx->pc = 0x415938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_41593c:
    // 0x41593c: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x41593cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
label_415940:
    // 0x415940: 0xc794803c  lwc1        $f20, -0x7FC4($gp)
    ctx->pc = 0x415940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_415944:
    // 0x415944: 0x6ba2003b  ldl         $v0, 0x3B($sp)
    ctx->pc = 0x415944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_415948:
    // 0x415948: 0x6fa20034  ldr         $v0, 0x34($sp)
    ctx->pc = 0x415948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_41594c:
    // 0x41594c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x41594cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_415950:
    // 0x415950: 0xb2220047  sdl         $v0, 0x47($s1)
    ctx->pc = 0x415950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_415954:
    // 0x415954: 0xb6220040  sdr         $v0, 0x40($s1)
    ctx->pc = 0x415954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_415958:
    // 0x415958: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x415958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_41595c:
    // 0x41595c: 0xc103eda  jal         func_40FB68
label_415960:
    if (ctx->pc == 0x415960u) {
        ctx->pc = 0x415960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41595Cu;
        // 0x415960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415964u;
        goto label_415964;
    }
    ctx->pc = 0x41595Cu;
    SET_GPR_U32(ctx, 31, 0x415964u);
    ctx->pc = 0x415960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41595Cu;
    // 0x415960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FB68u, 0x41595Cu, 0x415964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415964u;
label_415964:
    // 0x415964: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x415964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_415968:
    // 0x415968: 0x0  nop
    ctx->pc = 0x415968u;
    // NOP
label_41596c:
    // 0x41596c: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_415970:
    if (ctx->pc == 0x415970u) {
        ctx->pc = 0x415970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41596Cu;
        // 0x415970: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415974u;
        goto label_415974;
    }
    ctx->pc = 0x41596Cu;
    {
        const bool branch_taken_0x41596c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41596c) {
            ctx->pc = 0x415970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41596Cu;
            // 0x415970: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4159ACu;
            goto label_4159ac;
        }
    }
    ctx->pc = 0x415974u;
label_415974:
    // 0x415974: 0xc103f04  jal         func_40FC10
label_415978:
    if (ctx->pc == 0x415978u) {
        ctx->pc = 0x415978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415974u;
        // 0x415978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41597Cu;
        goto label_41597c;
    }
    ctx->pc = 0x415974u;
    SET_GPR_U32(ctx, 31, 0x41597Cu);
    ctx->pc = 0x415978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415974u;
    // 0x415978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FC10u, 0x415974u, 0x41597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41597Cu;
label_41597c:
    // 0x41597c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x41597cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_415980:
    // 0x415980: 0x0  nop
    ctx->pc = 0x415980u;
    // NOP
label_415984:
    // 0x415984: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_415988:
    if (ctx->pc == 0x415988u) {
        ctx->pc = 0x415988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415984u;
        // 0x415988: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41598Cu;
        goto label_41598c;
    }
    ctx->pc = 0x415984u;
    {
        const bool branch_taken_0x415984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x415984) {
            ctx->pc = 0x415988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415984u;
            // 0x415988: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4159ACu;
            goto label_4159ac;
        }
    }
    ctx->pc = 0x41598Cu;
label_41598c:
    // 0x41598c: 0xc103eba  jal         func_40FAE8
label_415990:
    if (ctx->pc == 0x415990u) {
        ctx->pc = 0x415990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41598Cu;
        // 0x415990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415994u;
        goto label_415994;
    }
    ctx->pc = 0x41598Cu;
    SET_GPR_U32(ctx, 31, 0x415994u);
    ctx->pc = 0x415990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41598Cu;
    // 0x415990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAE8u, 0x41598Cu, 0x415994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415994u;
label_415994:
    // 0x415994: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x415994u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_415998:
    // 0x415998: 0x0  nop
    ctx->pc = 0x415998u;
    // NOP
label_41599c:
    // 0x41599c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_4159a0:
    if (ctx->pc == 0x4159A0u) {
        ctx->pc = 0x4159A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41599Cu;
        // 0x4159a0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4159A4u;
        goto label_4159a4;
    }
    ctx->pc = 0x41599Cu;
    {
        const bool branch_taken_0x41599c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4159A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41599Cu;
        // 0x4159a0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41599c) {
            ctx->pc = 0x4159ACu;
            goto label_4159ac;
        }
    }
    ctx->pc = 0x4159A4u;
label_4159a4:
    // 0x4159a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_4159a8:
    if (ctx->pc == 0x4159A8u) {
        ctx->pc = 0x4159A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159A4u;
        // 0x4159a8: 0x551024  and         $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4159ACu;
        goto label_4159ac;
    }
    ctx->pc = 0x4159A4u;
    {
        const bool branch_taken_0x4159a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4159A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159A4u;
        // 0x4159a8: 0x551024  and         $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4159a4) {
            ctx->pc = 0x4159B0u;
            goto label_4159b0;
        }
    }
    ctx->pc = 0x4159ACu;
label_4159ac:
    // 0x4159ac: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4159acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_4159b0:
    // 0x4159b0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4159b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4159b4:
    // 0x4159b4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4159b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4159b8:
    // 0x4159b8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4159b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4159bc:
    // 0x4159bc: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x4159bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_4159c0:
    // 0x4159c0: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
label_4159c4:
    if (ctx->pc == 0x4159C4u) {
        ctx->pc = 0x4159C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159C0u;
        // 0x4159c4: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4159C8u;
        goto label_4159c8;
    }
    ctx->pc = 0x4159C0u;
    {
        const bool branch_taken_0x4159c0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4159C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159C0u;
        // 0x4159c4: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4159c0) {
            ctx->pc = 0x4159FCu;
            goto label_4159fc;
        }
    }
    ctx->pc = 0x4159C8u;
label_4159c8:
    // 0x4159c8: 0x8f82ad74  lw          $v0, -0x528C($gp)
    ctx->pc = 0x4159c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946164)));
label_4159cc:
    // 0x4159cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4159d0:
    if (ctx->pc == 0x4159D0u) {
        ctx->pc = 0x4159D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159CCu;
        // 0x4159d0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4159D4u;
        goto label_4159d4;
    }
    ctx->pc = 0x4159CCu;
    {
        const bool branch_taken_0x4159cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4159D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159CCu;
        // 0x4159d0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4159cc) {
            ctx->pc = 0x4159ECu;
            goto label_4159ec;
        }
    }
    ctx->pc = 0x4159D4u;
label_4159d4:
    // 0x4159d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4159d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4159d8:
    // 0x4159d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4159d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4159dc:
    // 0x4159dc: 0xc10671c  jal         func_419C70
label_4159e0:
    if (ctx->pc == 0x4159E0u) {
        ctx->pc = 0x4159E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159DCu;
        // 0x4159e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4159E4u;
        goto label_4159e4;
    }
    ctx->pc = 0x4159DCu;
    SET_GPR_U32(ctx, 31, 0x4159E4u);
    ctx->pc = 0x4159E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4159DCu;
    // 0x4159e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C70u, 0x4159DCu, 0x4159E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4159E4u;
label_4159e4:
    // 0x4159e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_4159e8:
    if (ctx->pc == 0x4159E8u) {
        ctx->pc = 0x4159E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159E4u;
        // 0x4159e8: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4159ECu;
        goto label_4159ec;
    }
    ctx->pc = 0x4159E4u;
    {
        const bool branch_taken_0x4159e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4159E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159E4u;
        // 0x4159e8: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4159e4) {
            ctx->pc = 0x415A00u;
            goto label_415a00;
        }
    }
    ctx->pc = 0x4159ECu;
label_4159ec:
    // 0x4159ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4159ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4159f0:
    // 0x4159f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4159f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4159f4:
    // 0x4159f4: 0xc106760  jal         func_419D80
label_4159f8:
    if (ctx->pc == 0x4159F8u) {
        ctx->pc = 0x4159F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159F4u;
        // 0x4159f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4159FCu;
        goto label_4159fc;
    }
    ctx->pc = 0x4159F4u;
    SET_GPR_U32(ctx, 31, 0x4159FCu);
    ctx->pc = 0x4159F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4159F4u;
    // 0x4159f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419D80u, 0x4159F4u, 0x4159FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4159FCu;
label_4159fc:
    // 0x4159fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x4159fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_415a00:
    // 0x415a00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x415a00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_415a04:
    // 0x415a04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x415a04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_415a08:
    // 0x415a08: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x415a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_415a0c:
    // 0x415a0c: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_415a10:
    if (ctx->pc == 0x415A10u) {
        ctx->pc = 0x415A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A0Cu;
        // 0x415a10: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415A14u;
        goto label_415a14;
    }
    ctx->pc = 0x415A0Cu;
    {
        const bool branch_taken_0x415a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A0Cu;
        // 0x415a10: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415a0c) {
            ctx->pc = 0x4158C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4158c8;
        }
    }
    ctx->pc = 0x415A14u;
label_415a14:
    // 0x415a14: 0x10000014  b           . + 4 + (0x14 << 2)
label_415a18:
    if (ctx->pc == 0x415A18u) {
        ctx->pc = 0x415A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A14u;
        // 0x415a18: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415A1Cu;
        goto label_415a1c;
    }
    ctx->pc = 0x415A14u;
    {
        const bool branch_taken_0x415a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A14u;
        // 0x415a18: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415a14) {
            ctx->pc = 0x415A68u;
            goto label_415a68;
        }
    }
    ctx->pc = 0x415A1Cu;
label_415a1c:
    // 0x415a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x415a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_415a20:
    // 0x415a20: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x415a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_415a24:
    // 0x415a24: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x415a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_415a28:
    // 0x415a28: 0xc1035f6  jal         func_40D7D8
label_415a2c:
    if (ctx->pc == 0x415A2Cu) {
        ctx->pc = 0x415A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A28u;
        // 0x415a2c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x415A30u;
        goto label_415a30;
    }
    ctx->pc = 0x415A28u;
    SET_GPR_U32(ctx, 31, 0x415A30u);
    ctx->pc = 0x415A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415A28u;
    // 0x415a2c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x415A28u, 0x415A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415A30u;
label_415a30:
    // 0x415a30: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x415a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_415a34:
    // 0x415a34: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x415a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_415a38:
    // 0x415a38: 0xc103628  jal         func_40D8A0
label_415a3c:
    if (ctx->pc == 0x415A3Cu) {
        ctx->pc = 0x415A40u;
        goto label_415a40;
    }
    ctx->pc = 0x415A38u;
    SET_GPR_U32(ctx, 31, 0x415A40u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x415A38u, 0x415A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415A40u;
label_415a40:
    // 0x415a40: 0x10000025  b           . + 4 + (0x25 << 2)
label_415a44:
    if (ctx->pc == 0x415A44u) {
        ctx->pc = 0x415A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A40u;
        // 0x415a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415A48u;
        goto label_415a48;
    }
    ctx->pc = 0x415A40u;
    {
        const bool branch_taken_0x415a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A40u;
        // 0x415a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415a40) {
            ctx->pc = 0x415AD8u;
            goto label_415ad8;
        }
    }
    ctx->pc = 0x415A48u;
label_415a48:
    // 0x415a48: 0xc106698  jal         func_419A60
label_415a4c:
    if (ctx->pc == 0x415A4Cu) {
        ctx->pc = 0x415A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A48u;
        // 0x415a4c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415A50u;
        goto label_415a50;
    }
    ctx->pc = 0x415A48u;
    SET_GPR_U32(ctx, 31, 0x415A50u);
    ctx->pc = 0x415A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415A48u;
    // 0x415a4c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419A60u, 0x415A48u, 0x415A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415A50u;
label_415a50:
    // 0x415a50: 0x27c3e880  addiu       $v1, $fp, -0x1780
    ctx->pc = 0x415a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_415a54:
    // 0x415a54: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x415a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_415a58:
    // 0x415a58: 0x40f809  jalr        $v0
label_415a5c:
    if (ctx->pc == 0x415A5Cu) {
        ctx->pc = 0x415A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A58u;
        // 0x415a5c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415A60u;
        goto label_415a60;
    }
    ctx->pc = 0x415A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x415A60u);
        ctx->pc = 0x415A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A58u;
        // 0x415a5c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415A58u, 0x415A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x415A60u;
label_415a60:
    // 0x415a60: 0x1000001d  b           . + 4 + (0x1D << 2)
label_415a64:
    if (ctx->pc == 0x415A64u) {
        ctx->pc = 0x415A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A60u;
        // 0x415a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415A68u;
        goto label_415a68;
    }
    ctx->pc = 0x415A60u;
    {
        const bool branch_taken_0x415a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A60u;
        // 0x415a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415a60) {
            ctx->pc = 0x415AD8u;
            goto label_415ad8;
        }
    }
    ctx->pc = 0x415A68u;
label_415a68:
    // 0x415a68: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_415a6c:
    if (ctx->pc == 0x415A6Cu) {
        ctx->pc = 0x415A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A68u;
        // 0x415a6c: 0x3c15005e  lui         $s5, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415A70u;
        goto label_415a70;
    }
    ctx->pc = 0x415A68u;
    {
        const bool branch_taken_0x415a68 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x415A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A68u;
        // 0x415a6c: 0x3c15005e  lui         $s5, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415a68) {
            ctx->pc = 0x415AD4u;
            goto label_415ad4;
        }
    }
    ctx->pc = 0x415A70u;
label_415a70:
    // 0x415a70: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x415a70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_415a74:
    // 0x415a74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x415a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415a78:
    // 0x415a78: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x415a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_415a7c:
    // 0x415a7c: 0x26a4c9c8  addiu       $a0, $s5, -0x3638
    ctx->pc = 0x415a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953416));
label_415a80:
    // 0x415a80: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x415a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_415a84:
    // 0x415a84: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x415a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_415a88:
    // 0x415a88: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x415a88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_415a8c:
    // 0x415a8c: 0xc1049e2  jal         func_412788
label_415a90:
    if (ctx->pc == 0x415A90u) {
        ctx->pc = 0x415A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A8Cu;
        // 0x415a90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415A94u;
        goto label_415a94;
    }
    ctx->pc = 0x415A8Cu;
    SET_GPR_U32(ctx, 31, 0x415A94u);
    ctx->pc = 0x415A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415A8Cu;
    // 0x415a90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412788u, 0x415A8Cu, 0x415A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415A94u;
label_415a94:
    // 0x415a94: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
label_415a98:
    if (ctx->pc == 0x415A98u) {
        ctx->pc = 0x415A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A94u;
        // 0x415a98: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415A9Cu;
        goto label_415a9c;
    }
    ctx->pc = 0x415A94u;
    {
        const bool branch_taken_0x415a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x415a94) {
            ctx->pc = 0x415A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415A94u;
            // 0x415a98: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415a48;
        }
    }
    ctx->pc = 0x415A9Cu;
label_415a9c:
    // 0x415a9c: 0xc106782  jal         func_419E08
label_415aa0:
    if (ctx->pc == 0x415AA0u) {
        ctx->pc = 0x415AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A9Cu;
        // 0x415aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415AA4u;
        goto label_415aa4;
    }
    ctx->pc = 0x415A9Cu;
    SET_GPR_U32(ctx, 31, 0x415AA4u);
    ctx->pc = 0x415AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415A9Cu;
    // 0x415aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E08u, 0x415A9Cu, 0x415AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415AA4u;
label_415aa4:
    // 0x415aa4: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_415aa8:
    if (ctx->pc == 0x415AA8u) {
        ctx->pc = 0x415AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415AA4u;
        // 0x415aa8: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415AACu;
        goto label_415aac;
    }
    ctx->pc = 0x415AA4u;
    {
        const bool branch_taken_0x415aa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x415AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415AA4u;
        // 0x415aa8: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415aa4) {
            ctx->pc = 0x415AC4u;
            goto label_415ac4;
        }
    }
    ctx->pc = 0x415AACu;
label_415aac:
    // 0x415aac: 0x8f82ad74  lw          $v0, -0x528C($gp)
    ctx->pc = 0x415aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946164)));
label_415ab0:
    // 0x415ab0: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
label_415ab4:
    if (ctx->pc == 0x415AB4u) {
        ctx->pc = 0x415AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415AB0u;
        // 0x415ab4: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415AB8u;
        goto label_415ab8;
    }
    ctx->pc = 0x415AB0u;
    {
        const bool branch_taken_0x415ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x415AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415AB0u;
        // 0x415ab4: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415ab0) {
            ctx->pc = 0x415AC4u;
            goto label_415ac4;
        }
    }
    ctx->pc = 0x415AB8u;
label_415ab8:
    // 0x415ab8: 0xc106794  jal         func_419E50
label_415abc:
    if (ctx->pc == 0x415ABCu) {
        ctx->pc = 0x415ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415AB8u;
        // 0x415abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415AC0u;
        goto label_415ac0;
    }
    ctx->pc = 0x415AB8u;
    SET_GPR_U32(ctx, 31, 0x415AC0u);
    ctx->pc = 0x415ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415AB8u;
    // 0x415abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x415AB8u, 0x415AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415AC0u;
label_415ac0:
    // 0x415ac0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x415ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_415ac4:
    // 0x415ac4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x415ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_415ac8:
    // 0x415ac8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x415ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_415acc:
    // 0x415acc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_415ad0:
    if (ctx->pc == 0x415AD0u) {
        ctx->pc = 0x415AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415ACCu;
        // 0x415ad0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415AD4u;
        goto label_415ad4;
    }
    ctx->pc = 0x415ACCu;
    {
        const bool branch_taken_0x415acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415ACCu;
        // 0x415ad0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415acc) {
            ctx->pc = 0x415A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415a78;
        }
    }
    ctx->pc = 0x415AD4u;
label_415ad4:
    // 0x415ad4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x415ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_415ad8:
    // 0x415ad8: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x415ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_415adc:
    // 0x415adc: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x415adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_415ae0:
    // 0x415ae0: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x415ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_415ae4:
    // 0x415ae4: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x415ae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_415ae8:
    // 0x415ae8: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x415ae8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_415aec:
    // 0x415aec: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x415aecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_415af0:
    // 0x415af0: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x415af0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_415af4:
    // 0x415af4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x415af4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_415af8:
    // 0x415af8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x415af8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_415afc:
    // 0x415afc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x415afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_415b00:
    // 0x415b00: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x415b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_415b04:
    // 0x415b04: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x415b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_415b08:
    // 0x415b08: 0x3e00008  jr          $ra
label_415b0c:
    if (ctx->pc == 0x415B0Cu) {
        ctx->pc = 0x415B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415B08u;
        // 0x415b0c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415B10u;
        goto label_415b10;
    }
    ctx->pc = 0x415B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415B08u;
        // 0x415b0c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415B10u;
label_415b10:
    // 0x415b10: 0x3e00008  jr          $ra
label_415b14:
    if (ctx->pc == 0x415B14u) {
        ctx->pc = 0x415B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415B10u;
        // 0x415b14: 0xaf84ad74  sw          $a0, -0x528C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946164), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415B18u;
        goto label_fallthrough_0x415b10;
    }
    ctx->pc = 0x415B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415B10u;
        // 0x415b14: 0xaf84ad74  sw          $a0, -0x528C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946164), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x415b10:
    ctx->pc = 0x415B18u;
}
