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

// Function: sub_00474750
// Address: 0x474750 - 0x474c00
void sub_00474750_0x474750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00474750_0x474750");
#endif

    switch (ctx->pc) {
        case 0x474750u: goto label_474750;
        case 0x474754u: goto label_474754;
        case 0x474758u: goto label_474758;
        case 0x47475cu: goto label_47475c;
        case 0x474760u: goto label_474760;
        case 0x474764u: goto label_474764;
        case 0x474768u: goto label_474768;
        case 0x47476cu: goto label_47476c;
        case 0x474770u: goto label_474770;
        case 0x474774u: goto label_474774;
        case 0x474778u: goto label_474778;
        case 0x47477cu: goto label_47477c;
        case 0x474780u: goto label_474780;
        case 0x474784u: goto label_474784;
        case 0x474788u: goto label_474788;
        case 0x47478cu: goto label_47478c;
        case 0x474790u: goto label_474790;
        case 0x474794u: goto label_474794;
        case 0x474798u: goto label_474798;
        case 0x47479cu: goto label_47479c;
        case 0x4747a0u: goto label_4747a0;
        case 0x4747a4u: goto label_4747a4;
        case 0x4747a8u: goto label_4747a8;
        case 0x4747acu: goto label_4747ac;
        case 0x4747b0u: goto label_4747b0;
        case 0x4747b4u: goto label_4747b4;
        case 0x4747b8u: goto label_4747b8;
        case 0x4747bcu: goto label_4747bc;
        case 0x4747c0u: goto label_4747c0;
        case 0x4747c4u: goto label_4747c4;
        case 0x4747c8u: goto label_4747c8;
        case 0x4747ccu: goto label_4747cc;
        case 0x4747d0u: goto label_4747d0;
        case 0x4747d4u: goto label_4747d4;
        case 0x4747d8u: goto label_4747d8;
        case 0x4747dcu: goto label_4747dc;
        case 0x4747e0u: goto label_4747e0;
        case 0x4747e4u: goto label_4747e4;
        case 0x4747e8u: goto label_4747e8;
        case 0x4747ecu: goto label_4747ec;
        case 0x4747f0u: goto label_4747f0;
        case 0x4747f4u: goto label_4747f4;
        case 0x4747f8u: goto label_4747f8;
        case 0x4747fcu: goto label_4747fc;
        case 0x474800u: goto label_474800;
        case 0x474804u: goto label_474804;
        case 0x474808u: goto label_474808;
        case 0x47480cu: goto label_47480c;
        case 0x474810u: goto label_474810;
        case 0x474814u: goto label_474814;
        case 0x474818u: goto label_474818;
        case 0x47481cu: goto label_47481c;
        case 0x474820u: goto label_474820;
        case 0x474824u: goto label_474824;
        case 0x474828u: goto label_474828;
        case 0x47482cu: goto label_47482c;
        case 0x474830u: goto label_474830;
        case 0x474834u: goto label_474834;
        case 0x474838u: goto label_474838;
        case 0x47483cu: goto label_47483c;
        case 0x474840u: goto label_474840;
        case 0x474844u: goto label_474844;
        case 0x474848u: goto label_474848;
        case 0x47484cu: goto label_47484c;
        case 0x474850u: goto label_474850;
        case 0x474854u: goto label_474854;
        case 0x474858u: goto label_474858;
        case 0x47485cu: goto label_47485c;
        case 0x474860u: goto label_474860;
        case 0x474864u: goto label_474864;
        case 0x474868u: goto label_474868;
        case 0x47486cu: goto label_47486c;
        case 0x474870u: goto label_474870;
        case 0x474874u: goto label_474874;
        case 0x474878u: goto label_474878;
        case 0x47487cu: goto label_47487c;
        case 0x474880u: goto label_474880;
        case 0x474884u: goto label_474884;
        case 0x474888u: goto label_474888;
        case 0x47488cu: goto label_47488c;
        case 0x474890u: goto label_474890;
        case 0x474894u: goto label_474894;
        case 0x474898u: goto label_474898;
        case 0x47489cu: goto label_47489c;
        case 0x4748a0u: goto label_4748a0;
        case 0x4748a4u: goto label_4748a4;
        case 0x4748a8u: goto label_4748a8;
        case 0x4748acu: goto label_4748ac;
        case 0x4748b0u: goto label_4748b0;
        case 0x4748b4u: goto label_4748b4;
        case 0x4748b8u: goto label_4748b8;
        case 0x4748bcu: goto label_4748bc;
        case 0x4748c0u: goto label_4748c0;
        case 0x4748c4u: goto label_4748c4;
        case 0x4748c8u: goto label_4748c8;
        case 0x4748ccu: goto label_4748cc;
        case 0x4748d0u: goto label_4748d0;
        case 0x4748d4u: goto label_4748d4;
        case 0x4748d8u: goto label_4748d8;
        case 0x4748dcu: goto label_4748dc;
        case 0x4748e0u: goto label_4748e0;
        case 0x4748e4u: goto label_4748e4;
        case 0x4748e8u: goto label_4748e8;
        case 0x4748ecu: goto label_4748ec;
        case 0x4748f0u: goto label_4748f0;
        case 0x4748f4u: goto label_4748f4;
        case 0x4748f8u: goto label_4748f8;
        case 0x4748fcu: goto label_4748fc;
        case 0x474900u: goto label_474900;
        case 0x474904u: goto label_474904;
        case 0x474908u: goto label_474908;
        case 0x47490cu: goto label_47490c;
        case 0x474910u: goto label_474910;
        case 0x474914u: goto label_474914;
        case 0x474918u: goto label_474918;
        case 0x47491cu: goto label_47491c;
        case 0x474920u: goto label_474920;
        case 0x474924u: goto label_474924;
        case 0x474928u: goto label_474928;
        case 0x47492cu: goto label_47492c;
        case 0x474930u: goto label_474930;
        case 0x474934u: goto label_474934;
        case 0x474938u: goto label_474938;
        case 0x47493cu: goto label_47493c;
        case 0x474940u: goto label_474940;
        case 0x474944u: goto label_474944;
        case 0x474948u: goto label_474948;
        case 0x47494cu: goto label_47494c;
        case 0x474950u: goto label_474950;
        case 0x474954u: goto label_474954;
        case 0x474958u: goto label_474958;
        case 0x47495cu: goto label_47495c;
        case 0x474960u: goto label_474960;
        case 0x474964u: goto label_474964;
        case 0x474968u: goto label_474968;
        case 0x47496cu: goto label_47496c;
        case 0x474970u: goto label_474970;
        case 0x474974u: goto label_474974;
        case 0x474978u: goto label_474978;
        case 0x47497cu: goto label_47497c;
        case 0x474980u: goto label_474980;
        case 0x474984u: goto label_474984;
        case 0x474988u: goto label_474988;
        case 0x47498cu: goto label_47498c;
        case 0x474990u: goto label_474990;
        case 0x474994u: goto label_474994;
        case 0x474998u: goto label_474998;
        case 0x47499cu: goto label_47499c;
        case 0x4749a0u: goto label_4749a0;
        case 0x4749a4u: goto label_4749a4;
        case 0x4749a8u: goto label_4749a8;
        case 0x4749acu: goto label_4749ac;
        case 0x4749b0u: goto label_4749b0;
        case 0x4749b4u: goto label_4749b4;
        case 0x4749b8u: goto label_4749b8;
        case 0x4749bcu: goto label_4749bc;
        case 0x4749c0u: goto label_4749c0;
        case 0x4749c4u: goto label_4749c4;
        case 0x4749c8u: goto label_4749c8;
        case 0x4749ccu: goto label_4749cc;
        case 0x4749d0u: goto label_4749d0;
        case 0x4749d4u: goto label_4749d4;
        case 0x4749d8u: goto label_4749d8;
        case 0x4749dcu: goto label_4749dc;
        case 0x4749e0u: goto label_4749e0;
        case 0x4749e4u: goto label_4749e4;
        case 0x4749e8u: goto label_4749e8;
        case 0x4749ecu: goto label_4749ec;
        case 0x4749f0u: goto label_4749f0;
        case 0x4749f4u: goto label_4749f4;
        case 0x4749f8u: goto label_4749f8;
        case 0x4749fcu: goto label_4749fc;
        case 0x474a00u: goto label_474a00;
        case 0x474a04u: goto label_474a04;
        case 0x474a08u: goto label_474a08;
        case 0x474a0cu: goto label_474a0c;
        case 0x474a10u: goto label_474a10;
        case 0x474a14u: goto label_474a14;
        case 0x474a18u: goto label_474a18;
        case 0x474a1cu: goto label_474a1c;
        case 0x474a20u: goto label_474a20;
        case 0x474a24u: goto label_474a24;
        case 0x474a28u: goto label_474a28;
        case 0x474a2cu: goto label_474a2c;
        case 0x474a30u: goto label_474a30;
        case 0x474a34u: goto label_474a34;
        case 0x474a38u: goto label_474a38;
        case 0x474a3cu: goto label_474a3c;
        case 0x474a40u: goto label_474a40;
        case 0x474a44u: goto label_474a44;
        case 0x474a48u: goto label_474a48;
        case 0x474a4cu: goto label_474a4c;
        case 0x474a50u: goto label_474a50;
        case 0x474a54u: goto label_474a54;
        case 0x474a58u: goto label_474a58;
        case 0x474a5cu: goto label_474a5c;
        case 0x474a60u: goto label_474a60;
        case 0x474a64u: goto label_474a64;
        case 0x474a68u: goto label_474a68;
        case 0x474a6cu: goto label_474a6c;
        case 0x474a70u: goto label_474a70;
        case 0x474a74u: goto label_474a74;
        case 0x474a78u: goto label_474a78;
        case 0x474a7cu: goto label_474a7c;
        case 0x474a80u: goto label_474a80;
        case 0x474a84u: goto label_474a84;
        case 0x474a88u: goto label_474a88;
        case 0x474a8cu: goto label_474a8c;
        case 0x474a90u: goto label_474a90;
        case 0x474a94u: goto label_474a94;
        case 0x474a98u: goto label_474a98;
        case 0x474a9cu: goto label_474a9c;
        case 0x474aa0u: goto label_474aa0;
        case 0x474aa4u: goto label_474aa4;
        case 0x474aa8u: goto label_474aa8;
        case 0x474aacu: goto label_474aac;
        case 0x474ab0u: goto label_474ab0;
        case 0x474ab4u: goto label_474ab4;
        case 0x474ab8u: goto label_474ab8;
        case 0x474abcu: goto label_474abc;
        case 0x474ac0u: goto label_474ac0;
        case 0x474ac4u: goto label_474ac4;
        case 0x474ac8u: goto label_474ac8;
        case 0x474accu: goto label_474acc;
        case 0x474ad0u: goto label_474ad0;
        case 0x474ad4u: goto label_474ad4;
        case 0x474ad8u: goto label_474ad8;
        case 0x474adcu: goto label_474adc;
        case 0x474ae0u: goto label_474ae0;
        case 0x474ae4u: goto label_474ae4;
        case 0x474ae8u: goto label_474ae8;
        case 0x474aecu: goto label_474aec;
        case 0x474af0u: goto label_474af0;
        case 0x474af4u: goto label_474af4;
        case 0x474af8u: goto label_474af8;
        case 0x474afcu: goto label_474afc;
        case 0x474b00u: goto label_474b00;
        case 0x474b04u: goto label_474b04;
        case 0x474b08u: goto label_474b08;
        case 0x474b0cu: goto label_474b0c;
        case 0x474b10u: goto label_474b10;
        case 0x474b14u: goto label_474b14;
        case 0x474b18u: goto label_474b18;
        case 0x474b1cu: goto label_474b1c;
        case 0x474b20u: goto label_474b20;
        case 0x474b24u: goto label_474b24;
        case 0x474b28u: goto label_474b28;
        case 0x474b2cu: goto label_474b2c;
        case 0x474b30u: goto label_474b30;
        case 0x474b34u: goto label_474b34;
        case 0x474b38u: goto label_474b38;
        case 0x474b3cu: goto label_474b3c;
        case 0x474b40u: goto label_474b40;
        case 0x474b44u: goto label_474b44;
        case 0x474b48u: goto label_474b48;
        case 0x474b4cu: goto label_474b4c;
        case 0x474b50u: goto label_474b50;
        case 0x474b54u: goto label_474b54;
        case 0x474b58u: goto label_474b58;
        case 0x474b5cu: goto label_474b5c;
        case 0x474b60u: goto label_474b60;
        case 0x474b64u: goto label_474b64;
        case 0x474b68u: goto label_474b68;
        case 0x474b6cu: goto label_474b6c;
        case 0x474b70u: goto label_474b70;
        case 0x474b74u: goto label_474b74;
        case 0x474b78u: goto label_474b78;
        case 0x474b7cu: goto label_474b7c;
        case 0x474b80u: goto label_474b80;
        case 0x474b84u: goto label_474b84;
        case 0x474b88u: goto label_474b88;
        case 0x474b8cu: goto label_474b8c;
        case 0x474b90u: goto label_474b90;
        case 0x474b94u: goto label_474b94;
        case 0x474b98u: goto label_474b98;
        case 0x474b9cu: goto label_474b9c;
        case 0x474ba0u: goto label_474ba0;
        case 0x474ba4u: goto label_474ba4;
        case 0x474ba8u: goto label_474ba8;
        case 0x474bacu: goto label_474bac;
        case 0x474bb0u: goto label_474bb0;
        case 0x474bb4u: goto label_474bb4;
        case 0x474bb8u: goto label_474bb8;
        case 0x474bbcu: goto label_474bbc;
        case 0x474bc0u: goto label_474bc0;
        case 0x474bc4u: goto label_474bc4;
        case 0x474bc8u: goto label_474bc8;
        case 0x474bccu: goto label_474bcc;
        case 0x474bd0u: goto label_474bd0;
        case 0x474bd4u: goto label_474bd4;
        case 0x474bd8u: goto label_474bd8;
        case 0x474bdcu: goto label_474bdc;
        case 0x474be0u: goto label_474be0;
        case 0x474be4u: goto label_474be4;
        case 0x474be8u: goto label_474be8;
        case 0x474becu: goto label_474bec;
        case 0x474bf0u: goto label_474bf0;
        case 0x474bf4u: goto label_474bf4;
        case 0x474bf8u: goto label_474bf8;
        case 0x474bfcu: goto label_474bfc;
        default: break;
    }

    ctx->pc = 0x474750u;

label_474750:
    // 0x474750: 0x27bdfaa0  addiu       $sp, $sp, -0x560
    ctx->pc = 0x474750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965920));
label_474754:
    // 0x474754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x474754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_474758:
    // 0x474758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x474758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47475c:
    // 0x47475c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47475cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_474760:
    // 0x474760: 0xafa404f0  sw          $a0, 0x4F0($sp)
    ctx->pc = 0x474760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1264), GPR_U32(ctx, 4));
label_474764:
    // 0x474764: 0xafa50500  sw          $a1, 0x500($sp)
    ctx->pc = 0x474764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 5));
label_474768:
    // 0x474768: 0xe7ac0510  swc1        $f12, 0x510($sp)
    ctx->pc = 0x474768u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
label_47476c:
    // 0x47476c: 0xe7ad0520  swc1        $f13, 0x520($sp)
    ctx->pc = 0x47476cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_474770:
    // 0x474770: 0xe7ae0530  swc1        $f14, 0x530($sp)
    ctx->pc = 0x474770u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
label_474774:
    // 0x474774: 0xe7af0540  swc1        $f15, 0x540($sp)
    ctx->pc = 0x474774u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_474778:
    // 0x474778: 0xafa60550  sw          $a2, 0x550($sp)
    ctx->pc = 0x474778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1360), GPR_U32(ctx, 6));
label_47477c:
    // 0x47477c: 0x8fa404f0  lw          $a0, 0x4F0($sp)
    ctx->pc = 0x47477cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_474780:
    // 0x474780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x474780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_474784:
    // 0x474784: 0xc11ca2c  jal         func_4728B0
label_474788:
    if (ctx->pc == 0x474788u) {
        ctx->pc = 0x47478Cu;
        goto label_47478c;
    }
    ctx->pc = 0x474784u;
    SET_GPR_U32(ctx, 31, 0x47478Cu);
    ctx->pc = 0x4728B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4728B0u, 0x474784u, 0x47478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47478Cu;
label_47478c:
    // 0x47478c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x47478cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_474790:
    // 0x474790: 0x24636d60  addiu       $v1, $v1, 0x6D60
    ctx->pc = 0x474790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28000));
label_474794:
    // 0x474794: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x474794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_474798:
    // 0x474798: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x474798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_47479c:
    // 0x47479c: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x47479cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4747a0:
    // 0x4747a0: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x4747a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4747a4:
    // 0x4747a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4747a8:
    if (ctx->pc == 0x4747A8u) {
        ctx->pc = 0x4747ACu;
        goto label_4747ac;
    }
    ctx->pc = 0x4747A4u;
    {
        const bool branch_taken_0x4747a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4747a4) {
            ctx->pc = 0x4747B8u;
            goto label_4747b8;
        }
    }
    ctx->pc = 0x4747ACu;
label_4747ac:
    // 0x4747ac: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x4747acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4747b0:
    // 0x4747b0: 0x1000010d  b           . + 4 + (0x10D << 2)
label_4747b4:
    if (ctx->pc == 0x4747B4u) {
        ctx->pc = 0x4747B8u;
        goto label_4747b8;
    }
    ctx->pc = 0x4747B0u;
    {
        const bool branch_taken_0x4747b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4747b0) {
            ctx->pc = 0x474BE8u;
            goto label_474be8;
        }
    }
    ctx->pc = 0x4747B8u;
label_4747b8:
    // 0x4747b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4747b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4747bc:
    // 0x4747bc: 0x8fa20550  lw          $v0, 0x550($sp)
    ctx->pc = 0x4747bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1360)));
label_4747c0:
    // 0x4747c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4747c4:
    if (ctx->pc == 0x4747C4u) {
        ctx->pc = 0x4747C8u;
        goto label_4747c8;
    }
    ctx->pc = 0x4747C0u;
    {
        const bool branch_taken_0x4747c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4747c0) {
            ctx->pc = 0x4747ECu;
            goto label_4747ec;
        }
    }
    ctx->pc = 0x4747C8u;
label_4747c8:
    // 0x4747c8: 0x8fa40550  lw          $a0, 0x550($sp)
    ctx->pc = 0x4747c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1360)));
label_4747cc:
    // 0x4747cc: 0xc11be2c  jal         func_46F8B0
label_4747d0:
    if (ctx->pc == 0x4747D0u) {
        ctx->pc = 0x4747D4u;
        goto label_4747d4;
    }
    ctx->pc = 0x4747CCu;
    SET_GPR_U32(ctx, 31, 0x4747D4u);
    ctx->pc = 0x46F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F8B0u, 0x4747CCu, 0x4747D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4747D4u;
label_4747d4:
    // 0x4747d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4747d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4747d8:
    // 0x4747d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4747d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4747dc:
    // 0x4747dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4747e0:
    if (ctx->pc == 0x4747E0u) {
        ctx->pc = 0x4747E4u;
        goto label_4747e4;
    }
    ctx->pc = 0x4747DCu;
    {
        const bool branch_taken_0x4747dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4747dc) {
            ctx->pc = 0x4747ECu;
            goto label_4747ec;
        }
    }
    ctx->pc = 0x4747E4u;
label_4747e4:
    // 0x4747e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4747e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4747e8:
    // 0x4747e8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x4747e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4747ec:
    // 0x4747ec: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x4747ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_4747f0:
    // 0x4747f0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4747f4:
    if (ctx->pc == 0x4747F4u) {
        ctx->pc = 0x4747F8u;
        goto label_4747f8;
    }
    ctx->pc = 0x4747F0u;
    {
        const bool branch_taken_0x4747f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4747f0) {
            ctx->pc = 0x4748A0u;
            goto label_4748a0;
        }
    }
    ctx->pc = 0x4747F8u;
label_4747f8:
    // 0x4747f8: 0x8f82b424  lw          $v0, -0x4BDC($gp)
    ctx->pc = 0x4747f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947876)));
label_4747fc:
    // 0x4747fc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_474800:
    if (ctx->pc == 0x474800u) {
        ctx->pc = 0x474804u;
        goto label_474804;
    }
    ctx->pc = 0x4747FCu;
    {
        const bool branch_taken_0x4747fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4747fc) {
            ctx->pc = 0x4748A0u;
            goto label_4748a0;
        }
    }
    ctx->pc = 0x474804u;
label_474804:
    // 0x474804: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x474804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_474808:
    // 0x474808: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47480c:
    // 0x47480c: 0x27a604e0  addiu       $a2, $sp, 0x4E0
    ctx->pc = 0x47480cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_474810:
    // 0x474810: 0xc115ee8  jal         func_457BA0
label_474814:
    if (ctx->pc == 0x474814u) {
        ctx->pc = 0x474818u;
        goto label_474818;
    }
    ctx->pc = 0x474810u;
    SET_GPR_U32(ctx, 31, 0x474818u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x474810u, 0x474818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474818u;
label_474818:
    // 0x474818: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47481c:
    if (ctx->pc == 0x47481Cu) {
        ctx->pc = 0x474820u;
        goto label_474820;
    }
    ctx->pc = 0x474818u;
    {
        const bool branch_taken_0x474818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474818) {
            ctx->pc = 0x4748A0u;
            goto label_4748a0;
        }
    }
    ctx->pc = 0x474820u;
label_474820:
    // 0x474820: 0x8fa204e8  lw          $v0, 0x4E8($sp)
    ctx->pc = 0x474820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1256)));
label_474824:
    // 0x474824: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_474828:
    if (ctx->pc == 0x474828u) {
        ctx->pc = 0x47482Cu;
        goto label_47482c;
    }
    ctx->pc = 0x474824u;
    {
        const bool branch_taken_0x474824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474824) {
            ctx->pc = 0x4748A0u;
            goto label_4748a0;
        }
    }
    ctx->pc = 0x47482Cu;
label_47482c:
    // 0x47482c: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x47482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_474830:
    // 0x474830: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474834:
    // 0x474834: 0x8fa604e4  lw          $a2, 0x4E4($sp)
    ctx->pc = 0x474834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1252)));
label_474838:
    // 0x474838: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x474838u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47483c:
    // 0x47483c: 0x24e70af0  addiu       $a3, $a3, 0xAF0
    ctx->pc = 0x47483cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2800));
label_474840:
    // 0x474840: 0x24080035  addiu       $t0, $zero, 0x35
    ctx->pc = 0x474840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_474844:
    // 0x474844: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x474844u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_474848:
    // 0x474848: 0x25290b10  addiu       $t1, $t1, 0xB10
    ctx->pc = 0x474848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2832));
label_47484c:
    // 0x47484c: 0xc113940  jal         func_44E500
label_474850:
    if (ctx->pc == 0x474850u) {
        ctx->pc = 0x474854u;
        goto label_474854;
    }
    ctx->pc = 0x47484Cu;
    SET_GPR_U32(ctx, 31, 0x474854u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47484Cu, 0x474854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474854u;
label_474854:
    // 0x474854: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x474854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_474858:
    // 0x474858: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x474858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47485c:
    // 0x47485c: 0x24a50b40  addiu       $a1, $a1, 0xB40
    ctx->pc = 0x47485cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2880));
label_474860:
    // 0x474860: 0xc115c24  jal         func_457090
label_474864:
    if (ctx->pc == 0x474864u) {
        ctx->pc = 0x474868u;
        goto label_474868;
    }
    ctx->pc = 0x474860u;
    SET_GPR_U32(ctx, 31, 0x474868u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x474860u, 0x474868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474868u;
label_474868:
    // 0x474868: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x474868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_47486c:
    // 0x47486c: 0x8fa204e8  lw          $v0, 0x4E8($sp)
    ctx->pc = 0x47486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1256)));
label_474870:
    // 0x474870: 0x40f809  jalr        $v0
label_474874:
    if (ctx->pc == 0x474874u) {
        ctx->pc = 0x474878u;
        goto label_474878;
    }
    ctx->pc = 0x474870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x474878u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474870u, 0x474878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x474878u;
label_474878:
    // 0x474878: 0xaf82b424  sw          $v0, -0x4BDC($gp)
    ctx->pc = 0x474878u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947876), GPR_U32(ctx, 2));
label_47487c:
    // 0x47487c: 0x8fa20390  lw          $v0, 0x390($sp)
    ctx->pc = 0x47487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
label_474880:
    // 0x474880: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_474884:
    if (ctx->pc == 0x474884u) {
        ctx->pc = 0x474888u;
        goto label_474888;
    }
    ctx->pc = 0x474880u;
    {
        const bool branch_taken_0x474880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474880) {
            ctx->pc = 0x474890u;
            goto label_474890;
        }
    }
    ctx->pc = 0x474888u;
label_474888:
    // 0x474888: 0xd  break       0
    ctx->pc = 0x474888u;
    runtime->handleBreak(rdram, ctx);
label_47488c:
    // 0x47488c: 0x0  nop
    ctx->pc = 0x47488cu;
    // NOP
label_474890:
    // 0x474890: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x474890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_474894:
    // 0x474894: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x474894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_474898:
    // 0x474898: 0xc11392c  jal         func_44E4B0
label_47489c:
    if (ctx->pc == 0x47489Cu) {
        ctx->pc = 0x4748A0u;
        goto label_4748a0;
    }
    ctx->pc = 0x474898u;
    SET_GPR_U32(ctx, 31, 0x4748A0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x474898u, 0x4748A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4748A0u;
label_4748a0:
    // 0x4748a0: 0x8fa30500  lw          $v1, 0x500($sp)
    ctx->pc = 0x4748a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
label_4748a4:
    // 0x4748a4: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x4748a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4748a8:
    // 0x4748a8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x4748a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_4748ac:
    // 0x4748ac: 0x8fa30550  lw          $v1, 0x550($sp)
    ctx->pc = 0x4748acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1360)));
label_4748b0:
    // 0x4748b0: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x4748b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4748b4:
    // 0x4748b4: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x4748b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_4748b8:
    // 0x4748b8: 0xc7a00510  lwc1        $f0, 0x510($sp)
    ctx->pc = 0x4748b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4748bc:
    // 0x4748bc: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x4748bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4748c0:
    // 0x4748c0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x4748c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_4748c4:
    // 0x4748c4: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x4748c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4748c8:
    // 0x4748c8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x4748c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_4748cc:
    // 0x4748cc: 0xc7a00520  lwc1        $f0, 0x520($sp)
    ctx->pc = 0x4748ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4748d0:
    // 0x4748d0: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x4748d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4748d4:
    // 0x4748d4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x4748d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_4748d8:
    // 0x4748d8: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x4748d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4748dc:
    // 0x4748dc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x4748dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_4748e0:
    // 0x4748e0: 0xc7a00530  lwc1        $f0, 0x530($sp)
    ctx->pc = 0x4748e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4748e4:
    // 0x4748e4: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x4748e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4748e8:
    // 0x4748e8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x4748e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_4748ec:
    // 0x4748ec: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x4748ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4748f0:
    // 0x4748f0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x4748f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_4748f4:
    // 0x4748f4: 0xc7a00540  lwc1        $f0, 0x540($sp)
    ctx->pc = 0x4748f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4748f8:
    // 0x4748f8: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x4748f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4748fc:
    // 0x4748fc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x4748fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_474900:
    // 0x474900: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x474900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_474904:
    // 0x474904: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x474904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_474908:
    // 0x474908: 0xc0ec604  jal         func_3B1810
label_47490c:
    if (ctx->pc == 0x47490Cu) {
        ctx->pc = 0x474910u;
        goto label_474910;
    }
    ctx->pc = 0x474908u;
    SET_GPR_U32(ctx, 31, 0x474910u);
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x474908u, 0x474910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474910u;
label_474910:
    // 0x474910: 0x8fa304f0  lw          $v1, 0x4F0($sp)
    ctx->pc = 0x474910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_474914:
    // 0x474914: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x474914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_474918:
    // 0x474918: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x474918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_47491c:
    // 0x47491c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x47491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_474920:
    // 0x474920: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x474920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_474924:
    // 0x474924: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x474924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_474928:
    // 0x474928: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47492c:
    if (ctx->pc == 0x47492Cu) {
        ctx->pc = 0x474930u;
        goto label_474930;
    }
    ctx->pc = 0x474928u;
    {
        const bool branch_taken_0x474928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474928) {
            ctx->pc = 0x4749D8u;
            goto label_4749d8;
        }
    }
    ctx->pc = 0x474930u;
label_474930:
    // 0x474930: 0x8f82b428  lw          $v0, -0x4BD8($gp)
    ctx->pc = 0x474930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947880)));
label_474934:
    // 0x474934: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_474938:
    if (ctx->pc == 0x474938u) {
        ctx->pc = 0x47493Cu;
        goto label_47493c;
    }
    ctx->pc = 0x474934u;
    {
        const bool branch_taken_0x474934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474934) {
            ctx->pc = 0x4749D8u;
            goto label_4749d8;
        }
    }
    ctx->pc = 0x47493Cu;
label_47493c:
    // 0x47493c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47493cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_474940:
    // 0x474940: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474944:
    // 0x474944: 0x27a604d0  addiu       $a2, $sp, 0x4D0
    ctx->pc = 0x474944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_474948:
    // 0x474948: 0xc115ee8  jal         func_457BA0
label_47494c:
    if (ctx->pc == 0x47494Cu) {
        ctx->pc = 0x474950u;
        goto label_474950;
    }
    ctx->pc = 0x474948u;
    SET_GPR_U32(ctx, 31, 0x474950u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x474948u, 0x474950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474950u;
label_474950:
    // 0x474950: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_474954:
    if (ctx->pc == 0x474954u) {
        ctx->pc = 0x474958u;
        goto label_474958;
    }
    ctx->pc = 0x474950u;
    {
        const bool branch_taken_0x474950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474950) {
            ctx->pc = 0x4749D8u;
            goto label_4749d8;
        }
    }
    ctx->pc = 0x474958u;
label_474958:
    // 0x474958: 0x8fa204d8  lw          $v0, 0x4D8($sp)
    ctx->pc = 0x474958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1240)));
label_47495c:
    // 0x47495c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_474960:
    if (ctx->pc == 0x474960u) {
        ctx->pc = 0x474964u;
        goto label_474964;
    }
    ctx->pc = 0x47495Cu;
    {
        const bool branch_taken_0x47495c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47495c) {
            ctx->pc = 0x4749D8u;
            goto label_4749d8;
        }
    }
    ctx->pc = 0x474964u;
label_474964:
    // 0x474964: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x474964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_474968:
    // 0x474968: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47496c:
    // 0x47496c: 0x8fa604d4  lw          $a2, 0x4D4($sp)
    ctx->pc = 0x47496cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1236)));
label_474970:
    // 0x474970: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x474970u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_474974:
    // 0x474974: 0x24e70af0  addiu       $a3, $a3, 0xAF0
    ctx->pc = 0x474974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2800));
label_474978:
    // 0x474978: 0x24080043  addiu       $t0, $zero, 0x43
    ctx->pc = 0x474978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_47497c:
    // 0x47497c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47497cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_474980:
    // 0x474980: 0x25290b90  addiu       $t1, $t1, 0xB90
    ctx->pc = 0x474980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2960));
label_474984:
    // 0x474984: 0xc113940  jal         func_44E500
label_474988:
    if (ctx->pc == 0x474988u) {
        ctx->pc = 0x47498Cu;
        goto label_47498c;
    }
    ctx->pc = 0x474984u;
    SET_GPR_U32(ctx, 31, 0x47498Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x474984u, 0x47498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47498Cu;
label_47498c:
    // 0x47498c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x47498cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_474990:
    // 0x474990: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x474990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_474994:
    // 0x474994: 0x24a50ba0  addiu       $a1, $a1, 0xBA0
    ctx->pc = 0x474994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2976));
label_474998:
    // 0x474998: 0xc115c24  jal         func_457090
label_47499c:
    if (ctx->pc == 0x47499Cu) {
        ctx->pc = 0x4749A0u;
        goto label_4749a0;
    }
    ctx->pc = 0x474998u;
    SET_GPR_U32(ctx, 31, 0x4749A0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x474998u, 0x4749A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4749A0u;
label_4749a0:
    // 0x4749a0: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x4749a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_4749a4:
    // 0x4749a4: 0x8fa204d8  lw          $v0, 0x4D8($sp)
    ctx->pc = 0x4749a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1240)));
label_4749a8:
    // 0x4749a8: 0x40f809  jalr        $v0
label_4749ac:
    if (ctx->pc == 0x4749ACu) {
        ctx->pc = 0x4749B0u;
        goto label_4749b0;
    }
    ctx->pc = 0x4749A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4749B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4749A8u, 0x4749B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4749B0u;
label_4749b0:
    // 0x4749b0: 0xaf82b428  sw          $v0, -0x4BD8($gp)
    ctx->pc = 0x4749b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947880), GPR_U32(ctx, 2));
label_4749b4:
    // 0x4749b4: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x4749b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_4749b8:
    // 0x4749b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4749bc:
    if (ctx->pc == 0x4749BCu) {
        ctx->pc = 0x4749C0u;
        goto label_4749c0;
    }
    ctx->pc = 0x4749B8u;
    {
        const bool branch_taken_0x4749b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4749b8) {
            ctx->pc = 0x4749C8u;
            goto label_4749c8;
        }
    }
    ctx->pc = 0x4749C0u;
label_4749c0:
    // 0x4749c0: 0xd  break       0
    ctx->pc = 0x4749c0u;
    runtime->handleBreak(rdram, ctx);
label_4749c4:
    // 0x4749c4: 0x0  nop
    ctx->pc = 0x4749c4u;
    // NOP
label_4749c8:
    // 0x4749c8: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x4749c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_4749cc:
    // 0x4749cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4749ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4749d0:
    // 0x4749d0: 0xc11392c  jal         func_44E4B0
label_4749d4:
    if (ctx->pc == 0x4749D4u) {
        ctx->pc = 0x4749D8u;
        goto label_4749d8;
    }
    ctx->pc = 0x4749D0u;
    SET_GPR_U32(ctx, 31, 0x4749D8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4749D0u, 0x4749D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4749D8u;
label_4749d8:
    // 0x4749d8: 0x8fa404f0  lw          $a0, 0x4F0($sp)
    ctx->pc = 0x4749d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4749dc:
    // 0x4749dc: 0x8fa604f0  lw          $a2, 0x4F0($sp)
    ctx->pc = 0x4749dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4749e0:
    // 0x4749e0: 0x8fa504f0  lw          $a1, 0x4F0($sp)
    ctx->pc = 0x4749e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4749e4:
    // 0x4749e4: 0x8fa304f0  lw          $v1, 0x4F0($sp)
    ctx->pc = 0x4749e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4749e8:
    // 0x4749e8: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x4749e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4749ec:
    // 0x4749ec: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x4749ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_4749f0:
    // 0x4749f0: 0xc4cc0030  lwc1        $f12, 0x30($a2)
    ctx->pc = 0x4749f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4749f4:
    // 0x4749f4: 0xc4ad0034  lwc1        $f13, 0x34($a1)
    ctx->pc = 0x4749f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4749f8:
    // 0x4749f8: 0xc46e0038  lwc1        $f14, 0x38($v1)
    ctx->pc = 0x4749f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4749fc:
    // 0x4749fc: 0xc44f003c  lwc1        $f15, 0x3C($v0)
    ctx->pc = 0x4749fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_474a00:
    // 0x474a00: 0xc0ec750  jal         func_3B1D40
label_474a04:
    if (ctx->pc == 0x474A04u) {
        ctx->pc = 0x474A08u;
        goto label_474a08;
    }
    ctx->pc = 0x474A00u;
    SET_GPR_U32(ctx, 31, 0x474A08u);
    ctx->pc = 0x3B1D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1D40u, 0x474A00u, 0x474A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474A08u;
label_474a08:
    // 0x474a08: 0x8fa20500  lw          $v0, 0x500($sp)
    ctx->pc = 0x474a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
label_474a0c:
    // 0x474a0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_474a10:
    if (ctx->pc == 0x474A10u) {
        ctx->pc = 0x474A14u;
        goto label_474a14;
    }
    ctx->pc = 0x474A0Cu;
    {
        const bool branch_taken_0x474a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474a0c) {
            ctx->pc = 0x474A20u;
            goto label_474a20;
        }
    }
    ctx->pc = 0x474A14u;
label_474a14:
    // 0x474a14: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x474a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474a18:
    // 0x474a18: 0x10000002  b           . + 4 + (0x2 << 2)
label_474a1c:
    if (ctx->pc == 0x474A1Cu) {
        ctx->pc = 0x474A20u;
        goto label_474a20;
    }
    ctx->pc = 0x474A18u;
    {
        const bool branch_taken_0x474a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x474a18) {
            ctx->pc = 0x474A24u;
            goto label_474a24;
        }
    }
    ctx->pc = 0x474A20u;
label_474a20:
    // 0x474a20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x474a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_474a24:
    // 0x474a24: 0x8fa404f0  lw          $a0, 0x4F0($sp)
    ctx->pc = 0x474a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_474a28:
    // 0x474a28: 0x8fa304f0  lw          $v1, 0x4F0($sp)
    ctx->pc = 0x474a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_474a2c:
    // 0x474a2c: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x474a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_474a30:
    // 0x474a30: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x474a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_474a34:
    // 0x474a34: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x474a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_474a38:
    // 0x474a38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x474a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_474a3c:
    // 0x474a3c: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x474a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_474a40:
    // 0x474a40: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x474a40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_474a44:
    // 0x474a44: 0xc0ee5ba  jal         func_3B96E8
label_474a48:
    if (ctx->pc == 0x474A48u) {
        ctx->pc = 0x474A4Cu;
        goto label_474a4c;
    }
    ctx->pc = 0x474A44u;
    SET_GPR_U32(ctx, 31, 0x474A4Cu);
    ctx->pc = 0x3B96E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B96E8u, 0x474A44u, 0x474A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474A4Cu;
label_474a4c:
    // 0x474a4c: 0x8fa304f0  lw          $v1, 0x4F0($sp)
    ctx->pc = 0x474a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_474a50:
    // 0x474a50: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x474a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_474a54:
    // 0x474a54: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x474a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_474a58:
    // 0x474a58: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x474a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_474a5c:
    // 0x474a5c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x474a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_474a60:
    // 0x474a60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x474a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_474a64:
    // 0x474a64: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_474a68:
    if (ctx->pc == 0x474A68u) {
        ctx->pc = 0x474A6Cu;
        goto label_474a6c;
    }
    ctx->pc = 0x474A64u;
    {
        const bool branch_taken_0x474a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474a64) {
            ctx->pc = 0x474B14u;
            goto label_474b14;
        }
    }
    ctx->pc = 0x474A6Cu;
label_474a6c:
    // 0x474a6c: 0x8f82b42c  lw          $v0, -0x4BD4($gp)
    ctx->pc = 0x474a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947884)));
label_474a70:
    // 0x474a70: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_474a74:
    if (ctx->pc == 0x474A74u) {
        ctx->pc = 0x474A78u;
        goto label_474a78;
    }
    ctx->pc = 0x474A70u;
    {
        const bool branch_taken_0x474a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474a70) {
            ctx->pc = 0x474B14u;
            goto label_474b14;
        }
    }
    ctx->pc = 0x474A78u;
label_474a78:
    // 0x474a78: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x474a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_474a7c:
    // 0x474a7c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474a80:
    // 0x474a80: 0x27a604c0  addiu       $a2, $sp, 0x4C0
    ctx->pc = 0x474a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_474a84:
    // 0x474a84: 0xc115ee8  jal         func_457BA0
label_474a88:
    if (ctx->pc == 0x474A88u) {
        ctx->pc = 0x474A8Cu;
        goto label_474a8c;
    }
    ctx->pc = 0x474A84u;
    SET_GPR_U32(ctx, 31, 0x474A8Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x474A84u, 0x474A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474A8Cu;
label_474a8c:
    // 0x474a8c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_474a90:
    if (ctx->pc == 0x474A90u) {
        ctx->pc = 0x474A94u;
        goto label_474a94;
    }
    ctx->pc = 0x474A8Cu;
    {
        const bool branch_taken_0x474a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474a8c) {
            ctx->pc = 0x474B14u;
            goto label_474b14;
        }
    }
    ctx->pc = 0x474A94u;
label_474a94:
    // 0x474a94: 0x8fa204c8  lw          $v0, 0x4C8($sp)
    ctx->pc = 0x474a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
label_474a98:
    // 0x474a98: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_474a9c:
    if (ctx->pc == 0x474A9Cu) {
        ctx->pc = 0x474AA0u;
        goto label_474aa0;
    }
    ctx->pc = 0x474A98u;
    {
        const bool branch_taken_0x474a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474a98) {
            ctx->pc = 0x474B14u;
            goto label_474b14;
        }
    }
    ctx->pc = 0x474AA0u;
label_474aa0:
    // 0x474aa0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x474aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_474aa4:
    // 0x474aa4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474aa8:
    // 0x474aa8: 0x8fa604c4  lw          $a2, 0x4C4($sp)
    ctx->pc = 0x474aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1220)));
label_474aac:
    // 0x474aac: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x474aacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_474ab0:
    // 0x474ab0: 0x24e70af0  addiu       $a3, $a3, 0xAF0
    ctx->pc = 0x474ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2800));
label_474ab4:
    // 0x474ab4: 0x2408004e  addiu       $t0, $zero, 0x4E
    ctx->pc = 0x474ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_474ab8:
    // 0x474ab8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x474ab8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_474abc:
    // 0x474abc: 0x25290be0  addiu       $t1, $t1, 0xBE0
    ctx->pc = 0x474abcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3040));
label_474ac0:
    // 0x474ac0: 0xc113940  jal         func_44E500
label_474ac4:
    if (ctx->pc == 0x474AC4u) {
        ctx->pc = 0x474AC8u;
        goto label_474ac8;
    }
    ctx->pc = 0x474AC0u;
    SET_GPR_U32(ctx, 31, 0x474AC8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x474AC0u, 0x474AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474AC8u;
label_474ac8:
    // 0x474ac8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x474ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_474acc:
    // 0x474acc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x474accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_474ad0:
    // 0x474ad0: 0x24a50c00  addiu       $a1, $a1, 0xC00
    ctx->pc = 0x474ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
label_474ad4:
    // 0x474ad4: 0xc115c24  jal         func_457090
label_474ad8:
    if (ctx->pc == 0x474AD8u) {
        ctx->pc = 0x474ADCu;
        goto label_474adc;
    }
    ctx->pc = 0x474AD4u;
    SET_GPR_U32(ctx, 31, 0x474ADCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x474AD4u, 0x474ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474ADCu;
label_474adc:
    // 0x474adc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x474adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_474ae0:
    // 0x474ae0: 0x8fa204c8  lw          $v0, 0x4C8($sp)
    ctx->pc = 0x474ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
label_474ae4:
    // 0x474ae4: 0x40f809  jalr        $v0
label_474ae8:
    if (ctx->pc == 0x474AE8u) {
        ctx->pc = 0x474AECu;
        goto label_474aec;
    }
    ctx->pc = 0x474AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x474AECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474AE4u, 0x474AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x474AECu;
label_474aec:
    // 0x474aec: 0xaf82b42c  sw          $v0, -0x4BD4($gp)
    ctx->pc = 0x474aecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947884), GPR_U32(ctx, 2));
label_474af0:
    // 0x474af0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x474af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_474af4:
    // 0x474af4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_474af8:
    if (ctx->pc == 0x474AF8u) {
        ctx->pc = 0x474AFCu;
        goto label_474afc;
    }
    ctx->pc = 0x474AF4u;
    {
        const bool branch_taken_0x474af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474af4) {
            ctx->pc = 0x474B04u;
            goto label_474b04;
        }
    }
    ctx->pc = 0x474AFCu;
label_474afc:
    // 0x474afc: 0xd  break       0
    ctx->pc = 0x474afcu;
    runtime->handleBreak(rdram, ctx);
label_474b00:
    // 0x474b00: 0x0  nop
    ctx->pc = 0x474b00u;
    // NOP
label_474b04:
    // 0x474b04: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x474b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_474b08:
    // 0x474b08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x474b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_474b0c:
    // 0x474b0c: 0xc11392c  jal         func_44E4B0
label_474b10:
    if (ctx->pc == 0x474B10u) {
        ctx->pc = 0x474B14u;
        goto label_474b14;
    }
    ctx->pc = 0x474B0Cu;
    SET_GPR_U32(ctx, 31, 0x474B14u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x474B0Cu, 0x474B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474B14u;
label_474b14:
    // 0x474b14: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x474b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_474b18:
    // 0x474b18: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x474b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_474b1c:
    // 0x474b1c: 0xc0ee6d8  jal         func_3B9B60
label_474b20:
    if (ctx->pc == 0x474B20u) {
        ctx->pc = 0x474B24u;
        goto label_474b24;
    }
    ctx->pc = 0x474B1Cu;
    SET_GPR_U32(ctx, 31, 0x474B24u);
    ctx->pc = 0x3B9B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9B60u, 0x474B1Cu, 0x474B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474B24u;
label_474b24:
    // 0x474b24: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x474b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_474b28:
    // 0x474b28: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x474b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_474b2c:
    // 0x474b2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x474b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_474b30:
    // 0x474b30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x474b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_474b34:
    // 0x474b34: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_474b38:
    if (ctx->pc == 0x474B38u) {
        ctx->pc = 0x474B3Cu;
        goto label_474b3c;
    }
    ctx->pc = 0x474B34u;
    {
        const bool branch_taken_0x474b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474b34) {
            ctx->pc = 0x474BE4u;
            goto label_474be4;
        }
    }
    ctx->pc = 0x474B3Cu;
label_474b3c:
    // 0x474b3c: 0x8f82b430  lw          $v0, -0x4BD0($gp)
    ctx->pc = 0x474b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947888)));
label_474b40:
    // 0x474b40: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_474b44:
    if (ctx->pc == 0x474B44u) {
        ctx->pc = 0x474B48u;
        goto label_474b48;
    }
    ctx->pc = 0x474B40u;
    {
        const bool branch_taken_0x474b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474b40) {
            ctx->pc = 0x474BE4u;
            goto label_474be4;
        }
    }
    ctx->pc = 0x474B48u;
label_474b48:
    // 0x474b48: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x474b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_474b4c:
    // 0x474b4c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474b50:
    // 0x474b50: 0x27a604b0  addiu       $a2, $sp, 0x4B0
    ctx->pc = 0x474b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_474b54:
    // 0x474b54: 0xc115ee8  jal         func_457BA0
label_474b58:
    if (ctx->pc == 0x474B58u) {
        ctx->pc = 0x474B5Cu;
        goto label_474b5c;
    }
    ctx->pc = 0x474B54u;
    SET_GPR_U32(ctx, 31, 0x474B5Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x474B54u, 0x474B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474B5Cu;
label_474b5c:
    // 0x474b5c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_474b60:
    if (ctx->pc == 0x474B60u) {
        ctx->pc = 0x474B64u;
        goto label_474b64;
    }
    ctx->pc = 0x474B5Cu;
    {
        const bool branch_taken_0x474b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474b5c) {
            ctx->pc = 0x474BE4u;
            goto label_474be4;
        }
    }
    ctx->pc = 0x474B64u;
label_474b64:
    // 0x474b64: 0x8fa204b8  lw          $v0, 0x4B8($sp)
    ctx->pc = 0x474b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
label_474b68:
    // 0x474b68: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_474b6c:
    if (ctx->pc == 0x474B6Cu) {
        ctx->pc = 0x474B70u;
        goto label_474b70;
    }
    ctx->pc = 0x474B68u;
    {
        const bool branch_taken_0x474b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474b68) {
            ctx->pc = 0x474BE4u;
            goto label_474be4;
        }
    }
    ctx->pc = 0x474B70u;
label_474b70:
    // 0x474b70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x474b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_474b74:
    // 0x474b74: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474b78:
    // 0x474b78: 0x8fa604b4  lw          $a2, 0x4B4($sp)
    ctx->pc = 0x474b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
label_474b7c:
    // 0x474b7c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x474b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_474b80:
    // 0x474b80: 0x24e70af0  addiu       $a3, $a3, 0xAF0
    ctx->pc = 0x474b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2800));
label_474b84:
    // 0x474b84: 0x24080053  addiu       $t0, $zero, 0x53
    ctx->pc = 0x474b84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_474b88:
    // 0x474b88: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x474b88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_474b8c:
    // 0x474b8c: 0x25290be0  addiu       $t1, $t1, 0xBE0
    ctx->pc = 0x474b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3040));
label_474b90:
    // 0x474b90: 0xc113940  jal         func_44E500
label_474b94:
    if (ctx->pc == 0x474B94u) {
        ctx->pc = 0x474B98u;
        goto label_474b98;
    }
    ctx->pc = 0x474B90u;
    SET_GPR_U32(ctx, 31, 0x474B98u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x474B90u, 0x474B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474B98u;
label_474b98:
    // 0x474b98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x474b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_474b9c:
    // 0x474b9c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x474b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_474ba0:
    // 0x474ba0: 0x24a50c40  addiu       $a1, $a1, 0xC40
    ctx->pc = 0x474ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3136));
label_474ba4:
    // 0x474ba4: 0xc115c24  jal         func_457090
label_474ba8:
    if (ctx->pc == 0x474BA8u) {
        ctx->pc = 0x474BACu;
        goto label_474bac;
    }
    ctx->pc = 0x474BA4u;
    SET_GPR_U32(ctx, 31, 0x474BACu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x474BA4u, 0x474BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474BACu;
label_474bac:
    // 0x474bac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x474bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_474bb0:
    // 0x474bb0: 0x8fa204b8  lw          $v0, 0x4B8($sp)
    ctx->pc = 0x474bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
label_474bb4:
    // 0x474bb4: 0x40f809  jalr        $v0
label_474bb8:
    if (ctx->pc == 0x474BB8u) {
        ctx->pc = 0x474BBCu;
        goto label_474bbc;
    }
    ctx->pc = 0x474BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x474BBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474BB4u, 0x474BBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x474BBCu;
label_474bbc:
    // 0x474bbc: 0xaf82b430  sw          $v0, -0x4BD0($gp)
    ctx->pc = 0x474bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947888), GPR_U32(ctx, 2));
label_474bc0:
    // 0x474bc0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x474bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_474bc4:
    // 0x474bc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_474bc8:
    if (ctx->pc == 0x474BC8u) {
        ctx->pc = 0x474BCCu;
        goto label_474bcc;
    }
    ctx->pc = 0x474BC4u;
    {
        const bool branch_taken_0x474bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474bc4) {
            ctx->pc = 0x474BD4u;
            goto label_474bd4;
        }
    }
    ctx->pc = 0x474BCCu;
label_474bcc:
    // 0x474bcc: 0xd  break       0
    ctx->pc = 0x474bccu;
    runtime->handleBreak(rdram, ctx);
label_474bd0:
    // 0x474bd0: 0x0  nop
    ctx->pc = 0x474bd0u;
    // NOP
label_474bd4:
    // 0x474bd4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x474bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_474bd8:
    // 0x474bd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x474bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_474bdc:
    // 0x474bdc: 0xc11392c  jal         func_44E4B0
label_474be0:
    if (ctx->pc == 0x474BE0u) {
        ctx->pc = 0x474BE4u;
        goto label_474be4;
    }
    ctx->pc = 0x474BDCu;
    SET_GPR_U32(ctx, 31, 0x474BE4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x474BDCu, 0x474BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474BE4u;
label_474be4:
    // 0x474be4: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x474be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_474be8:
    // 0x474be8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x474be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_474bec:
    // 0x474bec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x474becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_474bf0:
    // 0x474bf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x474bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_474bf4:
    // 0x474bf4: 0x27bd0560  addiu       $sp, $sp, 0x560
    ctx->pc = 0x474bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_474bf8:
    // 0x474bf8: 0x3e00008  jr          $ra
label_474bfc:
    if (ctx->pc == 0x474BFCu) {
        ctx->pc = 0x474C00u;
        goto label_fallthrough_0x474bf8;
    }
    ctx->pc = 0x474BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x474bf8:
    ctx->pc = 0x474C00u;
}
